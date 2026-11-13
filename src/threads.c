/*
 * Raven's workers and render thread never enter PHP. A call they make into a PHP callable is
 * handed to the owner thread (the PHP thread that called Rinit):
 *
 *   async  the foreign thread queues it and returns (no result is needed);
 *   sync   the foreign thread queues it and waits; a call the owner has not started within its
 *          deadline is withdrawn and the foreign thread takes the callback's no-op result.
 *
 * The owner serves the queue from its VM interrupt hook (raised by the poster), from a task
 * posted with Rtask_post (so Rwait_frame / Rdraw_frame serve it) and when a binding call into
 * Raven returns.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_raven.h"
#include "zend_exceptions.h"

#include <errno.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

#include "runtime.h"

enum { RAVEN_QUEUED = 0, RAVEN_RUNNING = 1, RAVEN_DONE = 2 };

typedef struct raven_request {
	void (*run)(void *);
	void (*done)(void *);
	void *ctx;
	bool sync;
	int state;
	pthread_cond_t cond;
	struct raven_request *next;
} raven_request;

static pthread_mutex_t raven_queue_lock = PTHREAD_MUTEX_INITIALIZER;
static raven_request *raven_queue_head, *raven_queue_tail;
static zend_atomic_bool *raven_owner_interrupt;
static bool raven_forked;
static bool raven_serve_posted;
static void (*raven_prev_interrupt)(zend_execute_data *execute_data);

static void raven_queue_push(raven_request *r)
{
	r->next = NULL;
	if (raven_queue_tail) {
		raven_queue_tail->next = r;
	} else {
		raven_queue_head = r;
	}
	raven_queue_tail = r;
}

static bool raven_queue_remove(raven_request *r)
{
	raven_request **p = &raven_queue_head, *prev = NULL;
	while (*p) {
		if (*p == r) {
			*p = r->next;
			if (raven_queue_tail == r) {
				raven_queue_tail = prev;
			}
			return true;
		}
		prev = *p;
		p = &(*p)->next;
	}
	return false;
}

static void raven_serve_task(void *unused)
{
	(void)unused;
	pthread_mutex_lock(&raven_queue_lock);
	raven_serve_posted = false;
	pthread_mutex_unlock(&raven_queue_lock);
	raven_serve();
}

/* Called with the queue lock held. True: the caller posts raven_serve_task once it has released
 * the lock (Rtask_post takes Raven's own lock, which Raven may hold while it runs a task that
 * takes ours). */
static bool raven_wake_owner(bool wake_raven)
{
	if (raven_owner_interrupt) {
		zend_atomic_bool_store(raven_owner_interrupt, true);
	}
	if (wake_raven && !raven_serve_posted && Ris_initialized()) {
		raven_serve_posted = true;
		return true;
	}
	return false;
}

void raven_post_async(void (*run)(void *), void (*done)(void *), void *ctx, bool wake_raven)
{
	raven_request *r = calloc(1, sizeof(*r));
	if (!r) {
		done(ctx);
		return;
	}
	r->run = run;
	r->done = done;
	r->ctx = ctx;
	pthread_mutex_lock(&raven_queue_lock);
	if (raven_forked) {
		pthread_mutex_unlock(&raven_queue_lock);
		done(ctx);
		free(r);
		return;
	}
	raven_queue_push(r);
	bool post = raven_wake_owner(wake_raven);
	pthread_mutex_unlock(&raven_queue_lock);
	if (post) {
		Rtask_post(raven_serve_task, NULL);
	}
}

