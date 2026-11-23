#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_raven.h"
#include "zend_exceptions.h"
#include "zend_smart_str.h"
#include "zend_interfaces.h"

#include <limits.h>
#include <pthread.h>
#include <stdarg.h>

#include "runtime.h"

ZEND_DECLARE_MODULE_GLOBALS(raven)

/* ------------------------------------------------------------------------------------------------
 * Arena
 * --------------------------------------------------------------------------------------------- */

void *raven_arena_alloc(raven_arena *arena, size_t size)
{
	void *p = ecalloc(1, size ? size : 1);
	if (arena->count == arena->cap) {
		arena->cap = arena->cap ? arena->cap * 2 : 8;
		arena->blocks = erealloc(arena->blocks, arena->cap * sizeof(void *));
	}
	arena->blocks[arena->count++] = p;
	return p;
}

void raven_arena_free(raven_arena *arena)
{
	for (uint32_t i = 0; i < arena->count; i++) {
		efree(arena->blocks[i]);
	}
	if (arena->blocks) {
		efree(arena->blocks);
	}
	arena->blocks = NULL;
	arena->count = arena->cap = 0;
}

/* ------------------------------------------------------------------------------------------------
 * Arguments
 * --------------------------------------------------------------------------------------------- */

bool raven_arg_int(zend_long v, uint32_t arg_num, int *out)
{
	if (v < INT_MIN || v > INT_MAX) {
		zend_argument_value_error(arg_num, "must be between %d and %d", INT_MIN, INT_MAX);
		return false;
	}
	*out = (int)v;
	return true;
}

bool raven_arg_u32(zend_long v, uint32_t arg_num, uint32_t *out)
{
	if (v < 0 || (uint64_t)v > UINT32_MAX) {
		zend_argument_value_error(arg_num, "must be between 0 and %u", UINT32_MAX);
		return false;
	}
	*out = (uint32_t)v;
	return true;
}

bool raven_arg_size(zend_long v, uint32_t arg_num, size_t *out)
{
	if (v < 0) {
		zend_argument_value_error(arg_num, "must be greater than or equal to 0");
		return false;
	}
	*out = (size_t)v;
	return true;
}

bool raven_arg_u64(zend_long v, uint32_t arg_num, uint64_t *out)
{
	if (v < 0) {
		zend_argument_value_error(arg_num, "must be greater than or equal to 0");
		return false;
	}
	*out = (uint64_t)v;
	return true;
}

bool raven_arg_bytes(zend_string *s, uint32_t arg_num, uint64_t a, uint64_t b, uint64_t c, const char *what)
{
	uint64_t need;
	if (__builtin_mul_overflow(a, b, &need) || __builtin_mul_overflow(need, c, &need)) {
		zend_argument_value_error(arg_num, "must hold %s, whose size overflows", what);
		return false;
	}
	if ((uint64_t)ZSTR_LEN(s) < need) {
		zend_argument_value_error(arg_num, "must hold %s: %" PRIu64 " bytes, got %zu", what, need, ZSTR_LEN(s));
		return false;
	}
	return true;
}

bool raven_arg_length(zend_string *s, uint32_t arg_num, size_t size)
{
	if (ZSTR_LEN(s) < size) {
		zend_argument_value_error(arg_num, "must hold at least %zu bytes, got %zu", size, ZSTR_LEN(s));
		return false;
	}
	return true;
}

bool raven_arg_doubles(HashTable *ht, uint32_t arg_num, int count, double **out, raven_arena *arena)
{
	if (count < 0 || zend_hash_num_elements(ht) < (uint32_t)count) {
		zend_argument_value_error(arg_num, "must hold at least %d elements", count < 0 ? 0 : count);
		return false;
	}
	double *values = raven_arena_alloc(arena, sizeof(double) * (size_t)(count ? count : 1));
	int i = 0;
	zval *v;
	ZEND_HASH_FOREACH_VAL(ht, v) {
		if (i == count) {
			break;
		}
		ZVAL_DEREF(v);
		if (Z_TYPE_P(v) == IS_DOUBLE) {
			values[i] = Z_DVAL_P(v);
		} else if (Z_TYPE_P(v) == IS_LONG) {
			values[i] = (double)Z_LVAL_P(v);
		} else {
			zend_argument_type_error(arg_num, "must hold only int or float, %s given at position %d", zend_zval_value_name(v), i);
			return false;
		}
		i++;
	} ZEND_HASH_FOREACH_END();
	*out = values;
	return true;
}

