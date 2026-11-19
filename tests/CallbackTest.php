<?php

declare(strict_types=1);

it('paints a custom widget with a painter valid only during the callback', function (): void {
    $window = raven_window(200, 100);
    $custom = Rwidget_create(R_WIDGET_CUSTOM);
    Rwindow_set_content($window, $custom);
    $kept = null;
    $sizes = [];
    Rcustom_set_paint_callback($custom, function (int $w, RPainter $p, float $width, float $height, mixed $ud) use (&$kept, &$sizes): void {
        Rdraw_rect($p, 0, 0, $width, $height, 4, 1, 0, 0, 1);
        Rdraw_text($p, Rfont_get_default(), 14, 2, 2, 'hi', 1, 1, 1, 1);
        $kept = $p;
        $sizes[] = [$width, $height];
    }, null);
    raven_frames();
    expect($sizes)->not->toBeEmpty()->and($kept)->toBeInstanceOf(RPainter::class);
    expect(fn () => Rdraw_rect($kept, 0, 0, 1, 1, 0, 1, 1, 1, 1))->toThrow(ValueError::class, 'paint callback has returned');
    expect(fn () => clone $kept)->toThrow(Error::class);
});

it('writes a measure callback\'s by-reference size back to Raven', function (): void {
    $window = raven_window(400, 300);
    $row = Rwidget_create(R_WIDGET_HBOX);
    $custom = Rwidget_add_child($row, Rwidget_create(R_WIDGET_CUSTOM));
    Rwindow_set_content($window, $row);
    Rcustom_set_measure_callback($custom, function (int $w, float &$width, float &$height, mixed $ud): void {
        $width = 77.0;
        $height = 33.0;
    }, null);
    raven_frames(3);
    Rwidget_get_desired_size($custom, $dw, $dh);
    expect([$dw, $dh])->toBe([77.0, 33.0]);
});

it('feeds a virtual list from a callable returning strings', function (): void {
    $window = raven_window(200, 300);
    $list = Rwidget_create(R_WIDGET_LIST_VIEW);
    Rwindow_set_content($window, $list);
    $asked = [];
    Rlist_view_set_virtual_items($list, 1000, function (int $id, int $index, mixed $ud) use (&$asked): ?string {
        $asked[] = $index;

        return "$ud $index";
    }, 'row');
    raven_frames(2);
    expect($asked)->not->toBeEmpty()->and(min($asked))->toBe(0)->and(max($asked))->toBeLessThan(1000);
});

it('rethrows an exception a callable threw, and runs no other callable meanwhile', function (): void {
    $second = 0;
    Raction_bind('boom', function (): void {
        throw new RuntimeException('from the action');
    }, null);
    Raction_bind('other', function () use (&$second): void {
        $second++;
    }, null);
    expect(fn () => Raction_fire('boom', 0))->toThrow(RuntimeException::class, 'from the action');
    Raction_fire('other', 0);
    expect($second)->toBe(1);
});

it('refuses an action context after its callback has returned', function (): void {
    $kept = null;
    expect(Raction_bind_with_parameters('app.mark', '(): void', function (RActionContext $ctx, mixed $ud) use (&$kept): void {
        expect(Raction_get_name($ctx))->toBe('app.mark');
        $kept = $ctx;
    }, null))->toBe(R_TRUE);
    $script = "fn app.go() {\n    app.mark();\n}\n";
    expect(Rscript_load($script, strlen($script), 'mark.rvs'))->toBe(R_TRUE);
    Raction_fire('app.go', R_INVALID_ID);
    expect($kept)->toBeInstanceOf(RActionContext::class);
    expect(fn () => Raction_get_name($kept))->toThrow(ValueError::class, 'callback has returned');
    expect(fn () => clone $kept)->toThrow(Error::class);
    Raction_unbind('app.mark');
    Rscript_reset();
});

it('turns a wrong return type into a TypeError', function (): void {
    $window = raven_window();
    Rwindow_set_close_callback($window, fn () => 'yes', null);
    expect(fn () => Rwindow_close($window))->toThrow(TypeError::class);
});

it('replaces a held callable and releases the old one', function (): void {
    $button = Rbutton_create('x');
    $first = new class {
        public static int $alive = 0;

        public function __construct()
        {
            self::$alive++;
        }

        public function __destruct()
        {
            self::$alive--;
        }

        public function __invoke(): void {}
    };
    $class = $first::class;
    Rbutton_set_clicked_callback($button, $first, null);
    unset($first);
    expect($class::$alive)->toBe(1);
    Rbutton_set_clicked_callback($button, null, null);
    expect($class::$alive)->toBe(0);
});

it('releases callables of destroyed widgets on a sweep', function (): void {
    $class = new class {
        public static int $alive = 0;

        public function __construct()
        {
            self::$alive++;
        }

        public function __destruct()
        {
            self::$alive--;
        }

        public function __invoke(): void {}
    };
    $name = $class::class;
    unset($class);
    $name::$alive = 0;
    for ($i = 0; $i < 200; $i++) {
        $b = Rbutton_create("b$i");
        Rbutton_set_clicked_callback($b, new $name(), null);
        Rwidget_destroy($b);
    }
    raven_frames(1);
    expect($name::$alive)->toBeLessThan(200);
    Rshutdown();
    expect($name::$alive)->toBe(0);
});
