/*
 * The functions tools/bindings.php lists as manual: lifecycle, the allocator, Raven-owned memory,
 * and every callback Raven may call from a thread that is not the owner's (workers, the render
 * thread, a custom backend, a host platform).
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "zend_exceptions.h"

#include <pthread.h>
#include <stdlib.h>
#include <string.h>

#include "Raven.h"
#include "runtime.h"
#include "gen/structs.h"
#include "gen/callbacks.h"

#include "../stubs/manual_arginfo.h"

/* Deadlines (seconds) of calls a foreign thread hands to the owner. */
#define RAVEN_DEADLINE_RENDER 0.1
#define RAVEN_DEADLINE_LONG   5.0

zend_class_entry *raven_ce_RCapture;
zend_class_entry *raven_ce_RBackendVTable;
zend_class_entry *raven_ce_RHostPlatformDesc;

/* ------------------------------------------------------------------------------------------------
 * Lifecycle
 * --------------------------------------------------------------------------------------------- */

ZEND_FUNCTION(Rinit)
{
	zend_long backend;
	int c_backend;
	int r;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(backend)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_arg_int(backend, 1, &c_backend)) {
		RETURN_THROWS();
	}
	if (!raven_enter()) {
		RETURN_THROWS();
	}
	r = Rinit((RBackend)c_backend);
	if (r) {
		raven_owner_set();
	}
	raven_leave();
	RETURN_LONG(r);
}

ZEND_FUNCTION(Rinit_ex)
{
	zend_object *desc = NULL;
	RInitDesc c_desc;
	raven_arena arena = {0};
	int r;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(desc, raven_ce_RInitDesc)
	ZEND_PARSE_PARAMETERS_END();

	if (desc && !raven_struct_from_object(&raven_struct_RInitDesc, desc, &c_desc, &arena, 1)) {
		raven_arena_free(&arena);
		RETURN_THROWS();
	}
	if (!raven_enter()) {
		raven_arena_free(&arena);
		RETURN_THROWS();
	}
	r = Rinit_ex(desc ? &c_desc : NULL);
	if (r) {
		raven_owner_set();
	}
	raven_leave();
	raven_arena_free(&arena);
	RETURN_LONG(r);
}

static void raven_tables_free(void);

ZEND_FUNCTION(Rshutdown)
{
	ZEND_PARSE_PARAMETERS_NONE();

	if (!raven_enter()) {
		RETURN_THROWS();
	}
	Rshutdown();
	raven_leave();
	if (!Ris_initialized()) {
		raven_runtime_after_shutdown();
		raven_tables_free();
	}
}

/* ------------------------------------------------------------------------------------------------
 * Allocator
 * --------------------------------------------------------------------------------------------- */

ZEND_FUNCTION(Rset_allocator)
{
	zend_object *allocator = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(allocator, raven_ce_RAllocator)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_enter()) {
		RETURN_THROWS();
	}
	Rset_allocator(allocator ? raven_allocator_get(allocator) : NULL);
	raven_leave();
}

ZEND_FUNCTION(Rallocator_get_system)
{
	const RAllocator *r;

	ZEND_PARSE_PARAMETERS_NONE();

	if (!raven_enter()) {
		RETURN_THROWS();
	}
	r = Rallocator_get_system();
	raven_leave();
	raven_allocator_new(r, return_value);
}

/* ------------------------------------------------------------------------------------------------
 * Errors: RErrorCallback has no user data, so its slot is global. Errors of the render thread are
 * posted to the owner and delivered later.
 * --------------------------------------------------------------------------------------------- */

#define RAVEN_ERROR_KEY "Rerror_set_callback"

typedef struct raven_error_call {
	RError code;
	RSeverity severity;
	char *detail;
} raven_error_call;

static void raven_error_run(void *p)
{
	raven_error_call *e = p;
	raven_slot *slot = raven_slot_global(RAVEN_ERROR_KEY);
	zval args[3], rv;
	if (!slot) {
		return;
	}
	ZVAL_LONG(&args[0], (zend_long)e->code);
	ZVAL_LONG(&args[1], (zend_long)e->severity);
	if (e->detail) {
		ZVAL_STRING(&args[2], e->detail);
	} else {
		ZVAL_NULL(&args[2]);
	}
	if (raven_invoke(slot, 0, &rv, 3, args)) {
		zval_ptr_dtor(&rv);
	}
	zval_ptr_dtor(&args[2]);
}

static void raven_error_done(void *p)
{
	raven_error_call *e = p;
	free(e->detail);
	free(e);
}

static void raven_error_trampoline(RError code, RSeverity severity, const char *detail)
{
	if (raven_on_owner_thread()) {
		raven_error_call e = {code, severity, (char *)detail};
		raven_error_run(&e);
		return;
	}
	raven_error_call *e = malloc(sizeof(*e));
	if (!e) {
		return;
	}
	e->code = code;
	e->severity = severity;
	e->detail = detail ? strdup(detail) : NULL;
	raven_post_async(raven_error_run, raven_error_done, e, true);
}