bool raven_arg_floats(HashTable *ht, uint32_t arg_num, int count, float **out, raven_arena *arena)
{
	if (count < 0 || zend_hash_num_elements(ht) < (uint32_t)count) {
		zend_argument_value_error(arg_num, "must hold at least %d elements", count < 0 ? 0 : count);
		return false;
	}
	float *values = raven_arena_alloc(arena, sizeof(float) * (size_t)(count ? count : 1));
	int i = 0;
	zval *v;
	ZEND_HASH_FOREACH_VAL(ht, v) {
		if (i == count) {
			break;
		}
		ZVAL_DEREF(v);
		if (Z_TYPE_P(v) == IS_DOUBLE) {
			values[i] = (float)Z_DVAL_P(v);
		} else if (Z_TYPE_P(v) == IS_LONG) {
			values[i] = (float)Z_LVAL_P(v);
		} else {
			zend_argument_type_error(arg_num, "must hold only int or float, %s given at position %d", zend_zval_value_name(v), i);
			return false;
		}
		i++;
	} ZEND_HASH_FOREACH_END();
	*out = values;
	return true;
}

bool raven_arg_strings(HashTable *ht, uint32_t arg_num, int count, const char ***out, raven_arena *arena)
{
	if (count < 0 || zend_hash_num_elements(ht) < (uint32_t)count) {
		zend_argument_value_error(arg_num, "must hold at least %d elements", count < 0 ? 0 : count);
		return false;
	}
	const char **values = raven_arena_alloc(arena, sizeof(char *) * (size_t)(count + 1));
	int i = 0;
	zval *v;
	ZEND_HASH_FOREACH_VAL(ht, v) {
		if (i == count) {
			break;
		}
		ZVAL_DEREF(v);
		if (Z_TYPE_P(v) != IS_STRING) {
			zend_argument_type_error(arg_num, "must hold only strings, %s given at position %d", zend_zval_value_name(v), i);
			return false;
		}
		values[i++] = Z_STRVAL_P(v);
	} ZEND_HASH_FOREACH_END();
	*out = values;
	return true;
}

bool raven_arg_structs(HashTable *ht, uint32_t arg_num, int count, const raven_struct *s, void **out, raven_arena *arena)
{
	if (count < 0 || zend_hash_num_elements(ht) < (uint32_t)count) {
		zend_argument_value_error(arg_num, "must hold at least %d elements", count < 0 ? 0 : count);
		return false;
	}
	char *values = raven_arena_alloc(arena, s->size * (size_t)(count ? count : 1));
	int i = 0;
	zval *v;
	ZEND_HASH_FOREACH_VAL(ht, v) {
		if (i == count) {
			break;
		}
		ZVAL_DEREF(v);
		if (Z_TYPE_P(v) != IS_OBJECT || Z_OBJCE_P(v) != *s->ce) {
			zend_argument_type_error(arg_num, "must hold only %s, %s given at position %d", s->name, zend_zval_value_name(v), i);
			return false;
		}
		if (!raven_struct_from_object(s, Z_OBJ_P(v), values + s->size * (size_t)i, arena, arg_num)) {
			return false;
		}
		i++;
	} ZEND_HASH_FOREACH_END();
	*out = values;
	return true;
}

/* ------------------------------------------------------------------------------------------------
 * Struct conversion
 * --------------------------------------------------------------------------------------------- */

static bool raven_field_number(zval *v, double *d, zend_long *l)
{
	ZVAL_DEREF(v);
	if (Z_TYPE_P(v) == IS_LONG) {
		*l = Z_LVAL_P(v);
		*d = (double)*l;
		return true;
	}
	if (Z_TYPE_P(v) == IS_DOUBLE) {
		*d = Z_DVAL_P(v);
		*l = (zend_long)*d;
		return true;
	}
	return false;
}

static bool raven_field_error(const raven_struct *s, const raven_field *f, uint32_t arg_num, const char *msg)
{
	zend_argument_value_error(arg_num, "%s::$%s %s", s->name, f->name, msg);
	return false;
}

