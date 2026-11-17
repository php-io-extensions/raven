<?php

declare(strict_types=1);

it('lays out a window content and returns rects through out-parameters', function (): void {
    $window = raven_window(320, 200);
    $button = Rbutton_create('Click');
    Rwindow_set_content($window, $button);
    raven_frames();
    Rwindow_get_size($window, $w, $h);
    Rwidget_get_rect($button, $x, $y, $bw, $bh);
    expect([$w, $h])->toBe([320, 200])
        ->and($bw)->toBeFloat()->toBeGreaterThan(0.0)
        ->and($bh)->toBeGreaterThan(0.0);
});

it('round-trips text and labels', function (): void {
    $input = Rwidget_create(R_WIDGET_TEXT_INPUT);
    Rtext_input_set_text($input, 'héllo');
    expect(Rtext_input_get_text($input))->toBe('héllo');
    $label = Rlabel_create('one');
    Rlabel_set_text($label, 'two');
    expect(Rlabel_get_text($label))->toBe('two');
});

it('builds a widget tree', function (): void {
    $row = Rwidget_create(R_WIDGET_HBOX);
    $a = Rwidget_add_child($row, Rbutton_create('A'));
    $b = Rwidget_add_child($row, Rlabel_create('B'));
    expect(Rwidget_get_child_count($row))->toBe(2)
        ->and(Rwidget_get_child($row, 0))->toBe($a)
        ->and(Rwidget_get_parent($b))->toBe($row)
        ->and(Rwidget_get_type($b))->toBe(R_WIDGET_LABEL);
    Rwidget_destroy($row);
    expect(Rwidget_is_valid($a))->toBe(R_FALSE);
});

it('holds a PHP value as a widget, window and tree item user handle', function (): void {
    $window = raven_window();
    $button = Rbutton_create('x');
    $object = new stdClass();
    Rwidget_set_user_handle($button, $object);
    Rwindow_set_user_handle($window, [1, 2]);
    expect(Rwidget_get_user_handle($button))->toBe($object)
        ->and(Rwindow_get_user_handle($window))->toBe([1, 2]);
    Rwidget_set_user_handle($button, null);
    expect(Rwidget_get_user_handle($button))->toBeNull();
});

it('clicks a button through injected mouse input', function (): void {
    $window = raven_window(200, 100);
    $button = Rbutton_create('Click');
    Rwindow_set_content($window, $button);
    raven_frames();
    $clicks = [];
    Rbutton_set_clicked_callback($button, function (int $id, mixed $ud) use (&$clicks): void {
        $clicks[] = [$id, $ud];
    }, 'ud');
    Rwidget_get_rect($button, $x, $y, $w, $h);
    Rwindow_inject_mouse_move($window, $x + $w / 2, $y + $h / 2);
    raven_frames(1);
    Rwindow_inject_mouse_button($window, R_MOUSE_LEFT, R_TRUE);
    Rwindow_inject_mouse_button($window, R_MOUSE_LEFT, R_FALSE);
    raven_frames(2);
    expect($clicks)->toBe([[$button, 'ud']]);
});

it('types into a text input and reports the change', function (): void {
    $window = raven_window();
    $input = Rwidget_create(R_WIDGET_TEXT_INPUT);
    Rwindow_set_content($window, $input);
    raven_frames();
    $changes = [];
    Rtext_input_set_changed_callback($input, function (int $id, ?string $text) use (&$changes): void {
        $changes[] = $text;
    }, null);
    Rwidget_focus($input);
    Rwindow_inject_text($window, 'ab');
    raven_frames();
    expect(Rtext_input_get_text($input))->toBe('ab')->and(end($changes))->toBe('ab');
});

it('reads theme colors through four float out-parameters', function (): void {
    Rtheme_get_color(R_COLOR_WINDOW, $r, $g, $b, $a);
    foreach ([$r, $g, $b, $a] as $c) {
        expect($c)->toBeFloat()->toBeGreaterThanOrEqual(0.0)->toBeLessThanOrEqual(1.0);
    }
    Rcolor_rgb_to_hsv(1.0, 0.0, 0.0, $hue, $s, $v);
    expect([$hue, $s, $v])->toBe([0.0, 1.0, 1.0]);
});

it('lets a label with a tooltip take the hover', function (): void {
    $window = raven_window(320, 200);
    $label = Rlabel_create('Hover me');
    Rwindow_set_content($window, $label);
    raven_frames();
    Rwidget_get_rect($label, $x, $y, $w, $h);
    $cx = $x + $w / 2;
    $cy = $y + $h / 2;

    Rwindow_inject_mouse_move($window, $cx, $cy);
    raven_frames(2);
    expect(Rwidget_get_tooltip($label))->toBe('')
        ->and(Rwidget_is_hovered($label))->toBe(R_FALSE)
        ->and(Rwindow_get_hovered_widget($window))->not->toBe($label);

    Rwidget_set_tooltip($label, 'A tip');
    Rwindow_inject_mouse_move($window, 0.0, 0.0);
    raven_frames(1);
    Rwindow_inject_mouse_move($window, $cx, $cy);
    raven_frames(2);
    expect(Rwidget_get_tooltip($label))->toBe('A tip')
        ->and(Rwidget_is_hovered($label))->toBe(R_TRUE)
        ->and(Rwindow_get_hovered_widget($window))->toBe($label);

    Rwidget_set_tooltip($label, null);
    Rwindow_inject_mouse_move($window, 0.0, 0.0);
    raven_frames(1);
    Rwindow_inject_mouse_move($window, $cx, $cy);
    raven_frames(2);
    expect(Rwidget_get_tooltip($label))->toBe('')
        ->and(Rwidget_is_hovered($label))->toBe(R_FALSE)
        ->and(Rwindow_get_hovered_widget($window))->not->toBe($label);
});
