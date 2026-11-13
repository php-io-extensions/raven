<?php

declare(strict_types=1);

it('shuts Raven down at request end with callables still held', function (): void {
    [$code, $out] = raven_child(<<<'PHP'
        Rinit_ex(new RInitDesc(backend: R_BACKEND_NULL, headless: R_TRUE));
        $w = Rwindow_create('x', 100, 100, R_WINDOW_DEFAULT);
        $b = Rbutton_create('b');
        Rwindow_set_content($w, $b);
        Rbutton_set_clicked_callback($b, fn () => print("never\n"), null);
        Rwidget_set_destroy_callback($b, fn () => print("destroyed\n"), null);
        Rtimer_create(10.0, R_TRUE, fn () => null, null);
        echo "done\n";
        PHP);
    expect($code)->toBe(0)->and($out)->toBe("done\n");
});

it('refuses Raven in a forked child', function (): void {
    [$code, $out] = raven_child(<<<'PHP'
        Rinit_ex(new RInitDesc(backend: R_BACKEND_NULL, headless: R_TRUE));
        $pid = pcntl_fork();
        if ($pid === 0) {
            try { Rdraw_frame(); } catch (Error $e) { echo $e->getMessage(), "\n"; }
            exit(0);
        }
        pcntl_waitpid($pid, $status);
        Rdraw_frame();
        echo "parent ok\n";
        PHP);
    expect($code)->toBe(0)
        ->and($out)->toContain('did not survive fork()')
        ->and($out)->toContain('parent ok');
})->skip(! function_exists('pcntl_fork'), 'pcntl is not loaded');