bool raven_struct_from_object(const raven_struct *s, zend_object *obj, void *out, raven_arena *arena, uint32_t arg_num)
{
	char *base = out;
	memset(out, 0, s->size);
	uint32_t i = 0;
	for (const raven_field *f = s->fields; f->type != RAVEN_F_END; f++, i++) {
		zval *v = OBJ_PROP_NUM(obj, i);
		void *dst = base + f->offset;
		double d;
		zend_long l;
		ZVAL_DEREF(v);
		switch (f->type) {
			case RAVEN_F_INT:
				if (!raven_field_number(v, &d, &l) || l < INT_MIN || l > INT_MAX) {
					return raven_field_error(s, f, arg_num, "must be an int between -2147483648 and 2147483647");
				}
				*(int *)dst = (int)l;
				break;
			case RAVEN_F_U32:
				if (!raven_field_number(v, &d, &l) || l < 0 || (uint64_t)l > UINT32_MAX) {
					return raven_field_error(s, f, arg_num, "must be an int between 0 and 4294967295");
				}
				*(uint32_t *)dst = (uint32_t)l;
				break;
			case RAVEN_F_U64:
				if (!raven_field_number(v, &d, &l) || l < 0) {
					return raven_field_error(s, f, arg_num, "must be an int greater than or equal to 0");
				}
				*(uint64_t *)dst = (uint64_t)l;
				break;
			case RAVEN_F_ADDR:
				if (!raven_field_number(v, &d, &l)) {
					return raven_field_error(s, f, arg_num, "must be an int");
				}
				*(uintptr_t *)dst = (uintptr_t)l;
				break;
			case RAVEN_F_FLOAT:
				if (!raven_field_number(v, &d, &l)) {
					return raven_field_error(s, f, arg_num, "must be a float");
				}
				*(float *)dst = (float)d;
				break;
			case RAVEN_F_DOUBLE:
				if (!raven_field_number(v, &d, &l)) {
					return raven_field_error(s, f, arg_num, "must be a float");
				}
				*(double *)dst = d;
				break;
			case RAVEN_F_CSTR:
				if (Z_TYPE_P(v) == IS_STRING) {
					*(const char **)dst = Z_STRVAL_P(v);
				} else if (Z_TYPE_P(v) != IS_NULL) {
					return raven_field_error(s, f, arg_num, "must be a string or null");
				}
				break;
			case RAVEN_F_CHARS:
				if (Z_TYPE_P(v) != IS_STRING || Z_STRLEN_P(v) >= f->count) {
					return raven_field_error(s, f, arg_num, "must be a string shorter than its C buffer");
				}
				memcpy(dst, Z_STRVAL_P(v), Z_STRLEN_P(v) + 1);
				break;
			case RAVEN_F_FLOATS:
			case RAVEN_F_INTS: {
				if (Z_TYPE_P(v) != IS_ARRAY || zend_hash_num_elements(Z_ARRVAL_P(v)) != f->count) {
					zend_argument_value_error(arg_num, "%s::$%s must be an array of %u numbers", s->name, f->name, f->count);
					return false;
				}
				uint32_t k = 0;
				zval *e;
				ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(v), e) {
					if (!raven_field_number(e, &d, &l) || (f->type == RAVEN_F_INTS && (l < INT_MIN || l > INT_MAX))) {
						zend_argument_value_error(arg_num, "%s::$%s must be an array of %u numbers", s->name, f->name, f->count);
						return false;
					}
					if (f->type == RAVEN_F_FLOATS) {
						((float *)dst)[k] = (float)d;
					} else {
						((int *)dst)[k] = (int)l;
					}
					k++;
				} ZEND_HASH_FOREACH_END();
				break;
			}
			case RAVEN_F_STRUCT:
				if (Z_TYPE_P(v) != IS_OBJECT || Z_OBJCE_P(v) != *f->sub->ce) {
					return raven_field_error(s, f, arg_num, "must be an object of its struct class");
				}
				if (!raven_struct_from_object(f->sub, Z_OBJ_P(v), dst, arena, arg_num)) {
					return false;
				}
				break;
			case RAVEN_F_STRS:
			case RAVEN_F_STRUCTS: {
				/* The struct's own count field says how many elements Raven reads: the array must hold them. */
				zval *cz = OBJ_PROP_NUM(obj, f->count - 1);
				ZVAL_DEREF(cz);
				if (Z_TYPE_P(v) == IS_NULL) {
					break;
				}
				if (Z_TYPE_P(v) != IS_ARRAY) {
					return raven_field_error(s, f, arg_num, "must be an array or null");
				}
				if (Z_TYPE_P(cz) != IS_LONG || Z_LVAL_P(cz) < 0 || Z_LVAL_P(cz) > INT_MAX) {
					return raven_field_error(s, &s->fields[f->count - 1], arg_num, "must be an int between 0 and 2147483647");
				}
				if (f->type == RAVEN_F_STRS) {
					if (!raven_arg_strings(Z_ARRVAL_P(v), arg_num, (int)Z_LVAL_P(cz), (const char ***)dst, arena)) {
						return false;
					}
				} else if (!raven_arg_structs(Z_ARRVAL_P(v), arg_num, (int)Z_LVAL_P(cz), f->sub, (void **)dst, arena)) {
					return false;
				}
				break;
			}
			case RAVEN_F_BYTES: {
				zval *sz = OBJ_PROP_NUM(obj, f->count - 1);
				ZVAL_DEREF(sz);
				if (Z_TYPE_P(v) == IS_NULL) {
					*(const void **)dst = NULL;
					break;
				}
				if (Z_TYPE_P(v) != IS_STRING) {
					return raven_field_error(s, f, arg_num, "must be a string or null");
				}
				zend_long need = 0;
				if (Z_TYPE_P(sz) == IS_LONG) {
					need = Z_LVAL_P(sz);
				} else if (!raven_field_number(sz, &d, &need)) {
					return raven_field_error(s, &s->fields[f->count - 1], arg_num, "must be an int greater than or equal to 0");
				}
				if (need < 0 || (size_t)need > Z_STRLEN_P(v)) {
					return raven_field_error(s, f, arg_num, "must hold at least size bytes");
				}
				*(const void **)dst = Z_STRVAL_P(v);
				break;
			}
		}
	}
	return true;
}