ZEND_FUNCTION(Rerror_set_callback)
{
	zend_fcall_info fci = empty_fcall_info;
	zend_fcall_info_cache fcc = empty_fcall_info_cache;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_FUNC_OR_NULL(fci, fcc)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_owner_check()) {
		RETURN_THROWS();
	}
	raven_slot *slot = raven_slot_new(ZEND_FCI_INITIALIZED(fci) ? &fci.function_name : NULL, NULL, NULL, 0);
	zend_string *key = zend_string_init(RAVEN_ERROR_KEY, sizeof(RAVEN_ERROR_KEY) - 1, 0);
	raven_slot_register(key, slot);
	zend_string_release(key);
	if (!raven_enter()) {
		RETURN_THROWS();
	}
	Rerror_set_callback(slot ? raven_error_trampoline : NULL);
	raven_leave();
}

/* ------------------------------------------------------------------------------------------------
 * Rparallel_for: ranges given to the calling thread run as they come; ranges given to workers are
 * recorded and run on the calling PHP thread before Rparallel_for returns, so every range has run
 * exactly once when it returns, as upstream promises.
 * --------------------------------------------------------------------------------------------- */

typedef struct raven_pfor {
	raven_slot *slot;
	pthread_mutex_t lock;
	Ruint (*ranges)[2];
	size_t count, cap;
	bool lost;
} raven_pfor;

static void raven_pfor_invoke(raven_slot *slot, Ruint begin, Ruint end)
{
	zval args[3], rv;
	ZVAL_LONG(&args[0], begin);
	ZVAL_LONG(&args[1], end);
	ZVAL_COPY(&args[2], &slot->user_data);
	if (raven_invoke(slot, 0, &rv, 3, args)) {
		zval_ptr_dtor(&rv);
	}
	zval_ptr_dtor(&args[2]);
}

static void raven_pfor_trampoline(Ruint begin, Ruint end, void *user_data)
{
	raven_pfor *p = user_data;
	if (raven_on_owner_thread()) {
		raven_pfor_invoke(p->slot, begin, end);
		return;
	}
	pthread_mutex_lock(&p->lock);
	if (p->count == p->cap) {
		size_t cap = p->cap ? p->cap * 2 : 16;
		void *grown = realloc(p->ranges, cap * sizeof(*p->ranges));
		if (!grown) {
			p->lost = true;
			pthread_mutex_unlock(&p->lock);
			return;
		}
		p->ranges = grown;
		p->cap = cap;
	}
	p->ranges[p->count][0] = begin;
	p->ranges[p->count][1] = end;
	p->count++;
	pthread_mutex_unlock(&p->lock);
}

ZEND_FUNCTION(Rparallel_for)
{
	zend_long count, grain;
	uint32_t c_count, c_grain;
	zend_fcall_info fci = empty_fcall_info;
	zend_fcall_info_cache fcc = empty_fcall_info_cache;
	zval *user_data;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(grain)
		Z_PARAM_FUNC_OR_NULL(fci, fcc)
		Z_PARAM_ZVAL(user_data)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_arg_u32(count, 1, &c_count) || !raven_arg_u32(grain, 2, &c_grain)) {
		RETURN_THROWS();
	}
	if (!raven_owner_check()) {
		RETURN_THROWS();
	}
	raven_pfor p = {0};
	p.slot = raven_slot_new(ZEND_FCI_INITIALIZED(fci) ? &fci.function_name : NULL, NULL, user_data, 0);
	pthread_mutex_init(&p.lock, NULL);
	if (!raven_enter()) {
		raven_slot_release(p.slot);
		pthread_mutex_destroy(&p.lock);
		RETURN_THROWS();
	}
	Rparallel_for(c_count, c_grain, p.slot ? raven_pfor_trampoline : NULL, p.slot ? &p : NULL);
	for (size_t i = 0; i < p.count; i++) {
		raven_pfor_invoke(p.slot, p.ranges[i][0], p.ranges[i][1]);
	}
	raven_leave();
	free(p.ranges);
	pthread_mutex_destroy(&p.lock);
	raven_slot_release(p.slot);
	if (p.lost && !EG(exception)) {
		zend_throw_error(NULL, "Rparallel_for: out of memory recording a worker's range");
	}
}

/* ------------------------------------------------------------------------------------------------
 * Rtask_run_async: Raven runs the task on a worker, which hands it to the UI thread with
 * Rtask_post; the callable runs there, during a later Rdraw_frame / Rwait_frame.
 * --------------------------------------------------------------------------------------------- */

