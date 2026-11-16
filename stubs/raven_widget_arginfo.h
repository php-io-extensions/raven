/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 1ac6575d73c09eeef9f59d04ca8ebf8a54795605 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_destroy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_type arginfo_Rwidget_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_add_child, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_insert_child, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_remove_child, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_clear_children, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_parent arginfo_Rwidget_is_valid

#define arginfo_Rwidget_get_child_count arginfo_Rwidget_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_child, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_window arginfo_Rwidget_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_name, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_find, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scope, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_padding, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_halign, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, align, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rslot_set_valign arginfo_Rslot_set_halign

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_auto, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_fill, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, coefficient, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_max_size, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_grid, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_grid_span, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column_span, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row_span, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_anchors, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, min_y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max_y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_position, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_size, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rslot_set_alignment arginfo_Rslot_set_position

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslot_set_title, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_visibility, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visibility, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_visibility arginfo_Rwidget_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_enabled, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_is_enabled arginfo_Rwidget_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_hit_testable, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hit_testable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_opacity, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opacity, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_transition, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transition, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delay_seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_play_transition arginfo_Rwidget_set_transition

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_clipping, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_tooltip, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_tooltip arginfo_Rwidget_get_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_cursor, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_size, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_set_min_size arginfo_Rwidget_set_size

#define arginfo_Rwidget_set_max_size arginfo_Rwidget_set_size

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_rect, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, width, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_desired_size, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_is_hovered arginfo_Rwidget_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_focusable, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, focusable, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_focus arginfo_Rwidget_destroy

#define arginfo_Rwidget_is_focused arginfo_Rwidget_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_user_handle, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_user_handle, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_destroy_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_set_event_callback arginfo_Rwidget_set_destroy_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_action, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_action arginfo_Rwidget_get_name

#define arginfo_Rwidget_set_drop_callback arginfo_Rwidget_set_destroy_callback

#define arginfo_Rwidget_set_window_drag arginfo_Rwidget_set_enabled

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_hit_test, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, root, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_pick arginfo_Rwidget_hit_test

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_context_menu, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_invalidate arginfo_Rwidget_destroy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_color, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_clear_color, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_color, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, r, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, g, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, b, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, a, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_material, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, material, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_material arginfo_Rwidget_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_metric, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_clear_metric, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_metric, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_class, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, classes, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_class arginfo_Rwidget_get_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_add_class, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style_class, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_remove_class arginfo_Rwidget_add_class

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_has_class, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style_class, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_theme, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_theme arginfo_Rwidget_get_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_font, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_font arginfo_Rwidget_is_valid