static void raven_field_to_zval(const raven_struct *s, const raven_field *f, const char *base, zval *z)
{
	const void *src = base + f->offset;
	switch (f->type) {
		case RAVEN_F_INT: ZVAL_LONG(z, *(const int *)src); break;
		case RAVEN_F_U32: ZVAL_LONG(z, *(const uint32_t *)src); break;
		case RAVEN_F_U64: ZVAL_LONG(z, (zend_long)*(const uint64_t *)src); break;
		case RAVEN_F_ADDR: ZVAL_LONG(z, (zend_long)*(const uintptr_t *)src); break;
		case RAVEN_F_FLOAT: ZVAL_DOUBLE(z, *(const float *)src); break;
		case RAVEN_F_DOUBLE: ZVAL_DOUBLE(z, *(const double *)src); break;
		case RAVEN_F_CSTR: {
			const char *s = *(const char *const *)src;
			if (s) {
				ZVAL_STRING(z, s);
			} else {
				ZVAL_NULL(z);
			}
			break;
		}
		case RAVEN_F_CHARS: ZVAL_STRINGL(z, (const char *)src, strnlen((const char *)src, f->count)); break;
		case RAVEN_F_FLOATS:
			array_init_size(z, f->count);
			for (uint32_t k = 0; k < f->count; k++) {
				add_next_index_double(z, ((const float *)src)[k]);
			}
			break;
		case RAVEN_F_INTS:
			array_init_size(z, f->count);
			for (uint32_t k = 0; k < f->count; k++) {
				add_next_index_long(z, ((const int *)src)[k]);
			}
			break;
		case RAVEN_F_STRUCT:
			raven_struct_new(f->sub, src, z);
			break;
		case RAVEN_F_STRS:
		case RAVEN_F_STRUCTS: {
			const void *items = *(const void *const *)src;
			int count = *(const int *)(base + s->fields[f->count - 1].offset);
			if (!items) {
				ZVAL_NULL(z);
				break;
			}
			array_init_size(z, count > 0 ? (uint32_t)count : 0);
			for (int k = 0; k < count; k++) {
				zval e;
				if (f->type == RAVEN_F_STRS) {
					const char *s = ((const char *const *)items)[k];
					if (s) {
						ZVAL_STRING(&e, s);
					} else {
						ZVAL_NULL(&e);
					}
				} else {
					raven_struct_new(f->sub, (const char *)items + f->sub->size * (size_t)k, &e);
				}
				add_next_index_zval(z, &e);
			}
			break;
		}
		case RAVEN_F_BYTES: {
			const void *p = *(const void *const *)src;
			size_t n = *(const size_t *)(base + s->fields[f->count - 1].offset);
			if (!p) {
				ZVAL_NULL(z);
			} else {
				ZVAL_STRINGL(z, (const char *)p, n);
			}
			break;
		}
	}
}

