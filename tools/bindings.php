<?php

/*
 * What Raven's headers cannot state, read by tools/generate.php. Everything not named here is
 * derived from the C types by the rules of the design spec ("Names and translations").
 */

return [
    // Raw memory: every buffer crosses as a string and the binding frees what Raven returns.
    'not_bound' => [
        'Rmemory_alloc' => 'raw memory has no PHP meaning',
        'Rmemory_realloc' => 'raw memory has no PHP meaning',
        'Rmemory_free' => 'raw memory has no PHP meaning',
        'Rpixels_alloc' => 'raw memory has no PHP meaning',
        'Rpixels_free' => 'raw memory has no PHP meaning',
    ],

    // Written by hand in src/manual.c, declared in stubs/manual.stub.php.
    'manual' => [
        'Rinit' => 'records the owner thread after a successful init',
        'Rinit_ex' => 'records the owner thread after a successful init',
        'Rshutdown' => 'releases every held callable after Raven stops calling them',
        'Rset_allocator' => 'RAllocator objects come only from Rallocator_get_system',
        'Rallocator_get_system' => 'returns the RAllocator object',
        'Rerror_set_callback' => 'RErrorCallback carries no user data: one global slot',
        'Rparallel_for' => 'worker ranges run on the calling PHP thread before it returns',
        'Rtask_run_async' => 'the task runs on the PHP thread, posted through Rtask_post',
        'Rfile_read' => 'returns Raven memory released with Rmemory_free',
        'Rpdf_document_save_memory' => 'returns Raven memory released with Rmemory_free',
        'Rclipboard_get_data' => 'returns Raven memory released with Rmemory_free',
        'Rdiff_unified' => 'returns Raven memory released with Rmemory_free',
        'Rwindow_capture' => 'returns pixels released with Rpixels_free',
        'Rimage_decode' => 'returns pixels released with Rpixels_free',
        'Rimage_decode_frame' => 'returns pixels released with Rpixels_free',
        'Rclipboard_get_image' => 'returns pixels released with Rpixels_free',
        'Rimage_encode_png' => 'returns PNG bytes released with Rpixels_free',
        'Rvulkan_set_queue_lock_callbacks' => 'two callables on the render thread',
        'Rviewport_set_draw_callback' => 'runs on the render thread',
        'Rbackend_register' => 'custom backend: a table of callables on the render thread',
        'Rhost_platform_register' => 'host platform: a table of callables',
    ],

    // Structs bound by hand in stubs/manual.stub.php: function-pointer tables, Raven-allocated pixels.
    'manual_structs' => ['RAllocator', 'RBackendVTable', 'RHostPlatformDesc', 'RCapture', 'RActionContext'],

    // Registrations that are not one slot per (setter, owner).
    'slots' => [
        'Rtask_post' => 'once',
        'Rtimer_create' => 'return',
        'Rdialog_open' => ['owner' => 'content', 'key' => ['content']],
        'Rpopup_open' => ['owner' => 'content', 'key' => ['content']],
    ],

    // void* parameters that are the application's value: mixed, held per key.
    'user_handles' => [
        'Rwidget_set_user_handle' => ['get' => 'Rwidget_get_user_handle', 'key' => ['widget']],
        'Rwindow_set_user_handle' => ['get' => 'Rwindow_get_user_handle', 'key' => ['window']],
        'Rtree_item_set_user_handle' => ['get' => 'Rtree_item_get_user_handle', 'key' => ['item']],
        'Rnode_graph_set_node_user_data' => ['get' => 'Rnode_graph_get_node_user_data', 'key' => ['graph', 'node']],
    ],
];