ZEND_FUNCTION(Rwidget_create);
ZEND_FUNCTION(Rwidget_destroy);
ZEND_FUNCTION(Rwidget_is_valid);
ZEND_FUNCTION(Rwidget_get_type);
ZEND_FUNCTION(Rwidget_add_child);
ZEND_FUNCTION(Rwidget_insert_child);
ZEND_FUNCTION(Rwidget_remove_child);
ZEND_FUNCTION(Rwidget_clear_children);
ZEND_FUNCTION(Rwidget_get_parent);
ZEND_FUNCTION(Rwidget_get_child_count);
ZEND_FUNCTION(Rwidget_get_child);
ZEND_FUNCTION(Rwidget_get_window);
ZEND_FUNCTION(Rwidget_set_name);
ZEND_FUNCTION(Rwidget_get_name);
ZEND_FUNCTION(Rwidget_find);
ZEND_FUNCTION(Rslot_set_padding);
ZEND_FUNCTION(Rslot_set_halign);
ZEND_FUNCTION(Rslot_set_valign);
ZEND_FUNCTION(Rslot_set_auto);
ZEND_FUNCTION(Rslot_set_fill);
ZEND_FUNCTION(Rslot_set_max_size);
ZEND_FUNCTION(Rslot_set_grid);
ZEND_FUNCTION(Rslot_set_grid_span);
ZEND_FUNCTION(Rslot_set_anchors);
ZEND_FUNCTION(Rslot_set_position);
ZEND_FUNCTION(Rslot_set_size);
ZEND_FUNCTION(Rslot_set_alignment);
ZEND_FUNCTION(Rslot_set_title);
ZEND_FUNCTION(Rwidget_set_visibility);
ZEND_FUNCTION(Rwidget_get_visibility);
ZEND_FUNCTION(Rwidget_set_enabled);
ZEND_FUNCTION(Rwidget_is_enabled);
ZEND_FUNCTION(Rwidget_set_hit_testable);
ZEND_FUNCTION(Rwidget_set_opacity);
ZEND_FUNCTION(Rwidget_set_transition);
ZEND_FUNCTION(Rwidget_play_transition);
ZEND_FUNCTION(Rwidget_set_clipping);
ZEND_FUNCTION(Rwidget_set_tooltip);
ZEND_FUNCTION(Rwidget_get_tooltip);
ZEND_FUNCTION(Rwidget_set_cursor);
ZEND_FUNCTION(Rwidget_set_size);
ZEND_FUNCTION(Rwidget_set_min_size);
ZEND_FUNCTION(Rwidget_set_max_size);
ZEND_FUNCTION(Rwidget_get_rect);
ZEND_FUNCTION(Rwidget_get_desired_size);
ZEND_FUNCTION(Rwidget_is_hovered);
ZEND_FUNCTION(Rwidget_set_focusable);
ZEND_FUNCTION(Rwidget_focus);
ZEND_FUNCTION(Rwidget_is_focused);
ZEND_FUNCTION(Rwidget_set_user_handle);
ZEND_FUNCTION(Rwidget_get_user_handle);
ZEND_FUNCTION(Rwidget_set_destroy_callback);
ZEND_FUNCTION(Rwidget_set_event_callback);
ZEND_FUNCTION(Rwidget_set_action);
ZEND_FUNCTION(Rwidget_get_action);
ZEND_FUNCTION(Rwidget_set_drop_callback);
ZEND_FUNCTION(Rwidget_set_window_drag);
ZEND_FUNCTION(Rwidget_hit_test);
ZEND_FUNCTION(Rwidget_pick);
ZEND_FUNCTION(Rwidget_set_context_menu);
ZEND_FUNCTION(Rwidget_invalidate);
ZEND_FUNCTION(Rwidget_set_color);
ZEND_FUNCTION(Rwidget_clear_color);
ZEND_FUNCTION(Rwidget_get_color);
ZEND_FUNCTION(Rwidget_set_material);
ZEND_FUNCTION(Rwidget_get_material);
ZEND_FUNCTION(Rwidget_set_metric);
ZEND_FUNCTION(Rwidget_clear_metric);
ZEND_FUNCTION(Rwidget_get_metric);
ZEND_FUNCTION(Rwidget_set_class);
ZEND_FUNCTION(Rwidget_get_class);
ZEND_FUNCTION(Rwidget_add_class);
ZEND_FUNCTION(Rwidget_remove_class);
ZEND_FUNCTION(Rwidget_has_class);
ZEND_FUNCTION(Rwidget_set_theme);
ZEND_FUNCTION(Rwidget_get_theme);
ZEND_FUNCTION(Rwidget_set_font);
ZEND_FUNCTION(Rwidget_get_font);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rwidget_create, arginfo_Rwidget_create)
	ZEND_FE(Rwidget_destroy, arginfo_Rwidget_destroy)
	ZEND_FE(Rwidget_is_valid, arginfo_Rwidget_is_valid)
	ZEND_FE(Rwidget_get_type, arginfo_Rwidget_get_type)
	ZEND_FE(Rwidget_add_child, arginfo_Rwidget_add_child)
	ZEND_FE(Rwidget_insert_child, arginfo_Rwidget_insert_child)
	ZEND_FE(Rwidget_remove_child, arginfo_Rwidget_remove_child)
	ZEND_FE(Rwidget_clear_children, arginfo_Rwidget_clear_children)
	ZEND_FE(Rwidget_get_parent, arginfo_Rwidget_get_parent)
	ZEND_FE(Rwidget_get_child_count, arginfo_Rwidget_get_child_count)
	ZEND_FE(Rwidget_get_child, arginfo_Rwidget_get_child)
	ZEND_FE(Rwidget_get_window, arginfo_Rwidget_get_window)
	ZEND_FE(Rwidget_set_name, arginfo_Rwidget_set_name)
	ZEND_FE(Rwidget_get_name, arginfo_Rwidget_get_name)
	ZEND_FE(Rwidget_find, arginfo_Rwidget_find)
	ZEND_FE(Rslot_set_padding, arginfo_Rslot_set_padding)
	ZEND_FE(Rslot_set_halign, arginfo_Rslot_set_halign)
	ZEND_FE(Rslot_set_valign, arginfo_Rslot_set_valign)
	ZEND_FE(Rslot_set_auto, arginfo_Rslot_set_auto)
	ZEND_FE(Rslot_set_fill, arginfo_Rslot_set_fill)
	ZEND_FE(Rslot_set_max_size, arginfo_Rslot_set_max_size)
	ZEND_FE(Rslot_set_grid, arginfo_Rslot_set_grid)
	ZEND_FE(Rslot_set_grid_span, arginfo_Rslot_set_grid_span)
	ZEND_FE(Rslot_set_anchors, arginfo_Rslot_set_anchors)
	ZEND_FE(Rslot_set_position, arginfo_Rslot_set_position)
	ZEND_FE(Rslot_set_size, arginfo_Rslot_set_size)
	ZEND_FE(Rslot_set_alignment, arginfo_Rslot_set_alignment)
	ZEND_FE(Rslot_set_title, arginfo_Rslot_set_title)
	ZEND_FE(Rwidget_set_visibility, arginfo_Rwidget_set_visibility)
	ZEND_FE(Rwidget_get_visibility, arginfo_Rwidget_get_visibility)
	ZEND_FE(Rwidget_set_enabled, arginfo_Rwidget_set_enabled)
	ZEND_FE(Rwidget_is_enabled, arginfo_Rwidget_is_enabled)
	ZEND_FE(Rwidget_set_hit_testable, arginfo_Rwidget_set_hit_testable)
	ZEND_FE(Rwidget_set_opacity, arginfo_Rwidget_set_opacity)
	ZEND_FE(Rwidget_set_transition, arginfo_Rwidget_set_transition)
	ZEND_FE(Rwidget_play_transition, arginfo_Rwidget_play_transition)
	ZEND_FE(Rwidget_set_clipping, arginfo_Rwidget_set_clipping)
	ZEND_FE(Rwidget_set_tooltip, arginfo_Rwidget_set_tooltip)
	ZEND_FE(Rwidget_get_tooltip, arginfo_Rwidget_get_tooltip)
	ZEND_FE(Rwidget_set_cursor, arginfo_Rwidget_set_cursor)
	ZEND_FE(Rwidget_set_size, arginfo_Rwidget_set_size)
	ZEND_FE(Rwidget_set_min_size, arginfo_Rwidget_set_min_size)
	ZEND_FE(Rwidget_set_max_size, arginfo_Rwidget_set_max_size)
	ZEND_FE(Rwidget_get_rect, arginfo_Rwidget_get_rect)
	ZEND_FE(Rwidget_get_desired_size, arginfo_Rwidget_get_desired_size)
	ZEND_FE(Rwidget_is_hovered, arginfo_Rwidget_is_hovered)
	ZEND_FE(Rwidget_set_focusable, arginfo_Rwidget_set_focusable)
	ZEND_FE(Rwidget_focus, arginfo_Rwidget_focus)
	ZEND_FE(Rwidget_is_focused, arginfo_Rwidget_is_focused)
	ZEND_FE(Rwidget_set_user_handle, arginfo_Rwidget_set_user_handle)
	ZEND_FE(Rwidget_get_user_handle, arginfo_Rwidget_get_user_handle)
	ZEND_FE(Rwidget_set_destroy_callback, arginfo_Rwidget_set_destroy_callback)
	ZEND_FE(Rwidget_set_event_callback, arginfo_Rwidget_set_event_callback)
	ZEND_FE(Rwidget_set_action, arginfo_Rwidget_set_action)
	ZEND_FE(Rwidget_get_action, arginfo_Rwidget_get_action)
	ZEND_FE(Rwidget_set_drop_callback, arginfo_Rwidget_set_drop_callback)
	ZEND_FE(Rwidget_set_window_drag, arginfo_Rwidget_set_window_drag)
	ZEND_FE(Rwidget_hit_test, arginfo_Rwidget_hit_test)
	ZEND_FE(Rwidget_pick, arginfo_Rwidget_pick)
	ZEND_FE(Rwidget_set_context_menu, arginfo_Rwidget_set_context_menu)
	ZEND_FE(Rwidget_invalidate, arginfo_Rwidget_invalidate)
	ZEND_FE(Rwidget_set_color, arginfo_Rwidget_set_color)
	ZEND_FE(Rwidget_clear_color, arginfo_Rwidget_clear_color)
	ZEND_FE(Rwidget_get_color, arginfo_Rwidget_get_color)
	ZEND_FE(Rwidget_set_material, arginfo_Rwidget_set_material)
	ZEND_FE(Rwidget_get_material, arginfo_Rwidget_get_material)
	ZEND_FE(Rwidget_set_metric, arginfo_Rwidget_set_metric)
	ZEND_FE(Rwidget_clear_metric, arginfo_Rwidget_clear_metric)
	ZEND_FE(Rwidget_get_metric, arginfo_Rwidget_get_metric)
	ZEND_FE(Rwidget_set_class, arginfo_Rwidget_set_class)
	ZEND_FE(Rwidget_get_class, arginfo_Rwidget_get_class)
	ZEND_FE(Rwidget_add_class, arginfo_Rwidget_add_class)
	ZEND_FE(Rwidget_remove_class, arginfo_Rwidget_remove_class)
	ZEND_FE(Rwidget_has_class, arginfo_Rwidget_has_class)
	ZEND_FE(Rwidget_set_theme, arginfo_Rwidget_set_theme)
	ZEND_FE(Rwidget_get_theme, arginfo_Rwidget_get_theme)
	ZEND_FE(Rwidget_set_font, arginfo_Rwidget_set_font)
	ZEND_FE(Rwidget_get_font, arginfo_Rwidget_get_font)
	ZEND_FE_END
};