static void raven_task_async_trampoline(void *user_data)
{
	if (raven_on_owner_thread()) {
		raven_cb_RTaskCallback_0(user_data);
		return;
	}
	Rtask_post(raven_cb_RTaskCallback_0, user_data);
}

ZEND_FUNCTION(Rtask_run_async)
{
	zend_fcall_info fci = empty_fcall_info;
	zend_fcall_info_cache fcc = empty_fcall_info_cache;
	zval *user_data;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_FUNC_OR_NULL(fci, fcc)
		Z_PARAM_ZVAL(user_data)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_owner_check()) {
		RETURN_THROWS();
	}
	raven_slot *slot = raven_slot_new(ZEND_FCI_INITIALIZED(fci) ? &fci.function_name : NULL, NULL, user_data, 0);
	if (slot) {
		slot->once = true;
		zend_string *key = raven_slot_key("Rtask_run_async", 1, (unsigned long)++RAVEN_G(once_serial));
		raven_slot_register(key, slot);
		zend_string_release(key);
	}
	if (!raven_enter()) {
		RETURN_THROWS();
	}
	Rtask_run_async(slot ? raven_task_async_trampoline : NULL, slot);
	raven_leave();
}

/* ------------------------------------------------------------------------------------------------
 * Memory Raven returns
 * --------------------------------------------------------------------------------------------- */

ZEND_FUNCTION(Rfile_read)
{
	zend_string *path = NULL;
	zval *size;
	size_t c_size = 0;
	char *r;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR_OR_NULL(path)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_enter()) {
		RETURN_THROWS();
	}
	r = Rfile_read(path ? ZSTR_VAL(path) : NULL, &c_size);
	raven_leave();
	ZEND_TRY_ASSIGN_REF_LONG(size, (zend_long)c_size);
	if (!r) {
		RETURN_NULL();
	}
	RETVAL_STRINGL(r, c_size);
	Rmemory_free(r);
}

ZEND_FUNCTION(Rpdf_document_save_memory)
{
	zend_long document;
	uint32_t c_document;
	zval *size;
	size_t c_size = 0;
	char *r;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(document)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_arg_u32(document, 1, &c_document)) {
		RETURN_THROWS();
	}
	if (!raven_enter()) {
		RETURN_THROWS();
	}
	r = Rpdf_document_save_memory(c_document, &c_size);
	raven_leave();
	ZEND_TRY_ASSIGN_REF_LONG(size, (zend_long)c_size);
	if (!r) {
		RETURN_NULL();
	}
	RETVAL_STRINGL(r, c_size);
	Rmemory_free(r);
}

/* Pixels Raven allocated: width × height × 4 bytes, released with Rpixels_free. */
static void raven_return_pixels(uint8_t *r, int width, int height, zval *return_value)
{
	if (!r) {
		RETURN_NULL();
	}
	size_t n = (width > 0 && height > 0) ? (size_t)width * (size_t)height * 4u : 0;
	RETVAL_STRINGL((const char *)r, n);
	Rpixels_free(r);
}

ZEND_FUNCTION(Rwindow_capture)
{
	zend_long window;
	uint32_t c_window;
	zval *width, *height;
	int c_width = 0, c_height = 0;
	uint8_t *r;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(window)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_arg_u32(window, 1, &c_window)) {
		RETURN_THROWS();
	}
	if (!raven_enter()) {
		RETURN_THROWS();
	}
	r = Rwindow_capture(c_window, &c_width, &c_height);
	raven_leave();
	ZEND_TRY_ASSIGN_REF_LONG(width, c_width);
	ZEND_TRY_ASSIGN_REF_LONG(height, c_height);
	raven_return_pixels(r, c_width, c_height, return_value);
}

ZEND_FUNCTION(Rimage_decode)
{
	zend_string *data;
	zend_long data_size;
	size_t c_data_size;
	zval *width, *height;
	int c_width = 0, c_height = 0;
	uint8_t *r;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(data)
		Z_PARAM_LONG(data_size)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_arg_size(data_size, 2, &c_data_size)) {
		RETURN_THROWS();
	}
	if (!raven_arg_length(data, 1, c_data_size)) {
		RETURN_THROWS();
	}
	if (!raven_enter()) {
		RETURN_THROWS();
	}
	r = Rimage_decode(ZSTR_VAL(data), c_data_size, &c_width, &c_height);
	raven_leave();
	ZEND_TRY_ASSIGN_REF_LONG(width, c_width);
	ZEND_TRY_ASSIGN_REF_LONG(height, c_height);
	raven_return_pixels(r, c_width, c_height, return_value);
}

/* ------------------------------------------------------------------------------------------------
 * Render-thread callbacks: the queue lock pair and viewport drawing
 * --------------------------------------------------------------------------------------------- */

#define RAVEN_QUEUE_LOCK_KEY "Rvulkan_set_queue_lock_callbacks"

typedef struct raven_plain_call {
	raven_slot *slot;
	int which;
	const RViewportDrawInfo *info;
} raven_plain_call;