bool raven_post_sync(void (*run)(void *), void *ctx, double deadline)
{
	raven_request r = {0};
	struct timeval now;
	struct timespec until;
	bool ran;

	r.run = run;
	r.ctx = ctx;
	r.sync = true;
	pthread_cond_init(&r.cond, NULL);

	gettimeofday(&now, NULL);
	double t = (double)now.tv_sec + (double)now.tv_usec / 1e6 + deadline;
	until.tv_sec = (time_t)t;
	until.tv_nsec = (long)((t - (double)until.tv_sec) * 1e9);

	pthread_mutex_lock(&raven_queue_lock);
	if (raven_forked || !raven_owner_interrupt) {
		pthread_mutex_unlock(&raven_queue_lock);
		pthread_cond_destroy(&r.cond);
		return false;
	}
	raven_queue_push(&r);
	if (raven_wake_owner(true)) {
		pthread_mutex_unlock(&raven_queue_lock);
		Rtask_post(raven_serve_task, NULL);
		pthread_mutex_lock(&raven_queue_lock);
	}
	while (r.state == RAVEN_QUEUED) {
		if (pthread_cond_timedwait(&r.cond, &raven_queue_lock, &until) == ETIMEDOUT && r.state == RAVEN_QUEUED) {
			raven_queue_remove(&r);
			break;
		}
	}
	/* Once started, the owner holds pointers into this thread's arguments: wait for the end. */
	while (r.state == RAVEN_RUNNING) {
		pthread_cond_wait(&r.cond, &raven_queue_lock);
	}
	ran = r.state == RAVEN_DONE;
	pthread_mutex_unlock(&raven_queue_lock);
	pthread_cond_destroy(&r.cond);
	return ran;
}

void raven_serve(void)
{
	if (!raven_on_owner_thread()) {
		return;
	}
	for (;;) {
		pthread_mutex_lock(&raven_queue_lock);
		raven_request *r = raven_queue_head;
		if (!r) {
			pthread_mutex_unlock(&raven_queue_lock);
			return;
		}
		raven_queue_head = r->next;
		if (!raven_queue_head) {
			raven_queue_tail = NULL;
		}
		r->state = RAVEN_RUNNING;
		pthread_mutex_unlock(&raven_queue_lock);

		r->run(r->ctx);

		if (r->sync) {
			pthread_mutex_lock(&raven_queue_lock);
			r->state = RAVEN_DONE;
			pthread_cond_signal(&r->cond);
			pthread_mutex_unlock(&raven_queue_lock);
		} else {
			r->done(r->ctx);
			free(r);
		}
	}
}

static void raven_interrupt(zend_execute_data *execute_data)
{
	if (raven_on_owner_thread()) {
		raven_serve();
	}
	if (raven_prev_interrupt) {
		raven_prev_interrupt(execute_data);
	}
}

static void raven_atfork_child(void)
{
	/* Raven's workers and render thread do not exist in the child. */
	if (Ris_initialized()) {
		raven_forked = true;
	}
	pthread_mutex_init(&raven_queue_lock, NULL);
	raven_queue_head = raven_queue_tail = NULL;
	raven_serve_posted = false;
}

bool raven_is_forked(void)
{
	return raven_forked;
}

bool raven_forked_check(void)
{
	if (raven_forked) {
		zend_throw_error(NULL, "Raven's threads did not survive fork(): Raven cannot be used in this process");
		return false;
	}
	return true;
}

void raven_threads_owner(void)
{
	pthread_mutex_lock(&raven_queue_lock);
	raven_owner_interrupt = &EG(vm_interrupt);
	pthread_mutex_unlock(&raven_queue_lock);
}

void raven_threads_minit(void)
{
	raven_prev_interrupt = zend_interrupt_function;
	zend_interrupt_function = raven_interrupt;
	pthread_atfork(NULL, NULL, raven_atfork_child);
}

void raven_threads_rshutdown(void)
{
	if (!raven_on_owner_thread()) {
		return;
	}
	/* Async calls still queued are dropped; sync waiters are released by their deadline. */
	pthread_mutex_lock(&raven_queue_lock);
	raven_request *keep = NULL, *keep_tail = NULL, *r = raven_queue_head, *next;
	for (; r; r = next) {
		next = r->next;
		if (r->sync) {
			r->next = NULL;
			if (keep_tail) {
				keep_tail->next = r;
			} else {
				keep = r;
			}
			keep_tail = r;
		} else {
			r->done(r->ctx);
			free(r);
		}
	}
	raven_queue_head = keep;
	raven_queue_tail = keep_tail;
	raven_owner_interrupt = NULL;
	pthread_mutex_unlock(&raven_queue_lock);
}
