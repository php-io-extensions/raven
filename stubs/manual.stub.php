<?php

/** @generate-class-entries */

/* Hand-written bindings (src/manual.c): the functions and classes tools/bindings.php lists as manual. */

function Rinit(int $backend): int {}

function Rinit_ex(?RInitDesc $desc): int {}

function Rshutdown(): void {}

function Rset_allocator(?RAllocator $allocator): void {}

function Rallocator_get_system(): ?RAllocator {}

/** fn(int $code, int $severity, ?string $detail): void */
function Rerror_set_callback(?callable $callback): void {}

/** fn(int $begin, int $end, mixed $user_data): void */
function Rparallel_for(int $count, int $grain, ?callable $function, mixed $user_data): void {}

/** fn(mixed $user_data): void */
function Rtask_run_async(?callable $task, mixed $user_data): void {}

function Rfile_read(?string $path, ?int &$size): ?string {}

function Rwindow_capture(int $window, ?int &$width, ?int &$height): ?string {}

function Rimage_decode(string $data, int $data_size, ?int &$width, ?int &$height): ?string {}

/** fn(mixed $user_data): void, both */
function Rvulkan_set_queue_lock_callbacks(?callable $lock, ?callable $unlock, mixed $user_data): void {}

/** fn(RViewportDrawInfo $info, mixed $user_data): void */
function Rviewport_set_draw_callback(int $viewport, ?callable $callback, mixed $user_data): void {}

function Rbackend_register(?RBackendVTable $vtable): void {}

function Rhost_platform_register(?RHostPlatformDesc $desc): void {}

/**
 * A paint callback's painter, valid until the callback returns.
 * @strict-properties
 * @not-serializable
 */
final class RPainter
{
    private function __construct() {}
}

/**
 * Raven's system allocator, from Rallocator_get_system().
 * @strict-properties
 * @not-serializable
 */
final class RAllocator
{
    private function __construct() {}
}

/** Filled by RenderFrame: RGBA8 pixels, width × height × 4 bytes. */
final class RCapture
{
    public ?string $pixels = null;
    public int $width = 0;
    public int $height = 0;

    public function __construct(?string $pixels = null, int $width = 0, int $height = 0) {}
}

/** One Closure per C member; Raven copies the table at Rbackend_register. */
final class RBackendVTable
{
    public ?string $name = null;
    /** fn(RBackendInitInfo $info): int */
    public ?Closure $Init = null;
    /** fn(): void */
    public ?Closure $Shutdown = null;
    /** fn(int $window, RNativeWindow $native, int $width, int $height): int */
    public ?Closure $CreateSurface = null;
    /** fn(int $window): void */
    public ?Closure $DestroySurface = null;
    /** fn(int $texture, RTextureDesc $desc, ?string $pixels): int */
    public ?Closure $CreateTexture = null;
    /** fn(int $texture, int $x, int $y, int $width, int $height, ?string $pixels): void */
    public ?Closure $UpdateTexture = null;
    /** fn(int $texture, int $filter): void */
    public ?Closure $SetTextureFilter = null;
    /** fn(int $texture): void */
    public ?Closure $DestroyTexture = null;
    /** fn(RDrawData $data, ?RCapture $capture): void */
    public ?Closure $RenderFrame = null;
    /** fn(): void */
    public ?Closure $WaitIdle = null;
    /** fn(int $shader, string $spirv, int $size): int */
    public ?Closure $CreateShader = null;
    /** fn(int $shader): void */
    public ?Closure $DestroyShader = null;

    public function __construct(?string $name = null, ?Closure $Init = null, ?Closure $Shutdown = null, ?Closure $CreateSurface = null, ?Closure $DestroySurface = null, ?Closure $CreateTexture = null, ?Closure $UpdateTexture = null, ?Closure $SetTextureFilter = null, ?Closure $DestroyTexture = null, ?Closure $RenderFrame = null, ?Closure $WaitIdle = null, ?Closure $CreateShader = null, ?Closure $DestroyShader = null) {}
}

/** One Closure per C member; Raven copies the structure at Rhost_platform_register. */
final class RHostPlatformDesc
{
    /** fn(int $window, int $cursor, mixed $user_data): void */
    public ?Closure $set_cursor = null;
    /** fn(?string $text, mixed $user_data): void */
    public ?Closure $clipboard_set = null;
    /** fn(mixed $user_data): ?string */
    public ?Closure $clipboard_get = null;
    /** fn(mixed $user_data): void */
    public ?Closure $wake = null;
    public mixed $user_data = null;

    public function __construct(?Closure $set_cursor = null, ?Closure $clipboard_set = null, ?Closure $clipboard_get = null, ?Closure $wake = null, mixed $user_data = null) {}
}