static void raven_plain_run(void *p)
{
	raven_plain_call *c = p;
	zval args[2], rv;
	uint32_t argc = 0;
	if (!raven_slot_alive(c->slot)) {
		return;
	}
	if (c->info) {
		raven_struct_new(&raven_struct_RViewportDrawInfo, c->info, &args[argc++]);
	}
	ZVAL_COPY(&args[argc], &c->slot->user_data);
	argc++;
	if (raven_invoke(c->slot, c->which, &rv, argc, args)) {
		zval_ptr_dtor(&rv);
	}
	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&args[i]);
	}
}

static void raven_plain_call_on_owner(raven_slot *slot, int which, const RViewportDrawInfo *info, double deadline)
{
	raven_plain_call c = {slot, which, info};
	if (!slot) {
		return;
	}
	if (raven_on_owner_thread()) {
		raven_plain_run(&c);
	} else {
		raven_post_sync(raven_plain_run, &c, deadline);
	}
}

static void raven_queue_lock_trampoline(void *user_data)
{
	raven_plain_call_on_owner(user_data, 0, NULL, RAVEN_DEADLINE_LONG);
}

static void raven_queue_unlock_trampoline(void *user_data)
{
	raven_plain_call_on_owner(user_data, 1, NULL, RAVEN_DEADLINE_LONG);
}

ZEND_FUNCTION(Rvulkan_set_queue_lock_callbacks)
{
	zend_fcall_info fci_lock = empty_fcall_info, fci_unlock = empty_fcall_info;
	zend_fcall_info_cache fcc_lock = empty_fcall_info_cache, fcc_unlock = empty_fcall_info_cache;
	zval *user_data;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_FUNC_OR_NULL(fci_lock, fcc_lock)
		Z_PARAM_FUNC_OR_NULL(fci_unlock, fcc_unlock)
		Z_PARAM_ZVAL(user_data)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_owner_check()) {
		RETURN_THROWS();
	}
	raven_slot *slot = raven_slot_new(ZEND_FCI_INITIALIZED(fci_lock) ? &fci_lock.function_name : NULL,
		ZEND_FCI_INITIALIZED(fci_unlock) ? &fci_unlock.function_name : NULL, user_data, 0);
	zend_string *key = zend_string_init(RAVEN_QUEUE_LOCK_KEY, sizeof(RAVEN_QUEUE_LOCK_KEY) - 1, 0);
	raven_slot_register(key, slot);
	zend_string_release(key);
	if (!raven_enter()) {
		RETURN_THROWS();
	}
	Rvulkan_set_queue_lock_callbacks(ZEND_FCI_INITIALIZED(fci_lock) ? raven_queue_lock_trampoline : NULL,
		ZEND_FCI_INITIALIZED(fci_unlock) ? raven_queue_unlock_trampoline : NULL, slot);
	raven_leave();
}

static void raven_viewport_draw_trampoline(const RViewportDrawInfo *info, void *user_data)
{
	raven_plain_call_on_owner(user_data, 0, info, RAVEN_DEADLINE_RENDER);
}

ZEND_FUNCTION(Rviewport_set_draw_callback)
{
	zend_long viewport;
	uint32_t c_viewport;
	zend_fcall_info fci = empty_fcall_info;
	zend_fcall_info_cache fcc = empty_fcall_info_cache;
	zval *user_data;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(viewport)
		Z_PARAM_FUNC_OR_NULL(fci, fcc)
		Z_PARAM_ZVAL(user_data)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_arg_u32(viewport, 1, &c_viewport)) {
		RETURN_THROWS();
	}
	if (!raven_owner_check()) {
		RETURN_THROWS();
	}
	raven_slot *slot = raven_slot_new(ZEND_FCI_INITIALIZED(fci) ? &fci.function_name : NULL, NULL, user_data, c_viewport);
	zend_string *key = raven_slot_key("Rviewport_set_draw_callback", 1, (unsigned long)c_viewport);
	raven_slot_register(key, slot);
	zend_string_release(key);
	if (!raven_enter()) {
		RETURN_THROWS();
	}
	Rviewport_set_draw_callback(c_viewport, slot ? raven_viewport_draw_trampoline : NULL, slot);
	raven_leave();
}

/* ------------------------------------------------------------------------------------------------
 * Tables of callables Raven copies: RBackendVTable, RHostPlatformDesc. Each is a snapshot of the
 * PHP object's Closures taken at registration, as Raven copies the C table.
 * --------------------------------------------------------------------------------------------- */

enum {
	RB_INIT = 0, RB_SHUTDOWN, RB_CREATE_SURFACE, RB_DESTROY_SURFACE, RB_CREATE_TEXTURE, RB_UPDATE_TEXTURE,
	RB_SET_TEXTURE_FILTER, RB_DESTROY_TEXTURE, RB_RENDER_FRAME, RB_WAIT_IDLE, RB_CREATE_SHADER, RB_DESTROY_SHADER,
	RB_COUNT
};

