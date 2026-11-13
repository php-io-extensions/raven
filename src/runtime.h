#ifndef RAVEN_RUNTIME_H
#define RAVEN_RUNTIME_H

#include "php.h"
#include "Raven.h"

#include <stdbool.h>

/* ------------------------------------------------------------------------------------------------
 * Value structs: a final class per C struct, one typed property per field in field order.
 * The generator writes one field table per struct; these helpers walk it.
 * --------------------------------------------------------------------------------------------- */

enum {
	RAVEN_F_END = 0,
	RAVEN_F_INT,     /* int, enum: C int range */
	RAVEN_F_U32,     /* Rid, Ruint, uint32_t */
	RAVEN_F_U64,     /* uint64_t, size_t: non-negative */
	RAVEN_F_ADDR,    /* void*, uintptr_t, intptr_t: an address as int */
	RAVEN_F_FLOAT,   /* float */
	RAVEN_F_DOUBLE,  /* double */
	RAVEN_F_CSTR,    /* const char*: ?string, borrowed for the call when read from PHP */
	RAVEN_F_CHARS,   /* char[N]: string, at most N-1 bytes */
	RAVEN_F_FLOATS,  /* float[N]: array of N floats */
	RAVEN_F_INTS,    /* int[N]: array of N ints */
	RAVEN_F_STRUCT,  /* nested struct: object of its class */
	RAVEN_F_STRS,    /* const char* const* with a count field: array of strings */
	RAVEN_F_STRUCTS, /* const T* with a count field: array of T */
};

typedef struct raven_struct raven_struct;

typedef struct raven_field {
	const char *name;
	size_t offset;
	uint8_t type;
	uint32_t count;              /* FLOATS, INTS, CHARS: N. STRS, STRUCTS: index + 1 of the int count field */
	const raven_struct *sub;     /* STRUCT, STRUCTS */
} raven_field;

struct raven_struct {
	const char *name;
	size_t size;
	zend_class_entry **ce;
	const raven_field *fields;
};

/* Fills `out` (zeroed first) from a PHP object of the struct's class. Strings and arrays the C
 * struct points to are borrowed from the object or allocated in `arena`, freed by raven_arena_free.
 * Returns false with a ValueError thrown. */
typedef struct raven_arena { void **blocks; uint32_t count, cap; } raven_arena;
bool raven_struct_from_object(const raven_struct *s, zend_object *obj, void *out, raven_arena *arena, uint32_t arg_num);
void raven_struct_to_object(const raven_struct *s, const void *in, zend_object *obj);
void raven_struct_new(const raven_struct *s, const void *in, zval *out);
void *raven_arena_alloc(raven_arena *arena, size_t size);
void raven_arena_free(raven_arena *arena);

/* Constructor of every struct class: each property from the named or positional argument. */
void raven_struct_construct(const raven_struct *s, zend_object *obj, zend_execute_data *execute_data);

/* ------------------------------------------------------------------------------------------------
 * Arguments
 * --------------------------------------------------------------------------------------------- */

bool raven_arg_int(zend_long v, uint32_t arg_num, int *out);
bool raven_arg_u32(zend_long v, uint32_t arg_num, uint32_t *out);
bool raven_arg_size(zend_long v, uint32_t arg_num, size_t *out);
bool raven_arg_u64(zend_long v, uint32_t arg_num, uint64_t *out);

/* A buffer of at least `need` bytes (an overflow-checked product), else ValueError. */
bool raven_arg_bytes(zend_string *s, uint32_t arg_num, uint64_t a, uint64_t b, uint64_t c, const char *what);
/* A string holding at least `size` bytes, else ValueError. */
bool raven_arg_length(zend_string *s, uint32_t arg_num, size_t size);

/* Arrays of numbers with at least `count` elements, copied into arena memory. */
bool raven_arg_doubles(HashTable *ht, uint32_t arg_num, int count, double **out, raven_arena *arena);
bool raven_arg_strings(HashTable *ht, uint32_t arg_num, int count, const char ***out, raven_arena *arena);
bool raven_arg_structs(HashTable *ht, uint32_t arg_num, int count, const raven_struct *s, void **out, raven_arena *arena);

/* ------------------------------------------------------------------------------------------------
 * Held callables. A slot keeps one or two callables and the user data of one Raven registration;
 * its address is the user_data Raven gets back.
 * --------------------------------------------------------------------------------------------- */

