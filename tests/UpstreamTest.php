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
    Rhost_set_system_dark(R_TRUE);
    Rhost_window_set_insets($window, new RInsets(top: 12.0, bottom: 8.0), 0);
});

it('pages a carousel of labels', function (): void {
    $window = raven_window(400, 240);
    $xml = '<Carousel Name="c"><Label Name="p0" Text="Zero"/><Label Name="p1" Text="One"/><Label Name="p2" Text="Two"/></Carousel>';
    $carousel = Rwidget_create_from_xml($xml, strlen($xml));
    Rwindow_set_content($window, $carousel);
    raven_frames();
    expect(Rwidget_get_type($carousel))->toBe(R_WIDGET_CAROUSEL)
        ->and(Rcarousel_get_page_count($carousel))->toBe(3)
        ->and(Rcarousel_get_page($carousel))->toBe(0)
        ->and(Rcarousel_get_loop($carousel))->toBe(R_FALSE)
        ->and(Rcarousel_get_indicators_visible($carousel))->toBe(R_TRUE)
        ->and(Rcarousel_get_arrows_visible($carousel))->toBe(R_TRUE)
        ->and(Rcarousel_get_orientation($carousel))->toBe(R_HORIZONTAL)
        ->and(Rcarousel_get_autoplay($carousel))->toBe(0.0);
    Rcarousel_set_loop($carousel, R_TRUE);
    Rcarousel_set_indicators_visible($carousel, R_FALSE);
    Rcarousel_set_arrows_visible($carousel, R_FALSE);
    Rcarousel_set_page($carousel, 1, R_FALSE);
    raven_frames();
    expect(Rcarousel_get_loop($carousel))->toBe(R_TRUE)
        ->and(Rcarousel_get_indicators_visible($carousel))->toBe(R_FALSE)
        ->and(Rcarousel_get_arrows_visible($carousel))->toBe(R_FALSE)
        ->and(Rcarousel_get_page($carousel))->toBe(1);
    Rcarousel_next($carousel);
    expect(Rcarousel_get_page($carousel))->toBe(2);
    Rcarousel_prev($carousel);
    expect(Rcarousel_get_page($carousel))->toBe(1);
});

it('centers a map view and pins a marker', function (): void {
    $window = raven_window(400, 300);
    $map = Rmap_view_create();
    Rwindow_set_content($window, $map);
    raven_frames();
    expect(Rwidget_get_type($map))->toBe(R_WIDGET_MAP_VIEW)
        ->and(Rmap_view_get_tile_size($map))->toBe(256);
    Rmap_view_set_center($map, 48.8566, 2.3522);
    Rmap_view_get_center($map, $lat, $lon);
    expect($lat)->toEqualWithDelta(48.8566, 1e-9)
        ->and($lon)->toEqualWithDelta(2.3522, 1e-9);
    Rmap_view_set_zoom($map, 10.0);
    expect(Rmap_view_get_zoom($map))->toBe(10.0);
    Rmap_view_set_attribution($map, '(c) OpenStreetMap');
    expect(Rmap_view_get_attribution($map))->toBe('(c) OpenStreetMap');
    $marker = Rmap_view_add_marker($map, 48.8566, 2.3522, 'Paris');
    expect($marker)->toBeGreaterThan(0)
        ->and(Rmap_view_get_marker_count($map))->toBe(1);
    Rmap_view_set_marker_label($map, $marker, 'Louvre');
    Rmap_view_clear_markers($map);
    expect(Rmap_view_get_marker_count($map))->toBe(0);
});

it('cuts a tile view into foldable sections', function (): void {
    $window = raven_window(400, 600);
    $tiles = Rwidget_create(R_WIDGET_TILE_VIEW);
    Rwindow_set_content($window, $tiles);
    $labels = ['a', 'b', 'c', 'd', 'e', 'f', 'g'];
    Rtile_view_set_items($tiles, 7, function (int $id, int $index, RTileItem $item, mixed $ud) use ($labels): void {
        $item->text = $labels[$index];
    }, null);
    Rtile_view_set_icon_width($tiles, 40.0);
    Rtile_view_set_sections($tiles, 2, function (int $id, int $section, RTileSection $out, mixed $ud): void {
        $out->first = $section === 0 ? 2 : 5;
        $out->text = $section === 0 ? 'a' : 'b';
        $out->detail = '(n)';
    }, null);
    raven_frames();
    expect(Rtile_view_get_section_count($tiles))->toBe(2)
        ->and(Rtile_view_get_section_of($tiles, 1))->toBe(-1)
        ->and(Rtile_view_get_section_of($tiles, 2))->toBe(0)
        ->and(Rtile_view_get_section_of($tiles, 6))->toBe(1)
        ->and(Rtile_view_is_section_folded($tiles, 0))->toBe(R_FALSE);
    Rtile_view_set_section_folded($tiles, 0, R_TRUE);
    expect(Rtile_view_is_section_folded($tiles, 0))->toBe(R_TRUE);
});

it('injects app lifecycle events and a window back', function (): void {
    $window = raven_window();
    $events = [];
    Rset_app_event_callback(function (int $event, mixed $ud) use (&$events): void {
        $events[] = $event;
    }, null);
    expect(Ris_app_paused())->toBe(R_FALSE);
    Rinject_app_event(R_APP_DID_PAUSE);
    expect(Ris_app_paused())->toBe(R_TRUE);
    Rinject_app_event(R_APP_WILL_RESUME);
    expect(Ris_app_paused())->toBe(R_FALSE)
        ->and($events)->toBe([R_APP_DID_PAUSE, R_APP_WILL_RESUME]);
    Rset_app_event_callback(null, null);

    $backs = [];
    expect(Rwindow_wants_back($window))->toBe(R_FALSE)
        ->and(Rwindow_inject_back($window))->toBe(R_FALSE);
    Rwindow_set_back_callback($window, function (int $id, mixed $ud) use (&$backs): int {
        $backs[] = $id;

        return R_TRUE;
    }, null);
    expect(Rwindow_inject_back($window))->toBe(R_TRUE)->and($backs)->toBe([$window]);
    Rwindow_set_back_enabled($window, R_TRUE);
    expect(Rwindow_wants_back($window))->toBe(R_TRUE);
    Rwindow_set_back_enabled($window, R_FALSE);
    expect(Rwindow_wants_back($window))->toBe(R_FALSE);
});

