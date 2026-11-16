---
type: Architecture
title: Callbacks and threads
description: How PHP callables are held, called on the PHP thread only, released, and what happens on foreign threads, fork and request end.
resource: src/runtime.c
tags: [raven, callbacks, threads]
status: draft
generated: { by: cursor-grok/4.6, at: 2026-11-16T00:00:00Z }
sources:
  - id: runtime
    resource: src/runtime.c
    title: slots, sweep, user handles, RPainter
  - id: threads
    resource: src/threads.c
    title: owner queue, deadlines, fork
  - id: manual
    resource: src/manual.c
    title: foreign-thread trampolines
---

# Callbacks and threads

* **Slots.** A registration's callables and user data live in a `raven_slot` whose address is the `user_data` Raven gets. The table `RAVEN_G(slots)` holds it under its key; setting the same key again replaces it, `null` removes it. A slot is registered before the Raven call, since Raven may call the new callback while setting it. `Rpopup_open` shares `Rdialog_open`'s key: the content widget.
* **Sweep.** When the table has doubled since the last sweep (64 at least), `raven_leave()` at depth 0 drops slots and user handles whose owner `Rid` no public `*_is_valid` recognises (widget, window, timer, tray, tree item).
* **Owner thread.** The first PHP thread to register a callable, or the one `Rinit` succeeded on, owns Raven; another thread passing a callable gets an `Error`. Generated trampolines run no PHP off the owner thread.
* **UI thread.** All generated callbacks are UI-thread callbacks in Raven (read in its source: XML reloads repost through `Rtask_post`, notifications are synchronous). A callable's exception stays pending; no other callable runs until the Raven call returns and PHP raises it.
* **Foreign threads** (`src/threads.c`): async posts (error callback from the render thread, host `wake`) and sync requests with deadlines (viewport draw 100 ms, queue lock and backend 5 s). The owner serves them from its chained `zend_interrupt_function`, from a `Rtask_post` task, and in `raven_leave()`. `Rtask_post` is called outside the queue lock. Posted work checks its slot is still alive (`RAVEN_G(live)`) before using it.
* **Rparallel_for** records worker ranges and runs them on the PHP thread before returning. **Rtask_run_async** reposts from the worker with `Rtask_post`.
* **Fork.** `pthread_atfork` marks the child when Raven was initialised; every binding call there is an `Error`, and its request end skips `Rshutdown()` (the join would never return).
* **Request end.** `ending` is set (callables no longer run), `Rshutdown()` if Raven is still up on this thread, then slots, user handles and backend/host tables are freed.
