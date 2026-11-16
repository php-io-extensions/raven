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

it('builds pie, donut, gauge, heatmap and sparkline charts', function (): void {
    $window = raven_window(480, 320);
    $pie = Rchart_create(R_CHART_PIE);
    expect(Rwidget_get_type($pie))->toBe(R_WIDGET_CHART)
        ->and(Rchart_get_kind($pie))->toBe(R_CHART_PIE);
    Rwindow_set_content($window, $pie);
    Rchart_set_title($pie, 'Share');
    Rchart_set_format($pie, '%.0f');
    expect(Rchart_add_slice($pie, 'A', 40.0))->toBe(0)
        ->and(Rchart_add_slice($pie, 'B', 60.0))->toBe(1);
    Rchart_set_slice_color($pie, 0, 0.2, 0.4, 0.8, 1.0);
    Rchart_set_selected($pie, 1);
    Rchart_set_legend($pie, R_TRUE);
    $clicks = [];
    Rchart_set_slice_clicked_callback($pie, function (int $id, int $slice, int $selected, mixed $ud) use (&$clicks): void {
        $clicks[] = [$id, $slice, $selected, $ud];
    }, 'pie');
    raven_frames();
    expect(Rchart_get_title($pie))->toBe('Share')
        ->and(Rchart_get_slice_count($pie))->toBe(2)
        ->and(Rchart_get_slice_label($pie, 0))->toBe('A')
        ->and(Rchart_get_slice_value($pie, 1))->toBe(60.0)
        ->and(Rchart_get_total($pie))->toBe(100.0)
        ->and(Rchart_get_selected($pie))->toBe(1)
        ->and(Rchart_get_hovered($pie))->toBe(-1)
        ->and($clicks)->toBe([]);

    $donut = Rchart_create(R_CHART_DONUT);
    Rchart_set_hole($donut, 0.5);
    Rchart_set_center_text($donut, '100', 'total');
    Rchart_add_slice($donut, 'X', 1.0);
    expect(Rchart_get_kind($donut))->toBe(R_CHART_DONUT);

    $gauge = Rchart_create(R_CHART_GAUGE);
    Rchart_set_range($gauge, 0.0, 100.0);
    Rchart_set_value($gauge, 72.0);
    Rchart_set_color($gauge, 0.1, 0.6, 0.3, 1.0);
    expect(Rchart_add_band($gauge, 0.0, 60.0, 0.0, 0.0, 0.0, 0.0))->toBe(0)
        ->and(Rchart_get_band_count($gauge))->toBe(1)
        ->and(Rchart_get_value($gauge))->toBe(72.0);
    Rchart_get_range($gauge, $lo, $hi);
    expect([$lo, $hi])->toBe([0.0, 100.0]);

    $heat = Rchart_create(R_CHART_HEATMAP);
    Rchart_set_grid($heat, 2, 3, [1.0, 2.0, 3.0, 4.0, 5.0, 6.0]);
    Rchart_set_row_labels($heat, 'Mon|Tue');
    Rchart_set_column_labels($heat, 'A|B|C');
    Rchart_set_cell($heat, 0, 1, 9.0);
    Rchart_set_color_scale($heat, 0.0, 0.0, 0.2, 1.0, 1.0, 0.4, 0.0, 1.0);
    $cells = [];
    Rchart_set_cell_clicked_callback($heat, function (int $id, int $row, int $column, float $value, mixed $ud) use (&$cells): void {
        $cells[] = [$id, $row, $column, $value, $ud];
    }, 'heat');
    expect(Rchart_get_row_count($heat))->toBe(2)
        ->and(Rchart_get_column_count($heat))->toBe(3)
        ->and(Rchart_get_cell($heat, 0, 1))->toBe(9.0)
        ->and(Rchart_get_row_label($heat, 0))->toBe('Mon')
        ->and(Rchart_get_column_label($heat, 2))->toBe('C')
        ->and($cells)->toBe([]);

    $spark = Rchart_create(R_CHART_SPARKLINE);
    Rchart_set_values($spark, [3.0, 5.0, 4.0, 8.0], 4);
    Rchart_push_value($spark, 9.0, 5);
    Rchart_set_fill($spark, R_TRUE);
    Rchart_set_marker($spark, R_TRUE);
    expect(Rchart_get_value_count($spark))->toBe(5)
        ->and(Rchart_get_value_at($spark, 4))->toBe(9.0);
    Rchart_clear($spark);
    expect(Rchart_get_value_count($spark))->toBe(0);
});

it('colors table cells and selects more than one row', function (): void {
    $window = raven_window(400, 240);
    $table = Rwidget_create(R_WIDGET_TABLE);
    Rwindow_set_content($window, $table);
    Rtable_add_column($table, 'Name', 120.0);
    expect(Rtable_add_row($table, 'one'))->toBe(0)
        ->and(Rtable_add_row($table, 'two'))->toBe(1)
        ->and(Rtable_add_row($table, 'three'))->toBe(2);
    Rtable_set_cell_text_color($table, 0, 0, 1.0, 0.2, 0.1, 1.0);
    Rtable_set_multi_select($table, R_TRUE);
    Rtable_set_row_selected($table, 0, R_TRUE);
    Rtable_set_row_selected($table, 2, R_TRUE);
    raven_frames();
    expect(Rtable_is_row_selected($table, 0))->toBe(R_TRUE)
        ->and(Rtable_is_row_selected($table, 1))->toBe(R_FALSE)
        ->and(Rtable_get_selection_count($table))->toBe(2)
        ->and(Rtable_get_selection($table, 0))->toBe(0)
        ->and(Rtable_get_selection($table, 1))->toBe(2);
    Rtable_clear_selection($table);
    expect(Rtable_get_selection_count($table))->toBe(0);
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