enum { RH_SET_CURSOR = 0, RH_CLIPBOARD_SET, RH_CLIPBOARD_GET, RH_WAKE, RH_COUNT };

typedef struct raven_table {
	zval fn[RB_COUNT];
	zend_fcall_info_cache fcc[RB_COUNT];
	zval user_data;
	char *name;                  /* RBackendVTable.name, alive as long as Raven may read it */
	zend_string *ret_str;        /* clipboard_get's last text */
	HashTable formats;           /* texture Rid -> RTextureFormat */
} raven_table;

static raven_table *raven_backend_table;
static raven_table *raven_host_table;

static raven_table *raven_table_new(zend_object *obj, uint32_t first, uint32_t count)
{
	raven_table *t = ecalloc(1, sizeof(*t));
	for (uint32_t i = 0; i < count; i++) {
		zval *v = OBJ_PROP_NUM(obj, first + i);
		ZVAL_DEREF(v);
		ZVAL_UNDEF(&t->fn[i]);
		if (Z_TYPE_P(v) == IS_OBJECT) {
			ZVAL_COPY(&t->fn[i], v);
			zend_is_callable_ex(&t->fn[i], NULL, 0, NULL, &t->fcc[i], NULL);
		}
	}
	ZVAL_NULL(&t->user_data);
	zend_hash_init(&t->formats, 8, NULL, NULL, 0);
	return t;
}

static void raven_table_free(raven_table *t)
{
	if (!t) {
		return;
	}
	for (int i = 0; i < RB_COUNT; i++) {
		zval_ptr_dtor(&t->fn[i]);
	}
	zval_ptr_dtor(&t->user_data);
	if (t->ret_str) {
		zend_string_release(t->ret_str);
	}
	zend_hash_destroy(&t->formats);
	free(t->name);
	efree(t);
}

static void raven_tables_free(void)
{
	raven_table_free(raven_backend_table);
	raven_backend_table = NULL;
	raven_table_free(raven_host_table);
	raven_host_table = NULL;
}

void raven_manual_rshutdown(void)
{
	raven_tables_free();
}

static bool raven_table_invoke(raven_table *t, int which, zval *rv, uint32_t argc, zval *argv)
{
	ZVAL_UNDEF(rv);
	if (!t || RAVEN_G(ending) || EG(exception) || Z_ISUNDEF(t->fn[which])) {
		return false;
	}
	zend_call_known_fcc(&t->fcc[which], rv, argc, argv, NULL);
	if (EG(exception)) {
		zval_ptr_dtor(rv);
		ZVAL_UNDEF(rv);
		return false;
	}
	return true;
}

/* ---- backend */

typedef struct raven_backend_call {
	int member;
	Rid id;
	Ruint u[4];
	const void *p0;
	const void *p1;
	RCapture *capture;
	size_t size;
	int result;
} raven_backend_call;

static size_t raven_texture_bpp(raven_table *t, Rid texture)
{
	zval *f = zend_hash_index_find(&t->formats, texture);
	return (f && Z_LVAL_P(f) == R_TEXTURE_ALPHA8) ? 1u : 4u;
}

static void raven_bytes_zval(const void *p, size_t n, zval *z)
{
	if (p) {
		ZVAL_STRINGL(z, (const char *)p, n);
	} else {
		ZVAL_NULL(z);
	}
}