void raven_struct_to_object(const raven_struct *s, const void *in, zend_object *obj)
{
	uint32_t i = 0;
	for (const raven_field *f = s->fields; f->type != RAVEN_F_END; f++, i++) {
		zval *slot = OBJ_PROP_NUM(obj, i);
		zval v;
		raven_field_to_zval(s, f, in, &v);
		zval_ptr_dtor(slot);
		ZVAL_COPY_VALUE(slot, &v);
	}
}

void raven_struct_new(const raven_struct *s, const void *in, zval *out)
{
	object_init_ex(out, *s->ce);
	raven_struct_to_object(s, in, Z_OBJ_P(out));
}

void raven_struct_construct(const raven_struct *s, zend_object *obj, zend_execute_data *execute_data)
{
	uint32_t n = ZEND_NUM_ARGS();
	/* Fixed C arrays not given: N zeros, the C aggregate initializer. */
	uint32_t i = 0;
	for (const raven_field *f = s ? s->fields : NULL; f && f->type != RAVEN_F_END; f++, i++) {
		if (i >= n && (f->type == RAVEN_F_FLOATS || f->type == RAVEN_F_INTS)) {
			zval *slot = OBJ_PROP_NUM(obj, i);
			zval_ptr_dtor(slot);
			array_init_size(slot, f->count);
			for (uint32_t k = 0; k < f->count; k++) {
				if (f->type == RAVEN_F_FLOATS) {
					add_next_index_double(slot, 0.0);
				} else {
					add_next_index_long(slot, 0);
				}
			}
		}
	}
	for (uint32_t i = 0; i < n; i++) {
		zval *arg = ZEND_CALL_ARG(execute_data, i + 1);
		zval *slot = OBJ_PROP_NUM(obj, i);
		zend_property_info *info = zend_get_property_info_for_slot(obj, slot);
		zval tmp;
		ZVAL_COPY(&tmp, arg);
		ZVAL_DEREF(arg);
		if (info && ZEND_TYPE_IS_SET(info->type) && !zend_verify_property_type(info, &tmp, ZEND_ARG_USES_STRICT_TYPES())) {
			zval_ptr_dtor(&tmp);
			return;
		}
		zval_ptr_dtor(slot);
		ZVAL_COPY_VALUE(slot, &tmp);
	}
}

/* ------------------------------------------------------------------------------------------------
 * Owner thread
 * --------------------------------------------------------------------------------------------- */

static pthread_mutex_t raven_owner_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_t raven_owner_thread;
static bool raven_owner_claimed;

void raven_owner_set(void)
{
	pthread_mutex_lock(&raven_owner_lock);
	raven_owner_thread = pthread_self();
	raven_owner_claimed = true;
	pthread_mutex_unlock(&raven_owner_lock);
	raven_threads_owner();
}

bool raven_on_owner_thread(void)
{
	bool ok;
	pthread_mutex_lock(&raven_owner_lock);
	ok = raven_owner_claimed && pthread_equal(raven_owner_thread, pthread_self());
	pthread_mutex_unlock(&raven_owner_lock);
	return ok;
}

bool raven_owner_check(void)
{
	bool ok;
	pthread_mutex_lock(&raven_owner_lock);
	bool claimed = false;
	if (!raven_owner_claimed) {
		raven_owner_thread = pthread_self();
		raven_owner_claimed = true;
		claimed = true;
	}
	ok = pthread_equal(raven_owner_thread, pthread_self());
	pthread_mutex_unlock(&raven_owner_lock);
	if (claimed) {
		raven_threads_owner();
	}
	if (!ok) {
		zend_throw_error(NULL, "Raven runs callables on the PHP thread that owns it; this is another thread");
	}
	return ok;
}

void raven_owner_release(void)
{
	pthread_mutex_lock(&raven_owner_lock);
	if (raven_owner_claimed && pthread_equal(raven_owner_thread, pthread_self())) {
		raven_owner_claimed = false;
	}
	pthread_mutex_unlock(&raven_owner_lock);
}

/* ------------------------------------------------------------------------------------------------
 * Slots
 * --------------------------------------------------------------------------------------------- */

