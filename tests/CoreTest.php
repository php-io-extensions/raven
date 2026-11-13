<?php

declare(strict_types=1);

it('initialises headless on the null backend and reports it', function (): void {
    expect(Ris_initialized())->toBe(R_TRUE)
        ->and(Ris_ui_thread())->toBe(R_TRUE)
        ->and(Rget_version())->toBe('0.2.3')
        ->and(RAVEN_VERSION_MAJOR)->toBe(0)
        ->and(RAVEN_VERSION_MINOR)->toBe(2)
        ->and(RAVEN_VERSION_PATCH)->toBe(3)
        ->and(RAVEN_API_VERSION)->toBe('0.2')
        ->and(R_TRUE)->toBe(1)
        ->and(R_FALSE)->toBe(0)
        ->and(R_INVALID_ID)->toBe(4294967295)
        ->and(R_BACKEND_VULKAN)->toBe(1)
        ->and(R_NO_ERROR)->toBe(0x70);
});

it('shuts down and initialises again', function (): void {
    Rshutdown();
    expect(Ris_initialized())->toBe(R_FALSE);
    raven_boot();
    expect(Ris_initialized())->toBe(R_TRUE);
});

it('fires a one-shot timer during a frame and forgets it', function (): void {
    $fired = [];
    $timer = Rtimer_create(0.0, R_FALSE, function (int $id, mixed $ud) use (&$fired): void {
        $fired[] = [$id, $ud];
    }, 'payload');
    expect(Rtimer_is_valid($timer))->toBe(R_TRUE);
    usleep(2000);
    raven_frames(3);
    expect($fired)->toBe([[$timer, 'payload']])
        ->and(Rtimer_is_valid($timer))->toBe(R_FALSE);
});

it('runs posted tasks once, on the UI thread', function (): void {
    $runs = 0;
    Rtask_post(function (mixed $ud) use (&$runs): void {
        expect($ud)->toBe(42)->and(Ris_ui_thread())->toBe(R_TRUE);
        $runs++;
    }, 42);
    raven_frames(3);
    expect($runs)->toBe(1);
});

it('calls the frame callback with the delta time', function (): void {
    $deltas = [];
    Rset_frame_callback(function (float $dt, mixed $ud) use (&$deltas): void {
        $deltas[] = $dt;
    }, null);
    raven_window();
    raven_frames(3);
    Rset_frame_callback(null, null);
    expect($deltas)->not->toBeEmpty()->and($deltas[0])->toBeFloat();
});

it('binds actions by name and fires them', function (): void {
    $got = [];
    Raction_bind('file.save', function (int $sender, ?string $action, mixed $ud) use (&$got): void {
        $got[] = [$sender, $action, $ud];
    }, 'ud');
    Raction_fire('file.save', 0);
    expect($got)->toBe([[0, 'file.save', 'ud']]);
    Raction_unbind('file.save');
    Raction_fire('file.save', 0);
    expect($got)->toHaveCount(1);
});

it('reports errors through Rerror_get_last and the error callback', function (): void {
    $seen = [];
    Rerror_set_callback(function (int $code, int $severity, ?string $detail) use (&$seen): void {
        $seen[] = [$code, $detail];
    });
    Rwindow_set_title(12345, 'nope');
    expect($seen)->toHaveCount(1)
        ->and($seen[0][0])->toBe(R_ERROR_INVALID_ID)
        ->and($seen[0][1])->toContain('Rwindow_set_title');
    $code = Rerror_get_last($detail, $severity);
    expect($code)->toBe(R_ERROR_INVALID_ID)
        ->and($detail)->toContain('Rwindow_set_title')
        ->and($severity)->toBeInt()
        ->and(Rerror_to_string(R_ERROR_INVALID_ID))->toBeString();
    Rerror_set_callback(null);
});

it('fills memory stats in place', function (): void {
    $stats = new RMemoryStats();
    Rmemory_get_stats($stats);
    expect($stats->used_bytes)->toBeGreaterThan(0)
        ->and($stats->allocation_count)->toBeGreaterThan(0)
        ->and(Rmemory_check())->toBe(R_TRUE);
});

it('hands out the system allocator and accepts it back before init', function (): void {
    Rshutdown();
    $system = Rallocator_get_system();
    expect($system)->toBeInstanceOf(RAllocator::class);
    Rset_allocator($system);
    Rset_allocator(null);
    raven_boot();
    expect(fn () => new RAllocator())->toThrow(Error::class);
});

it('reads files through Raven and frees its memory', function (): void {
    $path = tempnam(sys_get_temp_dir(), 'raven');
    file_put_contents($path, "hello\0world");
    expect(Rfile_read($path, $size))->toBe("hello\0world")->and($size)->toBe(11);
    expect(Rfile_read($path . '.missing', $size))->toBeNull();
    unlink($path);
});