static void raven_backend_run(void *p)
{
	raven_backend_call *c = p;
	raven_table *t = raven_backend_table;
	zval args[6], rv;
	uint32_t argc = 0;

	if (!t) {
		return;
	}
	switch (c->member) {
		case RB_INIT:
			raven_struct_new(&raven_struct_RBackendInitInfo, c->p0, &args[argc++]);
			break;
		case RB_CREATE_SURFACE:
			ZVAL_LONG(&args[argc++], c->id);
			raven_struct_new(&raven_struct_RNativeWindow, c->p0, &args[argc++]);
			ZVAL_LONG(&args[argc++], c->u[0]);
			ZVAL_LONG(&args[argc++], c->u[1]);
			break;
		case RB_CREATE_TEXTURE: {
			const RTextureDesc *d = c->p0;
			zval fmt;
			ZVAL_LONG(&fmt, d->format);
			zend_hash_index_update(&t->formats, c->id, &fmt);
			ZVAL_LONG(&args[argc++], c->id);
			raven_struct_new(&raven_struct_RTextureDesc, d, &args[argc++]);
			raven_bytes_zval(c->p1, (size_t)d->width * d->height * raven_texture_bpp(t, c->id), &args[argc++]);
			break;
		}
		case RB_UPDATE_TEXTURE:
			ZVAL_LONG(&args[argc++], c->id);
			for (int i = 0; i < 4; i++) {
				ZVAL_LONG(&args[argc++], c->u[i]);
			}
			raven_bytes_zval(c->p0, (size_t)c->u[2] * c->u[3] * raven_texture_bpp(t, c->id), &args[argc++]);
			break;
		case RB_SET_TEXTURE_FILTER:
			ZVAL_LONG(&args[argc++], c->id);
			ZVAL_LONG(&args[argc++], c->u[0]);
			break;
		case RB_DESTROY_TEXTURE:
			zend_hash_index_del(&t->formats, c->id);
			ZEND_FALLTHROUGH;
		case RB_DESTROY_SURFACE:
		case RB_DESTROY_SHADER:
			ZVAL_LONG(&args[argc++], c->id);
			break;
		case RB_RENDER_FRAME:
			raven_struct_new(&raven_struct_RDrawData, c->p0, &args[argc++]);
			if (c->capture) {
				object_init_ex(&args[argc++], raven_ce_RCapture);
			} else {
				ZVAL_NULL(&args[argc++]);
			}
			break;
		case RB_CREATE_SHADER:
			ZVAL_LONG(&args[argc++], c->id);
			raven_bytes_zval(c->p0, c->size, &args[argc++]);
			ZVAL_LONG(&args[argc++], (zend_long)c->size);
			break;
		default:
			break;
	}

	if (raven_table_invoke(t, c->member, &rv, argc, args)) {
		if (c->member == RB_INIT || c->member == RB_CREATE_SURFACE || c->member == RB_CREATE_TEXTURE || c->member == RB_CREATE_SHADER) {
			c->result = (int)raven_return_long(&rv, "RBackendVTable");
		}
		zval_ptr_dtor(&rv);
		if (c->member == RB_RENDER_FRAME && c->capture) {
			/* RCapture: pixels must hold width × height × 4 bytes; Raven releases them with Rpixels_free. */
			zend_object *o = Z_OBJ(args[1]);
			zval *px = OBJ_PROP_NUM(o, 0), *w = OBJ_PROP_NUM(o, 1), *h = OBJ_PROP_NUM(o, 2);
			if (Z_TYPE_P(px) == IS_STRING && Z_LVAL_P(w) > 0 && Z_LVAL_P(h) > 0 && Z_LVAL_P(w) <= INT_MAX && Z_LVAL_P(h) <= INT_MAX) {
				uint64_t need = (uint64_t)Z_LVAL_P(w) * (uint64_t)Z_LVAL_P(h) * 4u;
				if (need <= Z_STRLEN_P(px) && need <= SIZE_MAX) {
					c->capture->pixels = Rpixels_alloc((size_t)need);
					if (c->capture->pixels) {
						memcpy(c->capture->pixels, Z_STRVAL_P(px), (size_t)need);
						c->capture->width = (int)Z_LVAL_P(w);
						c->capture->height = (int)Z_LVAL_P(h);
					}
				} else {
					zend_value_error("RCapture::$pixels must hold width x height x 4 bytes");
				}
			}
		}
	}
	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&args[i]);
	}
}

static int raven_backend_dispatch(raven_backend_call *c)
{
	c->result = 0;
	if (raven_on_owner_thread()) {
		raven_backend_run(c);
	} else {
		raven_post_sync(raven_backend_run, c, RAVEN_DEADLINE_LONG);
	}
	return c->result;
}

static int rb_init(const RBackendInitInfo *info)
{
	raven_backend_call c = {.member = RB_INIT, .p0 = info};
	return raven_backend_dispatch(&c);
}

static void rb_shutdown(void)
{
	raven_backend_call c = {.member = RB_SHUTDOWN};
	raven_backend_dispatch(&c);
}

static int rb_create_surface(Rid window, const RNativeWindow *native, Ruint width, Ruint height)
{
	raven_backend_call c = {.member = RB_CREATE_SURFACE, .id = window, .p0 = native, .u = {width, height}};
	return raven_backend_dispatch(&c);
}

static void rb_destroy_surface(Rid window)
{
	raven_backend_call c = {.member = RB_DESTROY_SURFACE, .id = window};
	raven_backend_dispatch(&c);
}

static int rb_create_texture(Rid texture, const RTextureDesc *desc, const void *pixels)
{
	raven_backend_call c = {.member = RB_CREATE_TEXTURE, .id = texture, .p0 = desc, .p1 = pixels};
	return raven_backend_dispatch(&c);
}

static void rb_update_texture(Rid texture, Ruint x, Ruint y, Ruint width, Ruint height, const void *pixels)
{
	raven_backend_call c = {.member = RB_UPDATE_TEXTURE, .id = texture, .u = {x, y, width, height}, .p0 = pixels};
	raven_backend_dispatch(&c);
}