raven_slot *raven_slot_new(zval *fn0, zval *fn1, zval *user_data, Rid owner)
{
	if ((!fn0 || Z_TYPE_P(fn0) == IS_NULL) && (!fn1 || Z_TYPE_P(fn1) == IS_NULL)) {
		return NULL;
	}
	raven_slot *slot = ecalloc(1, sizeof(*slot));
	slot->refcount = 1;
	slot->owner = owner;
	zval *fns[2] = {fn0, fn1};
	for (int i = 0; i < 2; i++) {
		ZVAL_UNDEF(&slot->fn[i]);
		if (fns[i] && Z_TYPE_P(fns[i]) != IS_NULL) {
			ZVAL_COPY(&slot->fn[i], fns[i]);
			zend_is_callable_ex(&slot->fn[i], NULL, 0, NULL, &slot->fcc[i], NULL);
		}
	}
	if (user_data) {
		ZVAL_COPY(&slot->user_data, user_data);
	} else {
		ZVAL_NULL(&slot->user_data);
	}
	ZVAL_UNDEF(&slot->keep);
	zend_hash_index_update_ptr(&RAVEN_G(live), (zend_ulong)(uintptr_t)slot, slot);
	return slot;
}

void raven_slot_addref(raven_slot *slot)
{
	slot->refcount++;
}

void raven_slot_release(raven_slot *slot)
{
	if (!slot || --slot->refcount > 0) {
		return;
	}
	for (int i = 0; i < 2; i++) {
		zval_ptr_dtor(&slot->fn[i]);
	}
	zval_ptr_dtor(&slot->user_data);
	if (slot->key) {
		zend_string_release(slot->key);
	}
	if (slot->ret_str) {
		zend_string_release(slot->ret_str);
	}
	zval_ptr_dtor(&slot->keep);
	raven_arena_free(&slot->arena);
	if (RAVEN_G(live).nTableSize) {
		zend_hash_index_del(&RAVEN_G(live), (zend_ulong)(uintptr_t)slot);
	}
	efree(slot);
}

static void raven_slot_dtor(zval *z)
{
	raven_slot_release(Z_PTR_P(z));
}

void raven_slot_register(zend_string *key, raven_slot *slot)
{
	if (!slot) {
		zend_hash_del(&RAVEN_G(slots), key);
		return;
	}
	if (slot->key) {
		zend_string_release(slot->key);
	}
	slot->key = zend_string_copy(key);
	zend_hash_update_ptr(&RAVEN_G(slots), key, slot);
}

zend_string *raven_slot_key(const char *function, uint32_t parts, ...)
{
	smart_str s = {0};
	va_list ap;
	smart_str_appends(&s, function);
	va_start(ap, parts);
	for (uint32_t i = 0; i < parts; i++) {
		smart_str_appendc(&s, ':');
		smart_str_append_unsigned(&s, va_arg(ap, unsigned long));
	}
	va_end(ap);
	smart_str_0(&s);
	return s.s;
}

zend_string *raven_slot_key_str(const char *function, const char *name)
{
	return zend_strpprintf(0, "%s:%s", function, name ? name : "");
}

bool raven_invoke(raven_slot *slot, int which, zval *retval, uint32_t argc, zval *argv)
{
	ZVAL_UNDEF(retval);
	if (RAVEN_G(ending) || EG(exception) || Z_ISUNDEF(slot->fn[which])) {
		return false;
	}
	raven_slot_addref(slot);
	zend_call_known_fcc(&slot->fcc[which], retval, argc, argv, NULL);
	if (slot->once && slot->key) {
		zend_string *key = zend_string_copy(slot->key);
		zend_hash_del(&RAVEN_G(slots), key);
		zend_string_release(key);
	}
	raven_slot_release(slot);
	if (EG(exception)) {
		zval_ptr_dtor(retval);
		ZVAL_UNDEF(retval);
		return false;
	}
	return true;
}

/* ------------------------------------------------------------------------------------------------
 * Calls into Raven, sweeping
 * --------------------------------------------------------------------------------------------- */

static bool raven_rid_alive(Rid id)
{
	return Rwidget_is_valid(id) || Rwindow_is_valid(id) || Rtimer_is_valid(id) || Rtray_is_valid(id) || Rtree_item_is_valid(id);
}

typedef struct raven_user_handle {
	Rid owner;
	zval value;
} raven_user_handle;

static int raven_sweep_slot(zval *z)
{
	raven_slot *slot = Z_PTR_P(z);
	return (slot->owner != 0 && !raven_rid_alive(slot->owner)) ? ZEND_HASH_APPLY_REMOVE : ZEND_HASH_APPLY_KEEP;
}

static int raven_sweep_user_handle(zval *z)
{
	raven_user_handle *u = Z_PTR_P(z);
	return raven_rid_alive(u->owner) ? ZEND_HASH_APPLY_KEEP : ZEND_HASH_APPLY_REMOVE;
}

