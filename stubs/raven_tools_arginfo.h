/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 73322faa30f3655657ee650123b9abbc6b736904 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_set_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_get_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, r, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, g, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, b, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, a, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_set_hsv, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, saturation, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_get_hsv, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, hue, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, saturation, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, value, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_set_hex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_get_hex, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_set_alpha_enabled, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcolor_picker_set_previous_color arginfo_Rcolor_picker_set_color

#define arginfo_Rcolor_picker_add_swatch arginfo_Rcolor_picker_set_color

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_clear_swatches, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_get_swatch_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_set_popup, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_set_compact, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, compact, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_picker_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_rgb_to_hsv, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, hue, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, saturation, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, value, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcolor_hsv_to_rgb, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, hue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, saturation, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, r, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, g, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, b, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_create arginfo_Rcolor_picker_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_duration, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_get_duration, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_set_time arginfo_Rtimeline_set_duration

#define arginfo_Rtimeline_get_time arginfo_Rtimeline_get_duration

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_frame_rate, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frames_per_second, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_get_frame_rate arginfo_Rtimeline_get_duration

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_snapping, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_view, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_get_view, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, start, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, end, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_playing, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, playing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_is_playing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_loop, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loop, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_header_width, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_get_header_width arginfo_Rtimeline_get_duration

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_ruler_height, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_get_ruler_height arginfo_Rtimeline_get_duration

#define arginfo_Rtimeline_set_default_track_height arginfo_Rtimeline_set_ruler_height

#define arginfo_Rtimeline_get_default_track_height arginfo_Rtimeline_get_duration

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_add_track, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_remove_track, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_get_track_count arginfo_Rtimeline_is_playing

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_get_track, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_track_name, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_get_track_name, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_track_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_track_height, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_track_locked, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locked, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_track_muted, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, muted, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_track_style, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, property, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_is_track_muted, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_add_clip, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_add_key, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_add_marker, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_remove_item, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_clear, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_get_item_type, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_get_item_track arginfo_Rtimeline_get_item_type

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_get_item_start, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_get_item_length arginfo_Rtimeline_get_item_start

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_item, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, track, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_item_label, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_get_item_label, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_item_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_item_style, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, property, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_preset, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preset, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_get_preset arginfo_Rtimeline_is_playing

#define arginfo_Rtimeline_get_item_count arginfo_Rtimeline_is_playing

#define arginfo_Rtimeline_get_item arginfo_Rtimeline_get_track

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_select, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, add, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_clear_selection arginfo_Rtimeline_clear

#define arginfo_Rtimeline_is_selected arginfo_Rtimeline_get_item_type

#define arginfo_Rtimeline_get_selection_count arginfo_Rtimeline_is_playing

#define arginfo_Rtimeline_get_selected arginfo_Rtimeline_get_track

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimeline_set_time_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeline, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtimeline_set_changed_callback arginfo_Rtimeline_set_time_callback

#define arginfo_Rtimeline_set_selection_callback arginfo_Rtimeline_set_time_callback

#define arginfo_Rtimeline_set_activated_callback arginfo_Rtimeline_set_time_callback

#define arginfo_Rtimeline_set_removed_callback arginfo_Rtimeline_set_time_callback

#define arginfo_Rnode_graph_create arginfo_Rcolor_picker_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_add_node, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_remove_node, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_clear, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_node_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_node, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_title, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_node_title, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_node_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_node_size, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_style, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, property, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_content, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_node_content, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_name, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_get_node_name arginfo_Rnode_graph_get_node_title

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_find_node, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_user_data, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_node_user_data, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_add_input, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_add_output arginfo_Rnode_graph_add_input

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_remove_pin, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_pin_node, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pin, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_is_pin_output arginfo_Rnode_graph_get_pin_node

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_pin_label, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pin, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_get_pin_type arginfo_Rnode_graph_get_pin_label

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_pin_name, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pin, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_find_pin, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_pin_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pin, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_input, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_get_output arginfo_Rnode_graph_get_input

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_type_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_type_style, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, property, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_pin_style, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pin, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, property, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_connect, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, output_pin, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, input_pin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_disconnect, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, link, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_get_link_count arginfo_Rnode_graph_get_node_count

#define arginfo_Rnode_graph_get_link arginfo_Rnode_graph_get_node

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_link_output, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, link, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_get_link_input arginfo_Rnode_graph_get_link_output

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_input_link, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, input_pin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_view, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, center_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, center_y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, zoom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_get_view, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, center_x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, center_y, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, zoom, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_to_canvas, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, canvas_x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, canvas_y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_from_canvas, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canvas_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, canvas_y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_frame_all arginfo_Rnode_graph_clear

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_grid_visible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_set_flow_visible arginfo_Rnode_graph_set_grid_visible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_read_only, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, read_only, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_preset, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preset, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_get_preset arginfo_Rnode_graph_get_node_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_select_node, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, add, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_clear_selection arginfo_Rnode_graph_clear