it('encodes RGBA pixels as PNG in memory and on disk', function (): void {
    $rgba = str_repeat("\xff\x00\x00\xff", 4);
    $png = Rimage_encode_png($rgba, 2, 2, $size);
    expect($png)->toBeString()
        ->and(str_starts_with($png, "\x89PNG\r\n\x1a\n"))->toBeTrue()
        ->and($size)->toBe(strlen($png));
    $pixels = Rimage_decode($png, strlen($png), $w, $h);
    expect([$w, $h])->toBe([2, 2])->and(strlen($pixels))->toBe(16);

    $path = tempnam(sys_get_temp_dir(), 'raven-png-');
    expect(Rimage_save_png($path, $rgba, 2, 2))->toBe(R_TRUE)
        ->and(is_file($path))->toBeTrue()
        ->and(str_starts_with((string) file_get_contents($path), "\x89PNG\r\n\x1a\n"))->toBeTrue();
    unlink($path);
});

it('injects IME composition into a focused text input', function (): void {
    $window = raven_window();
    $input = Rwidget_create(R_WIDGET_TEXT_INPUT);
    Rwindow_set_content($window, $input);
    raven_frames();
    Rwidget_focus($input);
    Rwindow_inject_composition($window, 'ni', 2, 2);
    $text = Rwindow_get_text_composition($window, $start, $end);
    expect($text)->toBe('ni')->and([$start, $end])->toBe([2, 2])
        ->and(Rtext_input_get_text($input))->toBe('');
    Rhost_inject_composition($window, 'n', 1, 1);
    expect(Rwindow_get_text_composition($window, $start, $end))->toBe('ni');
    Rwindow_inject_composition($window, 'n', 1, 1);
    expect(Rwindow_get_text_composition($window, $start, $end))->toBe('n');
    Rwindow_inject_text($window, '你');
    expect(Rtext_input_get_text($input))->toBe('你')
        ->and(Rwindow_get_text_composition($window, $start, $end))->toBeNull();
});

it('drives a layout with Rtest find, click, type and golden pixel compare', function (): void {
    $window = raven_window(400, 240);
    $xml = '<VBox Name="root" Padding="12" Spacing="8"><Button Name="ok" Text="OK"/><Checkbox Name="on" Text="On"/><TextInput Name="user"/></VBox>';
    Rwindow_set_content($window, Rwidget_create_from_xml($xml, strlen($xml)));
    Rtest_set_deterministic(R_TRUE);
    expect(Rtest_is_deterministic())->toBe(R_TRUE)
        ->and(Rtest_get_platform_tag())->toBe('null');
    expect(Rtest_pump(2))->toBe(R_TRUE);

    $ok = Rtest_find($window, 'ok');
    $on = Rtest_find($window, 'on');
    $user = Rtest_find($window, 'user');
    expect($ok)->not->toBe(R_INVALID_ID)
        ->and(Rtest_get_text($ok))->toBe('OK')
        ->and(Rtest_is_shown($ok))->toBe(R_TRUE)
        ->and(Rtest_is_checked($on))->toBe(R_FALSE);

    $clicks = [];
    Rbutton_set_clicked_callback($ok, function (int $id, mixed $ud) use (&$clicks): void {
        $clicks[] = [$id, $ud];
    }, 'ok');
    expect(Rtest_click($ok))->toBe(R_TRUE)->and($clicks)->toBe([[$ok, 'ok']]);
    expect(Rtest_hover($ok))->toBe(R_TRUE);
    expect(Rtest_click($on))->toBe(R_TRUE)->and(Rtest_is_checked($on))->toBe(R_TRUE);
    expect(Rtest_type_text($user, 'ada'))->toBe(R_TRUE)->and(Rtest_get_text($user))->toBe('ada');
    expect(Rtest_key($user, R_KEY_BACKSPACE, 0))->toBe(R_TRUE);
    expect(Rtest_get_text($user))->toBe('ad');
    expect(Rtest_settle(1.0))->toBe(R_TRUE);

    $same = str_repeat("\x10\x20\x30\xff", 4);
    $other = str_repeat("\xff\x00\x00\xff", 4);
    $diff = null;
    expect(Rtest_compare_pixels($same, $same, 2, 2, 0, $max, $diff))->toBe(0)
        ->and($max)->toBe(0)
        ->and(strlen($diff))->toBe(16);
    expect(Rtest_compare_pixels($same, $other, 2, 2, 0, $max, $diff))->toBe(4)
        ->and($max)->toBeGreaterThan(0)
        ->and(ord($diff[0]))->toBe(255);

    $result = new RGoldenResult();
    $missing = sys_get_temp_dir().'/raven-golden-missing-'.getmypid().'.png';
    $actual = preg_replace('/\.png$/', '.actual.png', $missing);
    expect(Rtest_expect_golden($window, $missing, null, $result))->toBe(R_FALSE)
        ->and($result->status)->toBe(R_GOLDEN_MISSING);
    if (is_file($actual)) {
        unlink($actual);
    }
    Rtest_set_deterministic(R_FALSE);
});