static void rb_set_texture_filter(Rid texture, RFilterType filter)
{
	raven_backend_call c = {.member = RB_SET_TEXTURE_FILTER, .id = texture, .u = {(Ruint)filter}};
	raven_backend_dispatch(&c);
}

static void rb_destroy_texture(Rid texture)
{
	raven_backend_call c = {.member = RB_DESTROY_TEXTURE, .id = texture};
	raven_backend_dispatch(&c);
}

static void rb_render_frame(const RDrawData *data, RCapture *capture)
{
	raven_backend_call c = {.member = RB_RENDER_FRAME, .p0 = data, .capture = capture};
	raven_backend_dispatch(&c);
}

static void rb_wait_idle(void)
{
	raven_backend_call c = {.member = RB_WAIT_IDLE};
	raven_backend_dispatch(&c);
}

static int rb_create_shader(Rid shader, const uint32_t *spirv, size_t size)
{
	raven_backend_call c = {.member = RB_CREATE_SHADER, .id = shader, .p0 = spirv, .size = size};
	return raven_backend_dispatch(&c);
}

static void rb_destroy_shader(Rid shader)
{
	raven_backend_call c = {.member = RB_DESTROY_SHADER, .id = shader};
	raven_backend_dispatch(&c);
}

ZEND_FUNCTION(Rbackend_register)
{
	zend_object *vtable = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(vtable, raven_ce_RBackendVTable)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_owner_check()) {
		RETURN_THROWS();
	}
	raven_table *t = NULL;
	RBackendVTable c = {0};
	if (vtable) {
		/* Property 0 is name; 1 … 12 the members in C order. */
		t = raven_table_new(vtable, 1, RB_COUNT);
		zval *name = OBJ_PROP_NUM(vtable, 0);
		ZVAL_DEREF(name);
		if (Z_TYPE_P(name) == IS_STRING) {
			t->name = strdup(Z_STRVAL_P(name));
		}
		c.name = t->name;
		c.Init = Z_ISUNDEF(t->fn[RB_INIT]) ? NULL : rb_init;
		c.Shutdown = Z_ISUNDEF(t->fn[RB_SHUTDOWN]) ? NULL : rb_shutdown;
		c.CreateSurface = Z_ISUNDEF(t->fn[RB_CREATE_SURFACE]) ? NULL : rb_create_surface;
		c.DestroySurface = Z_ISUNDEF(t->fn[RB_DESTROY_SURFACE]) ? NULL : rb_destroy_surface;
		c.CreateTexture = Z_ISUNDEF(t->fn[RB_CREATE_TEXTURE]) ? NULL : rb_create_texture;
		c.UpdateTexture = Z_ISUNDEF(t->fn[RB_UPDATE_TEXTURE]) ? NULL : rb_update_texture;
		c.SetTextureFilter = Z_ISUNDEF(t->fn[RB_SET_TEXTURE_FILTER]) ? NULL : rb_set_texture_filter;
		c.DestroyTexture = Z_ISUNDEF(t->fn[RB_DESTROY_TEXTURE]) ? NULL : rb_destroy_texture;
		c.RenderFrame = Z_ISUNDEF(t->fn[RB_RENDER_FRAME]) ? NULL : rb_render_frame;
		c.WaitIdle = Z_ISUNDEF(t->fn[RB_WAIT_IDLE]) ? NULL : rb_wait_idle;
		c.CreateShader = Z_ISUNDEF(t->fn[RB_CREATE_SHADER]) ? NULL : rb_create_shader;
		c.DestroyShader = Z_ISUNDEF(t->fn[RB_DESTROY_SHADER]) ? NULL : rb_destroy_shader;
	}
	if (!raven_enter()) {
		raven_table_free(t);
		RETURN_THROWS();
	}
	/* The old table stays alive until Raven holds the new one: Raven may still call it until then. */
	raven_table *old = raven_backend_table;
	raven_backend_table = t;
	Rbackend_register(vtable ? &c : NULL);
	raven_leave();
	raven_table_free(old);
}

/* ---- host platform */

typedef struct raven_host_call {
	int member;
	Rid window;
	RCursor cursor;
	const char *text;
	const char *result;
} raven_host_call;