static void raven_sweep(void)
{
	zend_hash_apply(&RAVEN_G(slots), raven_sweep_slot);
	zend_hash_apply(&RAVEN_G(user_handles), raven_sweep_user_handle);
	RAVEN_G(swept_at) = zend_hash_num_elements(&RAVEN_G(slots)) + zend_hash_num_elements(&RAVEN_G(user_handles));
}

bool raven_enter(void)
{
	if (!raven_forked_check()) {
		return false;
	}
	RAVEN_G(depth)++;
	return true;
}

void raven_leave(void)
{
	if (--RAVEN_G(depth) > 0) {
		return;
	}
	raven_serve();
	uint32_t held = zend_hash_num_elements(&RAVEN_G(slots)) + zend_hash_num_elements(&RAVEN_G(user_handles));
	if (held >= 64 && held >= RAVEN_G(swept_at) * 2 && Ris_initialized()) {
		raven_sweep();
	}
}

/* ------------------------------------------------------------------------------------------------
 * User handles
 * --------------------------------------------------------------------------------------------- */

static void raven_user_handle_dtor(zval *z)
{
	raven_user_handle *u = Z_PTR_P(z);
	zval_ptr_dtor(&u->value);
	efree(u);
}

void raven_user_handle_set(zend_string *key, Rid owner, zval *value)
{
	if (Z_TYPE_P(value) == IS_NULL) {
		zend_hash_del(&RAVEN_G(user_handles), key);
		return;
	}
	raven_user_handle *u = emalloc(sizeof(*u));
	u->owner = owner;
	ZVAL_COPY(&u->value, value);
	zend_hash_update_ptr(&RAVEN_G(user_handles), key, u);
}

void raven_user_handle_get(zend_string *key, zval *return_value)
{
	raven_user_handle *u = zend_hash_find_ptr(&RAVEN_G(user_handles), key);
	if (u) {
		ZVAL_COPY(return_value, &u->value);
	} else {
		ZVAL_NULL(return_value);
	}
}

/* ------------------------------------------------------------------------------------------------
 * Trampoline helpers
 * --------------------------------------------------------------------------------------------- */

raven_slot *raven_slot_global(const char *key)
{
	return zend_hash_str_find_ptr(&RAVEN_G(slots), key, strlen(key));
}

bool raven_slot_alive(raven_slot *slot)
{
	return zend_hash_index_exists(&RAVEN_G(live), (zend_ulong)(uintptr_t)slot);
}

zend_long raven_return_long(zval *rv, const char *callback)
{
	switch (Z_TYPE_P(rv)) {
		case IS_LONG: return Z_LVAL_P(rv);
		case IS_TRUE: return 1;
		case IS_FALSE: return 0;
		default:
			zend_type_error("%s callable must return int or bool, %s returned", callback, zend_zval_value_name(rv));
			return 0;
	}
}

const char *raven_slot_return_string(raven_slot *slot, zval *rv, const char *callback)
{
	if (Z_TYPE_P(rv) == IS_NULL) {
		return NULL;
	}
	if (Z_TYPE_P(rv) != IS_STRING) {
		zend_type_error("%s callable must return ?string, %s returned", callback, zend_zval_value_name(rv));
		return NULL;
	}
	/* Raven reads the text after the callable returns: the slot holds it until the next call. */
	if (slot->ret_str) {
		zend_string_release(slot->ret_str);
	}
	slot->ret_str = zend_string_copy(Z_STR_P(rv));
	return ZSTR_VAL(slot->ret_str);
}

void raven_slot_keep(raven_slot *slot, zval *object)
{
	zval_ptr_dtor(&slot->keep);
	ZVAL_COPY(&slot->keep, object);
	raven_arena_free(&slot->arena);
}

raven_arena *raven_slot_arena(raven_slot *slot)
{
	return &slot->arena;
}

/* ------------------------------------------------------------------------------------------------
 * RPainter, RAllocator, RActionContext: classes PHP cannot construct, wrapping a C pointer
 * --------------------------------------------------------------------------------------------- */

zend_class_entry *raven_ce_RPainter;
zend_class_entry *raven_ce_RAllocator;
zend_class_entry *raven_ce_RActionContext;

typedef struct raven_pointer_object {
	void *ptr;
	zend_object std;
} raven_pointer_object;

static zend_object_handlers raven_pointer_handlers;

static inline raven_pointer_object *raven_pointer_from(zend_object *obj)
{
	return (raven_pointer_object *)((char *)obj - XtOffsetOf(raven_pointer_object, std));
}