#define arginfo_Rnode_graph_is_node_selected arginfo_Rnode_graph_get_node_content

#define arginfo_Rnode_graph_get_selection_count arginfo_Rnode_graph_get_node_count

#define arginfo_Rnode_graph_get_selected_node arginfo_Rnode_graph_get_node

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_connect_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_set_linked_callback arginfo_Rnode_graph_set_connect_callback

#define arginfo_Rnode_graph_set_unlinked_callback arginfo_Rnode_graph_set_connect_callback

#define arginfo_Rnode_graph_set_moved_callback arginfo_Rnode_graph_set_connect_callback

#define arginfo_Rnode_graph_set_selection_callback arginfo_Rnode_graph_set_connect_callback

#define arginfo_Rnode_graph_set_removed_callback arginfo_Rnode_graph_set_connect_callback

#define arginfo_Rnode_graph_set_activated_callback arginfo_Rnode_graph_set_connect_callback

#define arginfo_Rnode_graph_set_context_callback arginfo_Rnode_graph_set_connect_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_pin_multiple, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pin, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiple, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_active, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, active, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnode_graph_set_node_active_color arginfo_Rnode_graph_set_node_color

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_deletable, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deletable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnode_graph_set_node_badge, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, graph, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rblock_editor_create arginfo_Rcolor_picker_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_add_kind, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, shape, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, category, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_category_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, category, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_palette_visible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_add_block, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_remove_block, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_clear, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_attach, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, place, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_detach, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_script_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_script, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_kind, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_next, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rblock_editor_get_mouth_count arginfo_Rblock_editor_get_next

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_body, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mouth, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rblock_editor_get_slot_count arginfo_Rblock_editor_get_next

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_input, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slot, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_value, 0, 3, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slot, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_value, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_parent, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, place, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, index, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_block_glow, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_save, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_load, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rblock_editor_set_clicked_callback arginfo_Rblock_editor_set_changed_callback

#define arginfo_Rblock_editor_set_context_callback arginfo_Rblock_editor_set_changed_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_slot_options, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, slot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_kind_visible, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_kind_label, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_block_deletable, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deletable, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rblock_editor_get_selection_count arginfo_Rblock_editor_get_script_count

