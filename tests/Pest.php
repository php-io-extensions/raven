<?php

declare(strict_types=1);

if (! extension_loaded('raven')) {
    throw new RuntimeException('The raven extension is not loaded; run ./install-macos.sh or ./install-debian-trixie.sh');
}

/** Raven headless on the null backend: no window opens, nothing is drawn. */
function raven_boot(): void
{
    expect(Rinit_ex(new RInitDesc(backend: R_BACKEND_NULL, headless: R_TRUE, app_name: 'ext-raven tests')))->toBe(R_TRUE);
}

function raven_window(int $width = 400, int $height = 300): int
{
    $window = Rwindow_create('ext-raven', $width, $height, R_WINDOW_DEFAULT);
    expect(Rwindow_is_valid($window))->toBe(R_TRUE);

    return $window;
}

function raven_frames(int $count = 2): void
{
    for ($i = 0; $i < $count; $i++) {
        Rdraw_frame();
    }
}

/** Runs PHP code in a child process with the module loaded; returns [exit code, output]. Killed after 20 s. */
function raven_child(string $code): array
{
    $out = tempnam(sys_get_temp_dir(), 'raven-child');
    $p = proc_open([PHP_BINARY, '-d', 'memory_limit=128M', '-r', $code], [1 => ['file', $out, 'w'], 2 => ['file', $out, 'a']], $pipes);
    $start = microtime(true);
    while (proc_get_status($p)['running'] && microtime(true) - $start < 20) {
        usleep(10000);
    }
    $status = proc_get_status($p);
    if ($status['running']) {
        proc_terminate($p, 9);
    }
    $code = $status['running'] ? -1 : $status['exitcode'];
    proc_close($p);
    $text = (string) file_get_contents($out);
    unlink($out);

    return [$code, $text];
}

uses()->beforeEach(fn () => raven_boot())->afterEach(fn () => Ris_initialized() && Rshutdown())->in(__DIR__);
