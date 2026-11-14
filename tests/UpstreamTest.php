<?php

declare(strict_types=1);

it('sets an accessible press action and checked state on a custom widget', function (): void {
    $window = raven_window();
    $widget = Rwidget_create(R_WIDGET_CUSTOM);
    Rwindow_set_content($window, $widget);
    $pressed = [];
    Rwidget_set_accessible_action($widget, function (int $id, mixed $ud) use (&$pressed): void {
        $pressed[] = [$id, $ud];
    }, 'a11y');
    Rwidget_set_accessible_checked($widget, 1);
    raven_frames();
    expect(Rwidget_is_valid($widget))->toBe(R_TRUE)->and($pressed)->toBe([]);
    Rwidget_set_accessible_checked($widget, -1);
    Rwidget_set_accessible_action($widget, null, null);
});

it('adds a completion with a different insert text and turns language words off', function (): void {
    $window = raven_window();
    $editor = Rtext_editor_create('Th');
    Rwindow_set_content($window, $editor);
    Rtext_editor_set_language($editor, 'C');
    Rtext_editor_set_completion_words($editor, R_FALSE);
    $prefixes = [];
    Rtext_editor_set_completion_callback($editor, function (int $id, ?string $prefix, mixed $ud) use (&$prefixes): void {
        $prefixes[] = $prefix;
        Rtext_editor_add_completion_insert($id, 'Threshold', 'function', 'Threshold(');
    }, null);
    raven_frames();
    Rwidget_focus($editor);
    Rtext_editor_set_cursor($editor, 0, 2);
    Rtext_editor_show_completions($editor);
    raven_frames();
    expect($prefixes)->not->toBeEmpty();
});

it('returns hover text from a text editor callable', function (): void {
    $window = raven_window(400, 240);
    $editor = Rtext_editor_create("alpha beta\ngamma");
    Rwindow_set_content($window, $editor);
    $seen = [];
    Rtext_editor_set_hover_callback($editor, function (int $id, int $line, int $column, mixed $ud) use (&$seen): ?string {
        $seen[] = [$line, $column, $ud];

        return 'hover-'.$line.':'.$column;
    }, 'h');
    raven_frames(3);
    Rwidget_get_rect($editor, $x, $y, $w, $h);
    Rwindow_inject_mouse_move($window, $x + 12.0, $y + 12.0);
    raven_frames(4);
    expect($seen)->not->toBeEmpty()->and($seen[0][2])->toBe('h');
});

it('looks up pin tags, lights them, and sets pin label width and badge color', function (): void {
    $window = raven_window(640, 400);
    $graph = Rnode_graph_create();
    Rwindow_set_content($window, $graph);
    $node = Rnode_graph_add_node($graph, 'Noise', 40.0, 60.0);
    $pin = Rnode_graph_add_output($graph, $node, 'value', 'number');
    Rnode_graph_set_pin_tag($graph, $pin, 'netA');
    Rnode_graph_set_pin_tag_lit($graph, $pin, R_TRUE);
    Rnode_graph_set_pin_label_width($graph, 48.0);
    Rnode_graph_set_node_badge($graph, $node, '1');
    Rnode_graph_set_node_badge_color($graph, $node, 1.0, 0.4, 0.0);
    raven_frames(3);
    expect(Rnode_graph_get_pin_label_width($graph))->toBe(48.0);
    Rnode_graph_get_pin_position($graph, $pin, $px, $py);
    Rnode_graph_from_canvas($graph, $px, $py, $wx, $wy);
    expect(Rnode_graph_get_tag_at($graph, $wx, $wy))->toBeInt();
});

it('sets a tray title and reads its rect', function (): void {
    $tray = Rtray_create();
    Rtray_set_title($tray, 'ext-raven');
    $ok = Rtray_get_rect($tray, $x, $y, $w, $h);
    expect($ok)->toBeInt()
        ->and($x)->toBeInt()
        ->and($y)->toBeInt()
        ->and($w)->toBeInt()
        ->and($h)->toBeInt();
    if (Rtray_is_valid($tray) === R_TRUE) {
        Rtray_destroy($tray);
    }
});

it('writes a PDF document to memory and frees Raven\'s buffer', function (): void {
    $doc = Rpdf_document_create();
    expect($doc)->not->toBe(R_INVALID_ID);
    expect(Rpdf_document_add_page($doc, 595.28, 841.89))->toBe(0);
    Rpdf_document_set_font($doc, R_PDF_FONT_SANS, 18.0, R_PDF_TEXT_BOLD);
    Rpdf_document_draw_text($doc, 56.0, 56.0, 'ext-raven');
    $pixels = str_repeat("\xff", 8 * 8 * 4);
    Rpdf_document_draw_image($doc, 56.0, 80.0, 32.0, 32.0, $pixels, 8, 8);
    $pdf = Rpdf_document_save_memory($doc, $size);
    expect($pdf)->toBeString()
        ->and(str_starts_with($pdf, '%PDF-'))->toBeTrue()
        ->and($size)->toBe(strlen($pdf));
    Rpdf_document_delete($doc);
    expect(Rpdf_is_available())->toBeInt()
        ->and(R_WIDGET_PDF_VIEW)->toBeInt();
});

it('fills window safe-area insets and follows the system theme flag', function (): void {
    $window = raven_window();
    $insets = new RInsets();
    Rwindow_get_safe_area($window, $insets);
    expect($insets->top)->toBe(0.0)
        ->and($insets->right)->toBe(0.0)
        ->and($insets->bottom)->toBe(0.0)
        ->and($insets->left)->toBe(0.0);
    Rtheme_follow_system(R_FALSE);
    expect(Rtheme_get_system_dark())->toBeInt();
});