static void register_raven_widget_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_WIDGET_VBOX", R_WIDGET_VBOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_HBOX", R_WIDGET_HBOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_GRID", R_WIDGET_GRID, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_UNIFORM_GRID", R_WIDGET_UNIFORM_GRID, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_OVERLAY", R_WIDGET_OVERLAY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_BORDER", R_WIDGET_BORDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_SIZE_BOX", R_WIDGET_SIZE_BOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_SPACER", R_WIDGET_SPACER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_SCROLL_BOX", R_WIDGET_SCROLL_BOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_SPLITTER", R_WIDGET_SPLITTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_WRAP_BOX", R_WIDGET_WRAP_BOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_CANVAS", R_WIDGET_CANVAS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_SWITCHER", R_WIDGET_SWITCHER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TAB_VIEW", R_WIDGET_TAB_VIEW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_EXPANDER", R_WIDGET_EXPANDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_LABEL", R_WIDGET_LABEL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_BUTTON", R_WIDGET_BUTTON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_CHECKBOX", R_WIDGET_CHECKBOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_SLIDER", R_WIDGET_SLIDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_PROGRESSBAR", R_WIDGET_PROGRESSBAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_IMAGE", R_WIDGET_IMAGE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TEXT_INPUT", R_WIDGET_TEXT_INPUT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_SPIN_BOX", R_WIDGET_SPIN_BOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_COMBO_BOX", R_WIDGET_COMBO_BOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_SEPARATOR", R_WIDGET_SEPARATOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_LIST_VIEW", R_WIDGET_LIST_VIEW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TREE_VIEW", R_WIDGET_TREE_VIEW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_MENU_BAR", R_WIDGET_MENU_BAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_MENU", R_WIDGET_MENU, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_MENU_ITEM", R_WIDGET_MENU_ITEM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_VIEWPORT", R_WIDGET_VIEWPORT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_CUSTOM", R_WIDGET_CUSTOM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TEXT_EDITOR", R_WIDGET_TEXT_EDITOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_HEADER_BAR", R_WIDGET_HEADER_BAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_DOCK_AREA", R_WIDGET_DOCK_AREA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_ISLAND", R_WIDGET_ISLAND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_FILE_BROWSER", R_WIDGET_FILE_BROWSER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_BACKGROUND_BLUR", R_WIDGET_BACKGROUND_BLUR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_COLOR_PICKER", R_WIDGET_COLOR_PICKER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TIMELINE", R_WIDGET_TIMELINE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_NODE_GRAPH", R_WIDGET_NODE_GRAPH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TILE_VIEW", R_WIDGET_TILE_VIEW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_BLOCK_EDITOR", R_WIDGET_BLOCK_EDITOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TABLE", R_WIDGET_TABLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_DATE_PICKER", R_WIDGET_DATE_PICKER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TIME_PICKER", R_WIDGET_TIME_PICKER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_TOAST", R_WIDGET_TOAST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_BREADCRUMB", R_WIDGET_BREADCRUMB, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_RATING", R_WIDGET_RATING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_PAGINATION", R_WIDGET_PAGINATION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_PLOT", R_WIDGET_PLOT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_PDF_VIEW", R_WIDGET_PDF_VIEW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_CHART", R_WIDGET_CHART, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WIDGET_LAST_", R_WIDGET_LAST_, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HALIGN_FILL", R_HALIGN_FILL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HALIGN_LEFT", R_HALIGN_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HALIGN_CENTER", R_HALIGN_CENTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HALIGN_RIGHT", R_HALIGN_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_VALIGN_FILL", R_VALIGN_FILL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_VALIGN_TOP", R_VALIGN_TOP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_VALIGN_CENTER", R_VALIGN_CENTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_VALIGN_BOTTOM", R_VALIGN_BOTTOM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_VISIBLE", R_VISIBLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HIDDEN", R_HIDDEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLLAPSED", R_COLLAPSED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_NONE", R_TRANSITION_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_FADE", R_TRANSITION_FADE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_POP", R_TRANSITION_POP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_ZOOM", R_TRANSITION_ZOOM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_FLY_UP", R_TRANSITION_FLY_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_FLY_DOWN", R_TRANSITION_FLY_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_FLY_LEFT", R_TRANSITION_FLY_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_FLY_RIGHT", R_TRANSITION_FLY_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_DROP", R_TRANSITION_DROP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_SLIDE_LEFT", R_TRANSITION_SLIDE_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRANSITION_SLIDE_RIGHT", R_TRANSITION_SLIDE_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HORIZONTAL", R_HORIZONTAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_VERTICAL", R_VERTICAL, CONST_PERSISTENT);
}