typedef struct raven_slot {
	uint32_t refcount;
	Rid owner;                   /* the Rid the registration belongs to; 0: global */
	zend_string *key;            /* NULL until registered */
	zval fn[2];
	zend_fcall_info_cache fcc[2];
	zval user_data;
	zend_string *ret_str;        /* the last string a callable returned, kept for Raven */
	zval keep;                   /* the last object a callable filled, kept for Raven */
	raven_arena arena;           /* memory of that object's C copy */
	bool once;                   /* removed from the table after its callable ran */
} raven_slot;

/* A slot for the callables (either may be NULL); NULL when both are (the registration is cleared). */
raven_slot *raven_slot_new(zval *fn0, zval *fn1, zval *user_data, Rid owner);
/* Puts `slot` in the table under `key`, releasing what was there. slot NULL removes the key. */
void raven_slot_register(zend_string *key, raven_slot *slot);
void raven_slot_addref(raven_slot *slot);
void raven_slot_release(raven_slot *slot);
/* key = "<function>" followed by ":<value>" per part. */
zend_string *raven_slot_key(const char *function, uint32_t parts, ...);
zend_string *raven_slot_key_str(const char *function, const char *name);

/* Calls slot->fn[which] with argc arguments; false when an exception is pending (the callable is
 * not run while one is) or the callable threw. retval is UNDEF unless true. */
bool raven_invoke(raven_slot *slot, int which, zval *retval, uint32_t argc, zval *argv);

/* ------------------------------------------------------------------------------------------------
 * Calls into Raven
 * --------------------------------------------------------------------------------------------- */

/* The PHP thread that may hand callables to Raven: the one that called Rinit. Another thread
 * passing a callable is an Error (Raven would run it on a thread whose engine it is not). */
bool raven_owner_check(void);
void raven_owner_set(void);
void raven_owner_release(void);
void raven_runtime_after_shutdown(void);

bool raven_enter(void);
void raven_leave(void);

/* User handles (Rwidget_set_user_handle …): one mixed per key, released with its owner Rid. */
void raven_user_handle_set(zend_string *key, Rid owner, zval *value);
void raven_user_handle_get(zend_string *key, zval *return_value);

/* Trampoline helpers. */
raven_slot *raven_slot_global(const char *key);
zend_long raven_return_long(zval *rv, const char *callback);
const char *raven_slot_return_string(raven_slot *slot, zval *rv, const char *callback);
void raven_slot_keep(raven_slot *slot, zval *object);
raven_arena *raven_slot_arena(raven_slot *slot);
bool raven_slot_alive(raven_slot *slot);

/* ------------------------------------------------------------------------------------------------
 * Threads (src/threads.c). Raven's workers and render thread never enter PHP: they hand the call
 * to the owner thread, which serves it from its VM interrupt hook, from a Rtask_post task (so
 * Rwait_frame serves it) and when a binding call returns.
 * --------------------------------------------------------------------------------------------- */

bool raven_on_owner_thread(void);
/* Runs `run(ctx)` on the owner thread later; `done(ctx)` frees ctx (also when it never runs). */
void raven_post_async(void (*run)(void *), void (*done)(void *), void *ctx, bool wake_raven);
/* Runs `run(ctx)` on the owner thread and waits; false (not run) when it did not start within
 * `deadline` seconds. */
bool raven_post_sync(void (*run)(void *), void *ctx, double deadline);
void raven_serve(void);
bool raven_forked_check(void);
bool raven_is_forked(void);
void raven_threads_minit(void);
void raven_threads_owner(void);
void raven_threads_rshutdown(void);

/* RPainter objects: valid while their paint callback runs. */
extern zend_class_entry *raven_ce_RPainter;
extern zend_class_entry *raven_ce_RAllocator;
void raven_painter_new(RPainter *painter, zval *out);
void raven_painter_end(zval *obj);
RPainter *raven_painter_get(zend_object *obj, uint32_t arg_num);
const RAllocator *raven_allocator_get(zend_object *obj);
void raven_allocator_new(const RAllocator *allocator, zval *out);

void raven_runtime_minit(void);
void raven_runtime_pointer_classes(zend_class_entry *painter, zend_class_entry *allocator);
void raven_runtime_rinit(void);
void raven_runtime_rshutdown(void);

ZEND_BEGIN_MODULE_GLOBALS(raven)
	HashTable slots;             /* key -> raven_slot* */
	HashTable user_handles;      /* key -> raven_user_handle* */
	HashTable live;             /* slot address -> slot: slots not yet freed */
	uint32_t depth;              /* nesting of binding calls into Raven */
	uint32_t swept_at;           /* table size after the last sweep */
	uint64_t once_serial;
	bool ending;                 /* request end: callbacks run no PHP */
ZEND_END_MODULE_GLOBALS(raven)

ZEND_EXTERN_MODULE_GLOBALS(raven)
#define RAVEN_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(raven, v)

#endif
