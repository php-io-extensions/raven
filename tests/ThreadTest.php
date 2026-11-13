<?php

declare(strict_types=1);

it('runs every Rparallel_for range exactly once on the PHP thread', function (): void {
    $seen = array_fill(0, 1000, 0);
    Rparallel_for(1000, 16, function (int $begin, int $end, mixed $ud) use (&$seen): void {
        expect(Ris_ui_thread())->toBe(R_TRUE)->and($ud)->toBe('ud');
        for ($i = $begin; $i < $end; $i++) {
            $seen[$i]++;
        }
    }, 'ud');
    expect(array_unique($seen))->toBe([1]);
});

it('runs Rtask_run_async on the PHP thread during a later frame', function (): void {
    $ran = [];
    Rtask_run_async(function (mixed $ud) use (&$ran): void {
        $ran[] = [$ud, Ris_ui_thread()];
    }, 'job');
    for ($i = 0; $i < 50 && ! $ran; $i++) {
        usleep(2000);
        Rwait_frame(0.01);
    }
    expect($ran)->toBe([['job', R_TRUE]]);
});

it('reports the worker pool', function (): void {
    expect(Rget_worker_thread_count())->toBeInt()->toBeGreaterThanOrEqual(0);
});