static zend_object *raven_pointer_create(zend_class_entry *ce)
{
	raven_pointer_object *o = zend_object_alloc(sizeof(raven_pointer_object), ce);
	zend_object_std_init(&o->std, ce);
	object_properties_init(&o->std, ce);
	o->std.handlers = &raven_pointer_handlers;
	return &o->std;
}

void raven_painter_new(RPainter *painter, zval *out)
{
	object_init_ex(out, raven_ce_RPainter);
	raven_pointer_from(Z_OBJ_P(out))->ptr = painter;
}

void raven_painter_end(zval *obj)
{
	raven_pointer_from(Z_OBJ_P(obj))->ptr = NULL;
}

RPainter *raven_painter_get(zend_object *obj, uint32_t arg_num)
{
	RPainter *p = raven_pointer_from(obj)->ptr;
	if (!p) {
		zend_argument_value_error(arg_num, "is a painter whose paint callback has returned");
	}
	return p;
}

void raven_allocator_new(const RAllocator *allocator, zval *out)
{
	if (!allocator) {
		ZVAL_NULL(out);
		return;
	}
	object_init_ex(out, raven_ce_RAllocator);
	raven_pointer_from(Z_OBJ_P(out))->ptr = (void *)allocator;
}

const RAllocator *raven_allocator_get(zend_object *obj)
{
	return raven_pointer_from(obj)->ptr;
}

void raven_action_context_new(RActionContext *context, zval *out)
{
	object_init_ex(out, raven_ce_RActionContext);
	raven_pointer_from(Z_OBJ_P(out))->ptr = context;
}

void raven_action_context_end(zval *obj)
{
	raven_pointer_from(Z_OBJ_P(obj))->ptr = NULL;
}

RActionContext *raven_action_context_get(zend_object *obj, uint32_t arg_num)
{
	RActionContext *p = raven_pointer_from(obj)->ptr;
	if (!p) {
		zend_argument_value_error(arg_num, "is an action context whose callback has returned");
	}
	return p;
}

/* ------------------------------------------------------------------------------------------------
 * Module hooks
 * --------------------------------------------------------------------------------------------- */

zend_class_entry *register_class_RPainter(void);
zend_class_entry *register_class_RAllocator(void);

void raven_runtime_minit(void)
{
	memcpy(&raven_pointer_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
	raven_pointer_handlers.offset = XtOffsetOf(raven_pointer_object, std);
	raven_pointer_handlers.clone_obj = NULL; /* the engine refuses clone */
}

void raven_runtime_pointer_classes(zend_class_entry *painter, zend_class_entry *allocator, zend_class_entry *action_context)
{
	raven_ce_RPainter = painter;
	raven_ce_RPainter->create_object = raven_pointer_create;
	raven_ce_RAllocator = allocator;
	raven_ce_RAllocator->create_object = raven_pointer_create;
	raven_ce_RActionContext = action_context;
	raven_ce_RActionContext->create_object = raven_pointer_create;
}

void raven_runtime_rinit(void)
{
	zend_hash_init(&RAVEN_G(slots), 64, NULL, raven_slot_dtor, 0);
	zend_hash_init(&RAVEN_G(user_handles), 16, NULL, raven_user_handle_dtor, 0);
	zend_hash_init(&RAVEN_G(live), 64, NULL, NULL, 0);
	RAVEN_G(depth) = 0;
	RAVEN_G(swept_at) = 0;
	RAVEN_G(once_serial) = 0;
	RAVEN_G(ending) = false;
}

void raven_runtime_rshutdown(void)
{
	/* Raven left initialised on this thread is shut down. Its destroy callbacks still get their
	 * slots as user data but run no PHP: the request is ending. */
	RAVEN_G(ending) = true;
	/* In a forked child Raven's threads do not exist: Rshutdown would wait for them forever. */
	if (!raven_is_forked() && Ris_ui_thread()) {
		Rshutdown();
	}
	raven_threads_rshutdown();
	zend_hash_destroy(&RAVEN_G(slots));
	zend_hash_destroy(&RAVEN_G(user_handles));
	zend_hash_destroy(&RAVEN_G(live));
	memset(&RAVEN_G(live), 0, sizeof(HashTable));
	raven_owner_release();
}

/* After Rshutdown: Raven holds no callable and no user handle any more. */
void raven_runtime_after_shutdown(void)
{
	zend_hash_clean(&RAVEN_G(slots));
	zend_hash_clean(&RAVEN_G(user_handles));
	RAVEN_G(swept_at) = 0;
}
