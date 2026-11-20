<?php

declare(strict_types=1);

it('range-checks narrow C integers', function (): void {
    expect(fn () => Rwidget_is_valid(-1))->toThrow(ValueError::class)
        ->and(fn () => Rwidget_is_valid(1 << 33))->toThrow(ValueError::class)
        ->and(fn () => Rwindow_set_min_size(0, PHP_INT_MAX, 0))->toThrow(ValueError::class);
});

it('checks RGBA buffers against width × height × 4', function (): void {
    expect(fn () => Rtexture_create_from_pixels(str_repeat("\0", 15), 2, 2))->toThrow(ValueError::class);
    $tex = Rtexture_create_from_pixels(str_repeat("\xff", 16), 2, 2);
    Rtexture_get_size($tex, $w, $h);
    expect([$w, $h])->toBe([2, 2]);
    $doc = Rpdf_document_create();
    Rpdf_document_add_page($doc, 200.0, 200.0);
    expect(fn () => Rpdf_document_draw_image($doc, 0.0, 0.0, 10.0, 10.0, str_repeat("\0", 15), 2, 2))->toThrow(ValueError::class);
    Rpdf_document_delete($doc);
});

it('checks sized script text against the given size', function (): void {
    expect(fn () => Rscript_load('fn app.x() {}', 100, 't.rvs'))->toThrow(ValueError::class)
        ->and(fn () => Rscript_check('fn app.x() {}', 100, 't.rvs'))->toThrow(ValueError::class);
});

it('checks number arrays against their count', function (): void {
    $plot = Rwidget_create(R_WIDGET_PLOT);
    $series = Rplot_add_series($plot, "s");
    expect(fn () => Rplot_set_series_data($plot, $series, [1.0], [1.0], 2))->toThrow(ValueError::class);
    $chart = Rchart_create(R_CHART_SPARKLINE);
    expect(fn () => Rchart_set_values($chart, [1.0], 2))->toThrow(ValueError::class);
    $heat = Rchart_create(R_CHART_HEATMAP);
    expect(fn () => Rchart_set_grid($heat, 2, 2, [1.0]))->toThrow(ValueError::class);
});

it('checks encode-png buffers against width × height × 4', function (): void {
    expect(function (): void {
        $size = null;
        Rimage_encode_png(str_repeat("\0", 15), 2, 2, $size);
    })->toThrow(ValueError::class);
    expect(fn () => Rimage_save_png('/tmp/x.png', str_repeat("\0", 15), 2, 2))->toThrow(ValueError::class);
    expect(function (): void {
        $max = null;
        $diff = null;
        Rtest_compare_pixels(str_repeat("\0", 15), str_repeat("\0", 16), 2, 2, 0, $max, $diff);
    })->toThrow(ValueError::class);
});

it('round-trips pixels through Rimage_decode', function (): void {
    if (! function_exists('imagecreatetruecolor')) {
        $this->markTestSkipped('gd is not loaded');
    }
    $im = imagecreatetruecolor(3, 2);
    ob_start();
    imagepng($im);
    $png = ob_get_clean();
    $pixels = Rimage_decode($png, strlen($png), $w, $h);
    expect([$w, $h])->toBe([3, 2])->and(strlen($pixels))->toBe(24);
});

it('copies number arrays into Raven', function (): void {
    $plot = Rwidget_create(R_WIDGET_PLOT);
    $series = Rplot_add_series($plot, 's');
    Rplot_set_series_data($plot, $series, [1.0, 2.0, 3], [10.0, 20.0, 30.0], 3);
    expect(Rplot_get_point($plot, $series, 2, $x, $y))->toBe(R_TRUE)->and([$x, $y])->toBe([3.0, 30.0]);
});