static void raven_host_run(void *p)
{
	raven_host_call *c = p;
	raven_table *t = raven_host_table;
	zval args[3], rv;
	uint32_t argc = 0;
	if (!t) {
		return;
	}
	switch (c->member) {
		case RH_SET_CURSOR:
			ZVAL_LONG(&args[argc++], c->window);
			ZVAL_LONG(&args[argc++], c->cursor);
			break;
		case RH_CLIPBOARD_SET:
			if (c->text) {
				ZVAL_STRING(&args[argc++], c->text);
			} else {
				ZVAL_NULL(&args[argc++]);
			}
			break;
		default:
			break;
	}
	ZVAL_COPY(&args[argc++], &t->user_data);
	if (raven_table_invoke(t, c->member, &rv, argc, args)) {
		if (c->member == RH_CLIPBOARD_GET) {
			if (Z_TYPE(rv) == IS_STRING) {
				/* Valid until the next call, as Raven expects. */
				if (t->ret_str) {
					zend_string_release(t->ret_str);
				}
				t->ret_str = zend_string_copy(Z_STR(rv));
				c->result = ZSTR_VAL(t->ret_str);
			} else if (Z_TYPE(rv) != IS_NULL) {
				zend_type_error("RHostPlatformDesc::$clipboard_get must return ?string, %s returned", zend_zval_value_name(&rv));
			}
		}
		zval_ptr_dtor(&rv);
	}
	for (uint32_t i = 0; i < argc; i++) {
		zval_ptr_dtor(&args[i]);
	}
}

static void raven_host_done(void *p)
{
	free(p);
}

static void rh_set_cursor(Rid window, RCursor cursor, void *user_data)
{
	(void)user_data;
	raven_host_call c = {.member = RH_SET_CURSOR, .window = window, .cursor = cursor};
	if (raven_on_owner_thread()) {
		raven_host_run(&c);
	}
}

static void rh_clipboard_set(const char *text, void *user_data)
{
	(void)user_data;
	raven_host_call c = {.member = RH_CLIPBOARD_SET, .text = text};
	if (raven_on_owner_thread()) {
		raven_host_run(&c);
	}
}

static const char *rh_clipboard_get(void *user_data)
{
	(void)user_data;
	raven_host_call c = {.member = RH_CLIPBOARD_GET};
	if (raven_on_owner_thread()) {
		raven_host_run(&c);
	}
	return c.result;
}

static void rh_wake(void *user_data)
{
	(void)user_data;
	if (raven_on_owner_thread()) {
		raven_host_call c = {.member = RH_WAKE};
		raven_host_run(&c);
		return;
	}
	/* Thread-safe in C: posted to the owner without Rtask_post, which would call wake again. */
	raven_host_call *c = calloc(1, sizeof(*c));
	if (c) {
		c->member = RH_WAKE;
		raven_post_async(raven_host_run, raven_host_done, c, false);
	}
}

ZEND_FUNCTION(Rhost_platform_register)
{
	zend_object *desc = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(desc, raven_ce_RHostPlatformDesc)
	ZEND_PARSE_PARAMETERS_END();

	if (!raven_owner_check()) {
		RETURN_THROWS();
	}
	raven_table *t = NULL;
	RHostPlatformDesc c = {0};
	if (desc) {
		/* Properties 0 … 3 are the members in C order, 4 is user_data. */
		t = raven_table_new(desc, 0, RH_COUNT);
		zval *ud = OBJ_PROP_NUM(desc, 4);
		ZVAL_DEREF(ud);
		ZVAL_COPY(&t->user_data, ud);
		c.set_cursor = Z_ISUNDEF(t->fn[RH_SET_CURSOR]) ? NULL : rh_set_cursor;
		c.clipboard_set = Z_ISUNDEF(t->fn[RH_CLIPBOARD_SET]) ? NULL : rh_clipboard_set;
		c.clipboard_get = Z_ISUNDEF(t->fn[RH_CLIPBOARD_GET]) ? NULL : rh_clipboard_get;
		c.wake = Z_ISUNDEF(t->fn[RH_WAKE]) ? NULL : rh_wake;
		c.user_data = t;
	}
	if (!raven_enter()) {
		raven_table_free(t);
		RETURN_THROWS();
	}
	raven_table *old = raven_host_table;
	raven_host_table = t;
	Rhost_platform_register(desc ? &c : NULL);
	raven_leave();
	raven_table_free(old);
}

/* ------------------------------------------------------------------------------------------------
 * Classes
 * --------------------------------------------------------------------------------------------- */

ZEND_METHOD(RPainter, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(RAllocator, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(RCapture, __construct)
{
	raven_struct_construct(NULL, Z_OBJ_P(ZEND_THIS), execute_data);
}

ZEND_METHOD(RBackendVTable, __construct)
{
	raven_struct_construct(NULL, Z_OBJ_P(ZEND_THIS), execute_data);
}

ZEND_METHOD(RHostPlatformDesc, __construct)
{
	raven_struct_construct(NULL, Z_OBJ_P(ZEND_THIS), execute_data);
}

void raven_manual_minit(int module_number)
{
	(void)module_number;
	zend_register_functions(NULL, ext_functions, NULL, MODULE_PERSISTENT);
	raven_runtime_pointer_classes(register_class_RPainter(), register_class_RAllocator());
	raven_ce_RCapture = register_class_RCapture();
	raven_ce_RBackendVTable = register_class_RBackendVTable();
	raven_ce_RHostPlatformDesc = register_class_RHostPlatformDesc();
}