#define arginfo_Rblock_editor_get_selected arginfo_Rblock_editor_get_script

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_select, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, add, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_get_view, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, zoom, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rblock_editor_set_view, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, zoom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rcolor_picker_create);
ZEND_FUNCTION(Rcolor_picker_set_color);
ZEND_FUNCTION(Rcolor_picker_get_color);
ZEND_FUNCTION(Rcolor_picker_set_hsv);
ZEND_FUNCTION(Rcolor_picker_get_hsv);
ZEND_FUNCTION(Rcolor_picker_set_hex);
ZEND_FUNCTION(Rcolor_picker_get_hex);
ZEND_FUNCTION(Rcolor_picker_set_alpha_enabled);
ZEND_FUNCTION(Rcolor_picker_set_previous_color);
ZEND_FUNCTION(Rcolor_picker_add_swatch);
ZEND_FUNCTION(Rcolor_picker_clear_swatches);
ZEND_FUNCTION(Rcolor_picker_get_swatch_count);
ZEND_FUNCTION(Rcolor_picker_set_popup);
ZEND_FUNCTION(Rcolor_picker_set_compact);
ZEND_FUNCTION(Rcolor_picker_set_changed_callback);
ZEND_FUNCTION(Rcolor_rgb_to_hsv);
ZEND_FUNCTION(Rcolor_hsv_to_rgb);
ZEND_FUNCTION(Rtimeline_create);
ZEND_FUNCTION(Rtimeline_set_duration);
ZEND_FUNCTION(Rtimeline_get_duration);
ZEND_FUNCTION(Rtimeline_set_time);
ZEND_FUNCTION(Rtimeline_get_time);
ZEND_FUNCTION(Rtimeline_set_frame_rate);
ZEND_FUNCTION(Rtimeline_get_frame_rate);
ZEND_FUNCTION(Rtimeline_set_snapping);
ZEND_FUNCTION(Rtimeline_set_view);
ZEND_FUNCTION(Rtimeline_get_view);
ZEND_FUNCTION(Rtimeline_set_playing);
ZEND_FUNCTION(Rtimeline_is_playing);
ZEND_FUNCTION(Rtimeline_set_loop);
ZEND_FUNCTION(Rtimeline_set_header_width);
ZEND_FUNCTION(Rtimeline_get_header_width);
ZEND_FUNCTION(Rtimeline_set_ruler_height);
ZEND_FUNCTION(Rtimeline_get_ruler_height);
ZEND_FUNCTION(Rtimeline_set_default_track_height);
ZEND_FUNCTION(Rtimeline_get_default_track_height);
ZEND_FUNCTION(Rtimeline_add_track);
ZEND_FUNCTION(Rtimeline_remove_track);
ZEND_FUNCTION(Rtimeline_get_track_count);
ZEND_FUNCTION(Rtimeline_get_track);
ZEND_FUNCTION(Rtimeline_set_track_name);
ZEND_FUNCTION(Rtimeline_get_track_name);
ZEND_FUNCTION(Rtimeline_set_track_color);
ZEND_FUNCTION(Rtimeline_set_track_height);
ZEND_FUNCTION(Rtimeline_set_track_locked);
ZEND_FUNCTION(Rtimeline_set_track_muted);
ZEND_FUNCTION(Rtimeline_set_track_style);
ZEND_FUNCTION(Rtimeline_is_track_muted);
ZEND_FUNCTION(Rtimeline_add_clip);
ZEND_FUNCTION(Rtimeline_add_key);
ZEND_FUNCTION(Rtimeline_add_marker);
ZEND_FUNCTION(Rtimeline_remove_item);
ZEND_FUNCTION(Rtimeline_clear);
ZEND_FUNCTION(Rtimeline_get_item_type);
ZEND_FUNCTION(Rtimeline_get_item_track);
ZEND_FUNCTION(Rtimeline_get_item_start);
ZEND_FUNCTION(Rtimeline_get_item_length);
ZEND_FUNCTION(Rtimeline_set_item);
ZEND_FUNCTION(Rtimeline_set_item_label);
ZEND_FUNCTION(Rtimeline_get_item_label);
ZEND_FUNCTION(Rtimeline_set_item_color);
ZEND_FUNCTION(Rtimeline_set_item_style);
ZEND_FUNCTION(Rtimeline_set_preset);
ZEND_FUNCTION(Rtimeline_get_preset);
ZEND_FUNCTION(Rtimeline_get_item_count);
ZEND_FUNCTION(Rtimeline_get_item);
ZEND_FUNCTION(Rtimeline_select);
ZEND_FUNCTION(Rtimeline_clear_selection);
ZEND_FUNCTION(Rtimeline_is_selected);
ZEND_FUNCTION(Rtimeline_get_selection_count);
ZEND_FUNCTION(Rtimeline_get_selected);
ZEND_FUNCTION(Rtimeline_set_time_callback);
ZEND_FUNCTION(Rtimeline_set_changed_callback);
ZEND_FUNCTION(Rtimeline_set_selection_callback);
ZEND_FUNCTION(Rtimeline_set_activated_callback);
ZEND_FUNCTION(Rtimeline_set_removed_callback);
ZEND_FUNCTION(Rnode_graph_create);
ZEND_FUNCTION(Rnode_graph_add_node);
ZEND_FUNCTION(Rnode_graph_remove_node);
ZEND_FUNCTION(Rnode_graph_clear);
ZEND_FUNCTION(Rnode_graph_get_node_count);
ZEND_FUNCTION(Rnode_graph_get_node);
ZEND_FUNCTION(Rnode_graph_set_node_title);
ZEND_FUNCTION(Rnode_graph_get_node_title);
ZEND_FUNCTION(Rnode_graph_set_node_position);
ZEND_FUNCTION(Rnode_graph_get_node_position);
ZEND_FUNCTION(Rnode_graph_get_node_size);
ZEND_FUNCTION(Rnode_graph_set_node_color);
ZEND_FUNCTION(Rnode_graph_set_node_style);
ZEND_FUNCTION(Rnode_graph_set_node_content);
ZEND_FUNCTION(Rnode_graph_get_node_content);
ZEND_FUNCTION(Rnode_graph_set_node_name);
ZEND_FUNCTION(Rnode_graph_get_node_name);
ZEND_FUNCTION(Rnode_graph_find_node);
ZEND_FUNCTION(Rnode_graph_set_node_user_data);
ZEND_FUNCTION(Rnode_graph_get_node_user_data);
ZEND_FUNCTION(Rnode_graph_add_input);
ZEND_FUNCTION(Rnode_graph_add_output);
ZEND_FUNCTION(Rnode_graph_remove_pin);
ZEND_FUNCTION(Rnode_graph_get_pin_node);
ZEND_FUNCTION(Rnode_graph_is_pin_output);
ZEND_FUNCTION(Rnode_graph_get_pin_label);
ZEND_FUNCTION(Rnode_graph_get_pin_type);
ZEND_FUNCTION(Rnode_graph_set_pin_name);
ZEND_FUNCTION(Rnode_graph_find_pin);
ZEND_FUNCTION(Rnode_graph_get_pin_position);
ZEND_FUNCTION(Rnode_graph_get_input);
ZEND_FUNCTION(Rnode_graph_get_output);
ZEND_FUNCTION(Rnode_graph_set_type_color);
ZEND_FUNCTION(Rnode_graph_set_type_style);
ZEND_FUNCTION(Rnode_graph_set_pin_style);
ZEND_FUNCTION(Rnode_graph_connect);
ZEND_FUNCTION(Rnode_graph_disconnect);
ZEND_FUNCTION(Rnode_graph_get_link_count);
ZEND_FUNCTION(Rnode_graph_get_link);
ZEND_FUNCTION(Rnode_graph_get_link_output);
ZEND_FUNCTION(Rnode_graph_get_link_input);
ZEND_FUNCTION(Rnode_graph_get_input_link);
ZEND_FUNCTION(Rnode_graph_set_view);
ZEND_FUNCTION(Rnode_graph_get_view);
ZEND_FUNCTION(Rnode_graph_to_canvas);
ZEND_FUNCTION(Rnode_graph_from_canvas);
ZEND_FUNCTION(Rnode_graph_frame_all);
ZEND_FUNCTION(Rnode_graph_set_grid_visible);
ZEND_FUNCTION(Rnode_graph_set_flow_visible);
ZEND_FUNCTION(Rnode_graph_set_read_only);
ZEND_FUNCTION(Rnode_graph_set_preset);
ZEND_FUNCTION(Rnode_graph_get_preset);
ZEND_FUNCTION(Rnode_graph_select_node);
ZEND_FUNCTION(Rnode_graph_clear_selection);
ZEND_FUNCTION(Rnode_graph_is_node_selected);
ZEND_FUNCTION(Rnode_graph_get_selection_count);
ZEND_FUNCTION(Rnode_graph_get_selected_node);
ZEND_FUNCTION(Rnode_graph_set_connect_callback);
ZEND_FUNCTION(Rnode_graph_set_linked_callback);
ZEND_FUNCTION(Rnode_graph_set_unlinked_callback);
ZEND_FUNCTION(Rnode_graph_set_moved_callback);
ZEND_FUNCTION(Rnode_graph_set_selection_callback);
ZEND_FUNCTION(Rnode_graph_set_removed_callback);
ZEND_FUNCTION(Rnode_graph_set_activated_callback);
ZEND_FUNCTION(Rnode_graph_set_context_callback);
ZEND_FUNCTION(Rnode_graph_set_pin_multiple);
ZEND_FUNCTION(Rnode_graph_set_node_active);
ZEND_FUNCTION(Rnode_graph_set_node_active_color);
ZEND_FUNCTION(Rnode_graph_set_node_deletable);
ZEND_FUNCTION(Rnode_graph_set_node_badge);
ZEND_FUNCTION(Rblock_editor_create);
ZEND_FUNCTION(Rblock_editor_add_kind);
ZEND_FUNCTION(Rblock_editor_set_category_color);
ZEND_FUNCTION(Rblock_editor_set_palette_visible);
ZEND_FUNCTION(Rblock_editor_add_block);
ZEND_FUNCTION(Rblock_editor_remove_block);
ZEND_FUNCTION(Rblock_editor_clear);
ZEND_FUNCTION(Rblock_editor_attach);
ZEND_FUNCTION(Rblock_editor_detach);
ZEND_FUNCTION(Rblock_editor_get_script_count);
ZEND_FUNCTION(Rblock_editor_get_script);
ZEND_FUNCTION(Rblock_editor_get_kind);
ZEND_FUNCTION(Rblock_editor_get_next);
ZEND_FUNCTION(Rblock_editor_get_mouth_count);
ZEND_FUNCTION(Rblock_editor_get_body);
ZEND_FUNCTION(Rblock_editor_get_slot_count);
ZEND_FUNCTION(Rblock_editor_get_input);
ZEND_FUNCTION(Rblock_editor_get_value);
ZEND_FUNCTION(Rblock_editor_set_value);
ZEND_FUNCTION(Rblock_editor_get_parent);
ZEND_FUNCTION(Rblock_editor_get_position);
ZEND_FUNCTION(Rblock_editor_set_block_glow);
ZEND_FUNCTION(Rblock_editor_save);
ZEND_FUNCTION(Rblock_editor_load);
ZEND_FUNCTION(Rblock_editor_set_changed_callback);
ZEND_FUNCTION(Rblock_editor_set_clicked_callback);
ZEND_FUNCTION(Rblock_editor_set_context_callback);
ZEND_FUNCTION(Rblock_editor_set_slot_options);
ZEND_FUNCTION(Rblock_editor_set_kind_visible);
ZEND_FUNCTION(Rblock_editor_set_kind_label);
ZEND_FUNCTION(Rblock_editor_set_block_deletable);
ZEND_FUNCTION(Rblock_editor_get_selection_count);
ZEND_FUNCTION(Rblock_editor_get_selected);
ZEND_FUNCTION(Rblock_editor_select);
ZEND_FUNCTION(Rblock_editor_get_view);
ZEND_FUNCTION(Rblock_editor_set_view);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rcolor_picker_create, arginfo_Rcolor_picker_create)
	ZEND_FE(Rcolor_picker_set_color, arginfo_Rcolor_picker_set_color)
	ZEND_FE(Rcolor_picker_get_color, arginfo_Rcolor_picker_get_color)
	ZEND_FE(Rcolor_picker_set_hsv, arginfo_Rcolor_picker_set_hsv)
	ZEND_FE(Rcolor_picker_get_hsv, arginfo_Rcolor_picker_get_hsv)
	ZEND_FE(Rcolor_picker_set_hex, arginfo_Rcolor_picker_set_hex)
	ZEND_FE(Rcolor_picker_get_hex, arginfo_Rcolor_picker_get_hex)
	ZEND_FE(Rcolor_picker_set_alpha_enabled, arginfo_Rcolor_picker_set_alpha_enabled)
	ZEND_FE(Rcolor_picker_set_previous_color, arginfo_Rcolor_picker_set_previous_color)
	ZEND_FE(Rcolor_picker_add_swatch, arginfo_Rcolor_picker_add_swatch)
	ZEND_FE(Rcolor_picker_clear_swatches, arginfo_Rcolor_picker_clear_swatches)
	ZEND_FE(Rcolor_picker_get_swatch_count, arginfo_Rcolor_picker_get_swatch_count)
	ZEND_FE(Rcolor_picker_set_popup, arginfo_Rcolor_picker_set_popup)
	ZEND_FE(Rcolor_picker_set_compact, arginfo_Rcolor_picker_set_compact)
	ZEND_FE(Rcolor_picker_set_changed_callback, arginfo_Rcolor_picker_set_changed_callback)
	ZEND_FE(Rcolor_rgb_to_hsv, arginfo_Rcolor_rgb_to_hsv)
	ZEND_FE(Rcolor_hsv_to_rgb, arginfo_Rcolor_hsv_to_rgb)
	ZEND_FE(Rtimeline_create, arginfo_Rtimeline_create)
	ZEND_FE(Rtimeline_set_duration, arginfo_Rtimeline_set_duration)
	ZEND_FE(Rtimeline_get_duration, arginfo_Rtimeline_get_duration)
	ZEND_FE(Rtimeline_set_time, arginfo_Rtimeline_set_time)
	ZEND_FE(Rtimeline_get_time, arginfo_Rtimeline_get_time)
	ZEND_FE(Rtimeline_set_frame_rate, arginfo_Rtimeline_set_frame_rate)
	ZEND_FE(Rtimeline_get_frame_rate, arginfo_Rtimeline_get_frame_rate)
	ZEND_FE(Rtimeline_set_snapping, arginfo_Rtimeline_set_snapping)
	ZEND_FE(Rtimeline_set_view, arginfo_Rtimeline_set_view)
	ZEND_FE(Rtimeline_get_view, arginfo_Rtimeline_get_view)
	ZEND_FE(Rtimeline_set_playing, arginfo_Rtimeline_set_playing)
	ZEND_FE(Rtimeline_is_playing, arginfo_Rtimeline_is_playing)
	ZEND_FE(Rtimeline_set_loop, arginfo_Rtimeline_set_loop)
	ZEND_FE(Rtimeline_set_header_width, arginfo_Rtimeline_set_header_width)
	ZEND_FE(Rtimeline_get_header_width, arginfo_Rtimeline_get_header_width)
	ZEND_FE(Rtimeline_set_ruler_height, arginfo_Rtimeline_set_ruler_height)
	ZEND_FE(Rtimeline_get_ruler_height, arginfo_Rtimeline_get_ruler_height)
	ZEND_FE(Rtimeline_set_default_track_height, arginfo_Rtimeline_set_default_track_height)
	ZEND_FE(Rtimeline_get_default_track_height, arginfo_Rtimeline_get_default_track_height)
	ZEND_FE(Rtimeline_add_track, arginfo_Rtimeline_add_track)
	ZEND_FE(Rtimeline_remove_track, arginfo_Rtimeline_remove_track)
	ZEND_FE(Rtimeline_get_track_count, arginfo_Rtimeline_get_track_count)
	ZEND_FE(Rtimeline_get_track, arginfo_Rtimeline_get_track)
	ZEND_FE(Rtimeline_set_track_name, arginfo_Rtimeline_set_track_name)
	ZEND_FE(Rtimeline_get_track_name, arginfo_Rtimeline_get_track_name)
	ZEND_FE(Rtimeline_set_track_color, arginfo_Rtimeline_set_track_color)
	ZEND_FE(Rtimeline_set_track_height, arginfo_Rtimeline_set_track_height)
	ZEND_FE(Rtimeline_set_track_locked, arginfo_Rtimeline_set_track_locked)
	ZEND_FE(Rtimeline_set_track_muted, arginfo_Rtimeline_set_track_muted)
	ZEND_FE(Rtimeline_set_track_style, arginfo_Rtimeline_set_track_style)
	ZEND_FE(Rtimeline_is_track_muted, arginfo_Rtimeline_is_track_muted)
	ZEND_FE(Rtimeline_add_clip, arginfo_Rtimeline_add_clip)
	ZEND_FE(Rtimeline_add_key, arginfo_Rtimeline_add_key)
	ZEND_FE(Rtimeline_add_marker, arginfo_Rtimeline_add_marker)
	ZEND_FE(Rtimeline_remove_item, arginfo_Rtimeline_remove_item)
	ZEND_FE(Rtimeline_clear, arginfo_Rtimeline_clear)
	ZEND_FE(Rtimeline_get_item_type, arginfo_Rtimeline_get_item_type)
	ZEND_FE(Rtimeline_get_item_track, arginfo_Rtimeline_get_item_track)
	ZEND_FE(Rtimeline_get_item_start, arginfo_Rtimeline_get_item_start)
	ZEND_FE(Rtimeline_get_item_length, arginfo_Rtimeline_get_item_length)
	ZEND_FE(Rtimeline_set_item, arginfo_Rtimeline_set_item)
	ZEND_FE(Rtimeline_set_item_label, arginfo_Rtimeline_set_item_label)
	ZEND_FE(Rtimeline_get_item_label, arginfo_Rtimeline_get_item_label)
	ZEND_FE(Rtimeline_set_item_color, arginfo_Rtimeline_set_item_color)
	ZEND_FE(Rtimeline_set_item_style, arginfo_Rtimeline_set_item_style)
	ZEND_FE(Rtimeline_set_preset, arginfo_Rtimeline_set_preset)
	ZEND_FE(Rtimeline_get_preset, arginfo_Rtimeline_get_preset)
	ZEND_FE(Rtimeline_get_item_count, arginfo_Rtimeline_get_item_count)
	ZEND_FE(Rtimeline_get_item, arginfo_Rtimeline_get_item)
	ZEND_FE(Rtimeline_select, arginfo_Rtimeline_select)
	ZEND_FE(Rtimeline_clear_selection, arginfo_Rtimeline_clear_selection)
	ZEND_FE(Rtimeline_is_selected, arginfo_Rtimeline_is_selected)
	ZEND_FE(Rtimeline_get_selection_count, arginfo_Rtimeline_get_selection_count)
	ZEND_FE(Rtimeline_get_selected, arginfo_Rtimeline_get_selected)
	ZEND_FE(Rtimeline_set_time_callback, arginfo_Rtimeline_set_time_callback)
	ZEND_FE(Rtimeline_set_changed_callback, arginfo_Rtimeline_set_changed_callback)
	ZEND_FE(Rtimeline_set_selection_callback, arginfo_Rtimeline_set_selection_callback)
	ZEND_FE(Rtimeline_set_activated_callback, arginfo_Rtimeline_set_activated_callback)
	ZEND_FE(Rtimeline_set_removed_callback, arginfo_Rtimeline_set_removed_callback)
	ZEND_FE(Rnode_graph_create, arginfo_Rnode_graph_create)
	ZEND_FE(Rnode_graph_add_node, arginfo_Rnode_graph_add_node)
	ZEND_FE(Rnode_graph_remove_node, arginfo_Rnode_graph_remove_node)
	ZEND_FE(Rnode_graph_clear, arginfo_Rnode_graph_clear)
	ZEND_FE(Rnode_graph_get_node_count, arginfo_Rnode_graph_get_node_count)
	ZEND_FE(Rnode_graph_get_node, arginfo_Rnode_graph_get_node)
	ZEND_FE(Rnode_graph_set_node_title, arginfo_Rnode_graph_set_node_title)
	ZEND_FE(Rnode_graph_get_node_title, arginfo_Rnode_graph_get_node_title)
	ZEND_FE(Rnode_graph_set_node_position, arginfo_Rnode_graph_set_node_position)
	ZEND_FE(Rnode_graph_get_node_position, arginfo_Rnode_graph_get_node_position)
	ZEND_FE(Rnode_graph_get_node_size, arginfo_Rnode_graph_get_node_size)
	ZEND_FE(Rnode_graph_set_node_color, arginfo_Rnode_graph_set_node_color)
	ZEND_FE(Rnode_graph_set_node_style, arginfo_Rnode_graph_set_node_style)
	ZEND_FE(Rnode_graph_set_node_content, arginfo_Rnode_graph_set_node_content)
	ZEND_FE(Rnode_graph_get_node_content, arginfo_Rnode_graph_get_node_content)
	ZEND_FE(Rnode_graph_set_node_name, arginfo_Rnode_graph_set_node_name)
	ZEND_FE(Rnode_graph_get_node_name, arginfo_Rnode_graph_get_node_name)
	ZEND_FE(Rnode_graph_find_node, arginfo_Rnode_graph_find_node)
	ZEND_FE(Rnode_graph_set_node_user_data, arginfo_Rnode_graph_set_node_user_data)
	ZEND_FE(Rnode_graph_get_node_user_data, arginfo_Rnode_graph_get_node_user_data)
	ZEND_FE(Rnode_graph_add_input, arginfo_Rnode_graph_add_input)
	ZEND_FE(Rnode_graph_add_output, arginfo_Rnode_graph_add_output)
	ZEND_FE(Rnode_graph_remove_pin, arginfo_Rnode_graph_remove_pin)
	ZEND_FE(Rnode_graph_get_pin_node, arginfo_Rnode_graph_get_pin_node)
	ZEND_FE(Rnode_graph_is_pin_output, arginfo_Rnode_graph_is_pin_output)
	ZEND_FE(Rnode_graph_get_pin_label, arginfo_Rnode_graph_get_pin_label)
	ZEND_FE(Rnode_graph_get_pin_type, arginfo_Rnode_graph_get_pin_type)
	ZEND_FE(Rnode_graph_set_pin_name, arginfo_Rnode_graph_set_pin_name)
	ZEND_FE(Rnode_graph_find_pin, arginfo_Rnode_graph_find_pin)
	ZEND_FE(Rnode_graph_get_pin_position, arginfo_Rnode_graph_get_pin_position)
	ZEND_FE(Rnode_graph_get_input, arginfo_Rnode_graph_get_input)
	ZEND_FE(Rnode_graph_get_output, arginfo_Rnode_graph_get_output)
	ZEND_FE(Rnode_graph_set_type_color, arginfo_Rnode_graph_set_type_color)
	ZEND_FE(Rnode_graph_set_type_style, arginfo_Rnode_graph_set_type_style)
	ZEND_FE(Rnode_graph_set_pin_style, arginfo_Rnode_graph_set_pin_style)
	ZEND_FE(Rnode_graph_connect, arginfo_Rnode_graph_connect)
	ZEND_FE(Rnode_graph_disconnect, arginfo_Rnode_graph_disconnect)
	ZEND_FE(Rnode_graph_get_link_count, arginfo_Rnode_graph_get_link_count)
	ZEND_FE(Rnode_graph_get_link, arginfo_Rnode_graph_get_link)
	ZEND_FE(Rnode_graph_get_link_output, arginfo_Rnode_graph_get_link_output)
	ZEND_FE(Rnode_graph_get_link_input, arginfo_Rnode_graph_get_link_input)
	ZEND_FE(Rnode_graph_get_input_link, arginfo_Rnode_graph_get_input_link)
	ZEND_FE(Rnode_graph_set_view, arginfo_Rnode_graph_set_view)
	ZEND_FE(Rnode_graph_get_view, arginfo_Rnode_graph_get_view)
	ZEND_FE(Rnode_graph_to_canvas, arginfo_Rnode_graph_to_canvas)
	ZEND_FE(Rnode_graph_from_canvas, arginfo_Rnode_graph_from_canvas)
	ZEND_FE(Rnode_graph_frame_all, arginfo_Rnode_graph_frame_all)
	ZEND_FE(Rnode_graph_set_grid_visible, arginfo_Rnode_graph_set_grid_visible)
	ZEND_FE(Rnode_graph_set_flow_visible, arginfo_Rnode_graph_set_flow_visible)
	ZEND_FE(Rnode_graph_set_read_only, arginfo_Rnode_graph_set_read_only)
	ZEND_FE(Rnode_graph_set_preset, arginfo_Rnode_graph_set_preset)
	ZEND_FE(Rnode_graph_get_preset, arginfo_Rnode_graph_get_preset)
	ZEND_FE(Rnode_graph_select_node, arginfo_Rnode_graph_select_node)
	ZEND_FE(Rnode_graph_clear_selection, arginfo_Rnode_graph_clear_selection)
	ZEND_FE(Rnode_graph_is_node_selected, arginfo_Rnode_graph_is_node_selected)
	ZEND_FE(Rnode_graph_get_selection_count, arginfo_Rnode_graph_get_selection_count)
	ZEND_FE(Rnode_graph_get_selected_node, arginfo_Rnode_graph_get_selected_node)
	ZEND_FE(Rnode_graph_set_connect_callback, arginfo_Rnode_graph_set_connect_callback)
	ZEND_FE(Rnode_graph_set_linked_callback, arginfo_Rnode_graph_set_linked_callback)
	ZEND_FE(Rnode_graph_set_unlinked_callback, arginfo_Rnode_graph_set_unlinked_callback)
	ZEND_FE(Rnode_graph_set_moved_callback, arginfo_Rnode_graph_set_moved_callback)
	ZEND_FE(Rnode_graph_set_selection_callback, arginfo_Rnode_graph_set_selection_callback)
	ZEND_FE(Rnode_graph_set_removed_callback, arginfo_Rnode_graph_set_removed_callback)
	ZEND_FE(Rnode_graph_set_activated_callback, arginfo_Rnode_graph_set_activated_callback)
	ZEND_FE(Rnode_graph_set_context_callback, arginfo_Rnode_graph_set_context_callback)
	ZEND_FE(Rnode_graph_set_pin_multiple, arginfo_Rnode_graph_set_pin_multiple)
	ZEND_FE(Rnode_graph_set_node_active, arginfo_Rnode_graph_set_node_active)
	ZEND_FE(Rnode_graph_set_node_active_color, arginfo_Rnode_graph_set_node_active_color)
	ZEND_FE(Rnode_graph_set_node_deletable, arginfo_Rnode_graph_set_node_deletable)
	ZEND_FE(Rnode_graph_set_node_badge, arginfo_Rnode_graph_set_node_badge)
	ZEND_FE(Rblock_editor_create, arginfo_Rblock_editor_create)
	ZEND_FE(Rblock_editor_add_kind, arginfo_Rblock_editor_add_kind)
	ZEND_FE(Rblock_editor_set_category_color, arginfo_Rblock_editor_set_category_color)
	ZEND_FE(Rblock_editor_set_palette_visible, arginfo_Rblock_editor_set_palette_visible)
	ZEND_FE(Rblock_editor_add_block, arginfo_Rblock_editor_add_block)
	ZEND_FE(Rblock_editor_remove_block, arginfo_Rblock_editor_remove_block)
	ZEND_FE(Rblock_editor_clear, arginfo_Rblock_editor_clear)
	ZEND_FE(Rblock_editor_attach, arginfo_Rblock_editor_attach)
	ZEND_FE(Rblock_editor_detach, arginfo_Rblock_editor_detach)
	ZEND_FE(Rblock_editor_get_script_count, arginfo_Rblock_editor_get_script_count)
	ZEND_FE(Rblock_editor_get_script, arginfo_Rblock_editor_get_script)
	ZEND_FE(Rblock_editor_get_kind, arginfo_Rblock_editor_get_kind)
	ZEND_FE(Rblock_editor_get_next, arginfo_Rblock_editor_get_next)
	ZEND_FE(Rblock_editor_get_mouth_count, arginfo_Rblock_editor_get_mouth_count)
	ZEND_FE(Rblock_editor_get_body, arginfo_Rblock_editor_get_body)
	ZEND_FE(Rblock_editor_get_slot_count, arginfo_Rblock_editor_get_slot_count)
	ZEND_FE(Rblock_editor_get_input, arginfo_Rblock_editor_get_input)
	ZEND_FE(Rblock_editor_get_value, arginfo_Rblock_editor_get_value)
	ZEND_FE(Rblock_editor_set_value, arginfo_Rblock_editor_set_value)
	ZEND_FE(Rblock_editor_get_parent, arginfo_Rblock_editor_get_parent)
	ZEND_FE(Rblock_editor_get_position, arginfo_Rblock_editor_get_position)
	ZEND_FE(Rblock_editor_set_block_glow, arginfo_Rblock_editor_set_block_glow)
	ZEND_FE(Rblock_editor_save, arginfo_Rblock_editor_save)
	ZEND_FE(Rblock_editor_load, arginfo_Rblock_editor_load)
	ZEND_FE(Rblock_editor_set_changed_callback, arginfo_Rblock_editor_set_changed_callback)
	ZEND_FE(Rblock_editor_set_clicked_callback, arginfo_Rblock_editor_set_clicked_callback)
	ZEND_FE(Rblock_editor_set_context_callback, arginfo_Rblock_editor_set_context_callback)
	ZEND_FE(Rblock_editor_set_slot_options, arginfo_Rblock_editor_set_slot_options)
	ZEND_FE(Rblock_editor_set_kind_visible, arginfo_Rblock_editor_set_kind_visible)
	ZEND_FE(Rblock_editor_set_kind_label, arginfo_Rblock_editor_set_kind_label)
	ZEND_FE(Rblock_editor_set_block_deletable, arginfo_Rblock_editor_set_block_deletable)
	ZEND_FE(Rblock_editor_get_selection_count, arginfo_Rblock_editor_get_selection_count)
	ZEND_FE(Rblock_editor_get_selected, arginfo_Rblock_editor_get_selected)
	ZEND_FE(Rblock_editor_select, arginfo_Rblock_editor_select)
	ZEND_FE(Rblock_editor_get_view, arginfo_Rblock_editor_get_view)
	ZEND_FE(Rblock_editor_set_view, arginfo_Rblock_editor_set_view)
	ZEND_FE_END
};

static void register_raven_tools_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_PRESET_AUTO", R_PRESET_AUTO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRESET_MODERN", R_PRESET_MODERN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRESET_BLUEPRINT", R_PRESET_BLUEPRINT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRESET_BLENDER", R_PRESET_BLENDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRESET_NEON", R_PRESET_NEON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TIMELINE_NONE", R_TIMELINE_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TIMELINE_CLIP", R_TIMELINE_CLIP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TIMELINE_KEY", R_TIMELINE_KEY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TIMELINE_MARKER", R_TIMELINE_MARKER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_STATEMENT", R_BLOCK_STATEMENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_HAT", R_BLOCK_HAT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_CAP", R_BLOCK_CAP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_C", R_BLOCK_C, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_REPORTER", R_BLOCK_REPORTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_BOOLEAN", R_BLOCK_BOOLEAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_NEXT", R_BLOCK_NEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_BODY", R_BLOCK_BODY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BLOCK_INPUT", R_BLOCK_INPUT, CONST_PERSISTENT);
}
