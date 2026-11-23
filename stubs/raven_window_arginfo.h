/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 754b5b109422b693d5025804c29c36a3d1915d95 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_destroy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_content, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_content arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_title, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_title, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_size, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_size, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_safe_area, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, insets, RInsets, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_keyboard_area arginfo_Rwindow_get_safe_area

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_keyboard_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_clear_focus arginfo_Rwindow_destroy

#define arginfo_Rwindow_set_back_callback arginfo_Rwindow_set_keyboard_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_back_enabled, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_wants_back arginfo_Rwindow_is_valid

#define arginfo_Rwindow_set_min_size arginfo_Rwindow_set_size

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_position, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_position, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_framebuffer_size arginfo_Rwindow_get_size

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_scale, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_show arginfo_Rwindow_destroy

#define arginfo_Rwindow_hide arginfo_Rwindow_destroy

#define arginfo_Rwindow_focus arginfo_Rwindow_destroy

#define arginfo_Rwindow_maximize arginfo_Rwindow_destroy

#define arginfo_Rwindow_minimize arginfo_Rwindow_destroy

#define arginfo_Rwindow_restore arginfo_Rwindow_destroy

#define arginfo_Rwindow_is_maximized arginfo_Rwindow_is_valid

#define arginfo_Rwindow_is_minimized arginfo_Rwindow_is_valid

#define arginfo_Rwindow_is_active arginfo_Rwindow_is_valid

#define arginfo_Rwindow_close arginfo_Rwindow_destroy

#define arginfo_Rwindow_begin_move arginfo_Rwindow_destroy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_begin_resize, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, edge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_icon, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_clear_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_background, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_backdrop, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backdrop, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_backdrop arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_theme, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_theme arginfo_Rwindow_get_title

#define arginfo_Rwindow_has_own_theme arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_opacity, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opacity, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_opacity arginfo_Rwindow_get_scale

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_topmost, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topmost, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_owner, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, owner, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_owner arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_picture_in_picture, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_is_picture_in_picture arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_picture_in_picture_layout, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, corner, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_center arginfo_Rwindow_destroy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_inspector, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shown, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_is_inspector_shown arginfo_Rwindow_is_valid

#define arginfo_Rwindow_get_inspector arginfo_Rwindow_is_valid

#define arginfo_Rwindow_is_splash_screen arginfo_Rwindow_is_valid

#define arginfo_Rwindow_request_redraw arginfo_Rwindow_destroy

#define arginfo_Rwindow_set_continuous_redraw arginfo_Rwindow_set_back_enabled

#define arginfo_Rwindow_set_close_callback arginfo_Rwindow_set_keyboard_callback

#define arginfo_Rwindow_set_resize_callback arginfo_Rwindow_set_keyboard_callback

#define arginfo_Rwindow_set_drop_callback arginfo_Rwindow_set_keyboard_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdrop_set_highlight_rect, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_user_handle, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_user_handle, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_native_handle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, native, RNativeWindow, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_focused_widget arginfo_Rwindow_is_valid

#define arginfo_Rwindow_get_hovered_widget arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_mouse_position, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_mouse_move, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_mouse_button, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pressed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_mouse_wheel, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wheel_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, wheel_y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_key, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pressed, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_composition, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, selection_start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection_end, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_drag, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, inside, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_drop, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, paths, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, path_count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_drag_end, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_inject_back arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_is_key_down, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_is_mouse_button_down, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_modifiers arginfo_Rwindow_is_valid

#define arginfo_Rwindow_is_mouse_inside arginfo_Rwindow_is_valid

#define arginfo_Rwindow_wants_text_input arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_text_input_info, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, info, RTextInputInfo, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_text_input_text arginfo_Rwindow_get_title

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_text_input_selection, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, start, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, end, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_text_input_selection, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_replace_text_input, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_text_composition, 0, 3, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, selection_start, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, selection_end, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_has_popup arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_text_input_rect, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_popup_count arginfo_Rwindow_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_popup, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_set_tab_navigation arginfo_Rwindow_set_back_enabled

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_event_hook, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hook, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdrag_begin, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rdrag_is_active arginfo_Rwindow_is_valid

#define arginfo_Rdrag_get_type arginfo_Rwindow_get_title

#define arginfo_Rdrag_get_data arginfo_Rwindow_get_title

#define arginfo_Rdrag_cancel arginfo_Rwindow_destroy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdrag_begin_external, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, items, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operations, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdrag_set_image, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdrag_external_supported, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rdrag_external_is_active arginfo_Rdrag_external_supported

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_register_shortcut, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_unregister_shortcut, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RInsets___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, top, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, right, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, bottom, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, left, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RTextInputInfo___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, return_key, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, read_only, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, max_length, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RNativeWindow___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, system, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, display, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, visual, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, transparent, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_REvent___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, target, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, delta_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, delta_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, wheel_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, wheel_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, button, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clicks, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, key, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, modifiers, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, repeat, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, codepoint, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, wheel_precise, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RDropEvent___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, phase, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, paths, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, path_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, drag_type, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, drag_source, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rwindow_create);
ZEND_FUNCTION(Rwindow_destroy);
ZEND_FUNCTION(Rwindow_is_valid);
ZEND_FUNCTION(Rwindow_set_content);
ZEND_FUNCTION(Rwindow_get_content);
ZEND_FUNCTION(Rwindow_set_title);
ZEND_FUNCTION(Rwindow_get_title);
ZEND_FUNCTION(Rwindow_set_size);
ZEND_FUNCTION(Rwindow_get_size);
ZEND_FUNCTION(Rwindow_get_safe_area);
ZEND_FUNCTION(Rwindow_get_keyboard_area);
ZEND_FUNCTION(Rwindow_set_keyboard_callback);
ZEND_FUNCTION(Rwindow_clear_focus);
ZEND_FUNCTION(Rwindow_set_back_callback);
ZEND_FUNCTION(Rwindow_set_back_enabled);
ZEND_FUNCTION(Rwindow_wants_back);
ZEND_FUNCTION(Rwindow_set_min_size);
ZEND_FUNCTION(Rwindow_set_position);
ZEND_FUNCTION(Rwindow_get_position);
ZEND_FUNCTION(Rwindow_get_framebuffer_size);
ZEND_FUNCTION(Rwindow_get_scale);
ZEND_FUNCTION(Rwindow_show);
ZEND_FUNCTION(Rwindow_hide);
ZEND_FUNCTION(Rwindow_focus);
ZEND_FUNCTION(Rwindow_maximize);
ZEND_FUNCTION(Rwindow_minimize);
ZEND_FUNCTION(Rwindow_restore);
ZEND_FUNCTION(Rwindow_is_maximized);
ZEND_FUNCTION(Rwindow_is_minimized);
ZEND_FUNCTION(Rwindow_is_active);
ZEND_FUNCTION(Rwindow_close);
ZEND_FUNCTION(Rwindow_begin_move);
ZEND_FUNCTION(Rwindow_begin_resize);
ZEND_FUNCTION(Rwindow_set_icon);
ZEND_FUNCTION(Rwindow_set_clear_color);
ZEND_FUNCTION(Rwindow_set_background);
ZEND_FUNCTION(Rwindow_set_backdrop);
ZEND_FUNCTION(Rwindow_get_backdrop);
ZEND_FUNCTION(Rwindow_set_theme);
ZEND_FUNCTION(Rwindow_get_theme);
ZEND_FUNCTION(Rwindow_has_own_theme);
ZEND_FUNCTION(Rwindow_set_opacity);
ZEND_FUNCTION(Rwindow_get_opacity);
ZEND_FUNCTION(Rwindow_set_topmost);
ZEND_FUNCTION(Rwindow_set_owner);
ZEND_FUNCTION(Rwindow_get_owner);
ZEND_FUNCTION(Rwindow_set_picture_in_picture);
ZEND_FUNCTION(Rwindow_is_picture_in_picture);
ZEND_FUNCTION(Rwindow_set_picture_in_picture_layout);
ZEND_FUNCTION(Rwindow_center);
ZEND_FUNCTION(Rwindow_set_inspector);
ZEND_FUNCTION(Rwindow_is_inspector_shown);
ZEND_FUNCTION(Rwindow_get_inspector);
ZEND_FUNCTION(Rwindow_is_splash_screen);
ZEND_FUNCTION(Rwindow_request_redraw);
ZEND_FUNCTION(Rwindow_set_continuous_redraw);
ZEND_FUNCTION(Rwindow_set_close_callback);
ZEND_FUNCTION(Rwindow_set_resize_callback);
ZEND_FUNCTION(Rwindow_set_drop_callback);
ZEND_FUNCTION(Rdrop_set_highlight_rect);
ZEND_FUNCTION(Rwindow_set_user_handle);
ZEND_FUNCTION(Rwindow_get_user_handle);
ZEND_FUNCTION(Rwindow_get_native_handle);
ZEND_FUNCTION(Rwindow_get_focused_widget);
ZEND_FUNCTION(Rwindow_get_hovered_widget);
ZEND_FUNCTION(Rwindow_get_mouse_position);
ZEND_FUNCTION(Rwindow_inject_mouse_move);
ZEND_FUNCTION(Rwindow_inject_mouse_button);
ZEND_FUNCTION(Rwindow_inject_mouse_wheel);
ZEND_FUNCTION(Rwindow_inject_key);
ZEND_FUNCTION(Rwindow_inject_text);
ZEND_FUNCTION(Rwindow_inject_composition);
ZEND_FUNCTION(Rwindow_inject_drag);
ZEND_FUNCTION(Rwindow_inject_drop);
ZEND_FUNCTION(Rwindow_inject_drag_end);
ZEND_FUNCTION(Rwindow_inject_back);
ZEND_FUNCTION(Rwindow_is_key_down);
ZEND_FUNCTION(Rwindow_is_mouse_button_down);
ZEND_FUNCTION(Rwindow_get_modifiers);
ZEND_FUNCTION(Rwindow_is_mouse_inside);
ZEND_FUNCTION(Rwindow_wants_text_input);
ZEND_FUNCTION(Rwindow_get_text_input_info);
ZEND_FUNCTION(Rwindow_get_text_input_text);
ZEND_FUNCTION(Rwindow_get_text_input_selection);
ZEND_FUNCTION(Rwindow_set_text_input_selection);
ZEND_FUNCTION(Rwindow_replace_text_input);
ZEND_FUNCTION(Rwindow_get_text_composition);
ZEND_FUNCTION(Rwindow_has_popup);
ZEND_FUNCTION(Rwindow_get_text_input_rect);
ZEND_FUNCTION(Rwindow_get_popup_count);
ZEND_FUNCTION(Rwindow_get_popup);
ZEND_FUNCTION(Rwindow_set_tab_navigation);
ZEND_FUNCTION(Rwindow_set_event_hook);
ZEND_FUNCTION(Rdrag_begin);
ZEND_FUNCTION(Rdrag_is_active);
ZEND_FUNCTION(Rdrag_get_type);
ZEND_FUNCTION(Rdrag_get_data);
ZEND_FUNCTION(Rdrag_cancel);
ZEND_FUNCTION(Rdrag_begin_external);
ZEND_FUNCTION(Rdrag_set_image);
ZEND_FUNCTION(Rdrag_external_supported);
ZEND_FUNCTION(Rdrag_external_is_active);
ZEND_FUNCTION(Rwindow_register_shortcut);
ZEND_FUNCTION(Rwindow_unregister_shortcut);
ZEND_METHOD(RInsets, __construct);
ZEND_METHOD(RTextInputInfo, __construct);
ZEND_METHOD(RNativeWindow, __construct);
ZEND_METHOD(REvent, __construct);
ZEND_METHOD(RDropEvent, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rwindow_create, arginfo_Rwindow_create)
	ZEND_FE(Rwindow_destroy, arginfo_Rwindow_destroy)
	ZEND_FE(Rwindow_is_valid, arginfo_Rwindow_is_valid)
	ZEND_FE(Rwindow_set_content, arginfo_Rwindow_set_content)
	ZEND_FE(Rwindow_get_content, arginfo_Rwindow_get_content)
	ZEND_FE(Rwindow_set_title, arginfo_Rwindow_set_title)
	ZEND_FE(Rwindow_get_title, arginfo_Rwindow_get_title)
	ZEND_FE(Rwindow_set_size, arginfo_Rwindow_set_size)
	ZEND_FE(Rwindow_get_size, arginfo_Rwindow_get_size)
	ZEND_FE(Rwindow_get_safe_area, arginfo_Rwindow_get_safe_area)
	ZEND_FE(Rwindow_get_keyboard_area, arginfo_Rwindow_get_keyboard_area)
	ZEND_FE(Rwindow_set_keyboard_callback, arginfo_Rwindow_set_keyboard_callback)
	ZEND_FE(Rwindow_clear_focus, arginfo_Rwindow_clear_focus)
	ZEND_FE(Rwindow_set_back_callback, arginfo_Rwindow_set_back_callback)
	ZEND_FE(Rwindow_set_back_enabled, arginfo_Rwindow_set_back_enabled)
	ZEND_FE(Rwindow_wants_back, arginfo_Rwindow_wants_back)
	ZEND_FE(Rwindow_set_min_size, arginfo_Rwindow_set_min_size)
	ZEND_FE(Rwindow_set_position, arginfo_Rwindow_set_position)
	ZEND_FE(Rwindow_get_position, arginfo_Rwindow_get_position)
	ZEND_FE(Rwindow_get_framebuffer_size, arginfo_Rwindow_get_framebuffer_size)
	ZEND_FE(Rwindow_get_scale, arginfo_Rwindow_get_scale)
	ZEND_FE(Rwindow_show, arginfo_Rwindow_show)
	ZEND_FE(Rwindow_hide, arginfo_Rwindow_hide)
	ZEND_FE(Rwindow_focus, arginfo_Rwindow_focus)
	ZEND_FE(Rwindow_maximize, arginfo_Rwindow_maximize)
	ZEND_FE(Rwindow_minimize, arginfo_Rwindow_minimize)
	ZEND_FE(Rwindow_restore, arginfo_Rwindow_restore)
	ZEND_FE(Rwindow_is_maximized, arginfo_Rwindow_is_maximized)
	ZEND_FE(Rwindow_is_minimized, arginfo_Rwindow_is_minimized)
	ZEND_FE(Rwindow_is_active, arginfo_Rwindow_is_active)
	ZEND_FE(Rwindow_close, arginfo_Rwindow_close)
	ZEND_FE(Rwindow_begin_move, arginfo_Rwindow_begin_move)
	ZEND_FE(Rwindow_begin_resize, arginfo_Rwindow_begin_resize)
	ZEND_FE(Rwindow_set_icon, arginfo_Rwindow_set_icon)
	ZEND_FE(Rwindow_set_clear_color, arginfo_Rwindow_set_clear_color)
	ZEND_FE(Rwindow_set_background, arginfo_Rwindow_set_background)
	ZEND_FE(Rwindow_set_backdrop, arginfo_Rwindow_set_backdrop)
	ZEND_FE(Rwindow_get_backdrop, arginfo_Rwindow_get_backdrop)
	ZEND_FE(Rwindow_set_theme, arginfo_Rwindow_set_theme)
	ZEND_FE(Rwindow_get_theme, arginfo_Rwindow_get_theme)
	ZEND_FE(Rwindow_has_own_theme, arginfo_Rwindow_has_own_theme)
	ZEND_FE(Rwindow_set_opacity, arginfo_Rwindow_set_opacity)
	ZEND_FE(Rwindow_get_opacity, arginfo_Rwindow_get_opacity)
	ZEND_FE(Rwindow_set_topmost, arginfo_Rwindow_set_topmost)
	ZEND_FE(Rwindow_set_owner, arginfo_Rwindow_set_owner)
	ZEND_FE(Rwindow_get_owner, arginfo_Rwindow_get_owner)
	ZEND_FE(Rwindow_set_picture_in_picture, arginfo_Rwindow_set_picture_in_picture)
	ZEND_FE(Rwindow_is_picture_in_picture, arginfo_Rwindow_is_picture_in_picture)
	ZEND_FE(Rwindow_set_picture_in_picture_layout, arginfo_Rwindow_set_picture_in_picture_layout)
	ZEND_FE(Rwindow_center, arginfo_Rwindow_center)
	ZEND_FE(Rwindow_set_inspector, arginfo_Rwindow_set_inspector)
	ZEND_FE(Rwindow_is_inspector_shown, arginfo_Rwindow_is_inspector_shown)
	ZEND_FE(Rwindow_get_inspector, arginfo_Rwindow_get_inspector)
	ZEND_FE(Rwindow_is_splash_screen, arginfo_Rwindow_is_splash_screen)
	ZEND_FE(Rwindow_request_redraw, arginfo_Rwindow_request_redraw)
	ZEND_FE(Rwindow_set_continuous_redraw, arginfo_Rwindow_set_continuous_redraw)
	ZEND_FE(Rwindow_set_close_callback, arginfo_Rwindow_set_close_callback)
	ZEND_FE(Rwindow_set_resize_callback, arginfo_Rwindow_set_resize_callback)
	ZEND_FE(Rwindow_set_drop_callback, arginfo_Rwindow_set_drop_callback)
	ZEND_FE(Rdrop_set_highlight_rect, arginfo_Rdrop_set_highlight_rect)
	ZEND_FE(Rwindow_set_user_handle, arginfo_Rwindow_set_user_handle)
	ZEND_FE(Rwindow_get_user_handle, arginfo_Rwindow_get_user_handle)
	ZEND_FE(Rwindow_get_native_handle, arginfo_Rwindow_get_native_handle)
	ZEND_FE(Rwindow_get_focused_widget, arginfo_Rwindow_get_focused_widget)
	ZEND_FE(Rwindow_get_hovered_widget, arginfo_Rwindow_get_hovered_widget)
	ZEND_FE(Rwindow_get_mouse_position, arginfo_Rwindow_get_mouse_position)
	ZEND_FE(Rwindow_inject_mouse_move, arginfo_Rwindow_inject_mouse_move)
	ZEND_FE(Rwindow_inject_mouse_button, arginfo_Rwindow_inject_mouse_button)
	ZEND_FE(Rwindow_inject_mouse_wheel, arginfo_Rwindow_inject_mouse_wheel)
	ZEND_FE(Rwindow_inject_key, arginfo_Rwindow_inject_key)
	ZEND_FE(Rwindow_inject_text, arginfo_Rwindow_inject_text)
	ZEND_FE(Rwindow_inject_composition, arginfo_Rwindow_inject_composition)
	ZEND_FE(Rwindow_inject_drag, arginfo_Rwindow_inject_drag)
	ZEND_FE(Rwindow_inject_drop, arginfo_Rwindow_inject_drop)
	ZEND_FE(Rwindow_inject_drag_end, arginfo_Rwindow_inject_drag_end)
	ZEND_FE(Rwindow_inject_back, arginfo_Rwindow_inject_back)
	ZEND_FE(Rwindow_is_key_down, arginfo_Rwindow_is_key_down)
	ZEND_FE(Rwindow_is_mouse_button_down, arginfo_Rwindow_is_mouse_button_down)
	ZEND_FE(Rwindow_get_modifiers, arginfo_Rwindow_get_modifiers)
	ZEND_FE(Rwindow_is_mouse_inside, arginfo_Rwindow_is_mouse_inside)
	ZEND_FE(Rwindow_wants_text_input, arginfo_Rwindow_wants_text_input)
	ZEND_FE(Rwindow_get_text_input_info, arginfo_Rwindow_get_text_input_info)
	ZEND_FE(Rwindow_get_text_input_text, arginfo_Rwindow_get_text_input_text)
	ZEND_FE(Rwindow_get_text_input_selection, arginfo_Rwindow_get_text_input_selection)
	ZEND_FE(Rwindow_set_text_input_selection, arginfo_Rwindow_set_text_input_selection)
	ZEND_FE(Rwindow_replace_text_input, arginfo_Rwindow_replace_text_input)
	ZEND_FE(Rwindow_get_text_composition, arginfo_Rwindow_get_text_composition)
	ZEND_FE(Rwindow_has_popup, arginfo_Rwindow_has_popup)
	ZEND_FE(Rwindow_get_text_input_rect, arginfo_Rwindow_get_text_input_rect)
	ZEND_FE(Rwindow_get_popup_count, arginfo_Rwindow_get_popup_count)
	ZEND_FE(Rwindow_get_popup, arginfo_Rwindow_get_popup)
	ZEND_FE(Rwindow_set_tab_navigation, arginfo_Rwindow_set_tab_navigation)
	ZEND_FE(Rwindow_set_event_hook, arginfo_Rwindow_set_event_hook)
	ZEND_FE(Rdrag_begin, arginfo_Rdrag_begin)
	ZEND_FE(Rdrag_is_active, arginfo_Rdrag_is_active)
	ZEND_FE(Rdrag_get_type, arginfo_Rdrag_get_type)
	ZEND_FE(Rdrag_get_data, arginfo_Rdrag_get_data)
	ZEND_FE(Rdrag_cancel, arginfo_Rdrag_cancel)
	ZEND_FE(Rdrag_begin_external, arginfo_Rdrag_begin_external)
	ZEND_FE(Rdrag_set_image, arginfo_Rdrag_set_image)
	ZEND_FE(Rdrag_external_supported, arginfo_Rdrag_external_supported)
	ZEND_FE(Rdrag_external_is_active, arginfo_Rdrag_external_is_active)
	ZEND_FE(Rwindow_register_shortcut, arginfo_Rwindow_register_shortcut)
	ZEND_FE(Rwindow_unregister_shortcut, arginfo_Rwindow_unregister_shortcut)
	ZEND_FE_END
};

static const zend_function_entry class_RInsets_methods[] = {
	ZEND_ME(RInsets, __construct, arginfo_class_RInsets___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RTextInputInfo_methods[] = {
	ZEND_ME(RTextInputInfo, __construct, arginfo_class_RTextInputInfo___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RNativeWindow_methods[] = {
	ZEND_ME(RNativeWindow, __construct, arginfo_class_RNativeWindow___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_REvent_methods[] = {
	ZEND_ME(REvent, __construct, arginfo_class_REvent___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RDropEvent_methods[] = {
	ZEND_ME(RDropEvent, __construct, arginfo_class_RDropEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_window_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_WINDOW_DEFAULT", R_WINDOW_DEFAULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_NO_RESIZE", R_WINDOW_NO_RESIZE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_HIDDEN", R_WINDOW_HIDDEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_BORDERLESS", R_WINDOW_BORDERLESS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_MAXIMIZED", R_WINDOW_MAXIMIZED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_CUSTOM_HEADER", R_WINDOW_CUSTOM_HEADER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_TRANSPARENT", R_WINDOW_TRANSPARENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SPLASH_SCREEN", R_WINDOW_SPLASH_SCREEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PIP_BOTTOM_RIGHT", R_PIP_BOTTOM_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PIP_BOTTOM_LEFT", R_PIP_BOTTOM_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PIP_TOP_RIGHT", R_PIP_TOP_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PIP_TOP_LEFT", R_PIP_TOP_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKDROP_NONE", R_BACKDROP_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKDROP_TRANSPARENT", R_BACKDROP_TRANSPARENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKDROP_BLUR", R_BACKDROP_BLUR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKDROP_ACRYLIC", R_BACKDROP_ACRYLIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKDROP_MICA", R_BACKDROP_MICA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SYSTEM_NONE", R_WINDOW_SYSTEM_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SYSTEM_WIN32", R_WINDOW_SYSTEM_WIN32, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SYSTEM_X11", R_WINDOW_SYSTEM_X11, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SYSTEM_WAYLAND", R_WINDOW_SYSTEM_WAYLAND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SYSTEM_COCOA", R_WINDOW_SYSTEM_COCOA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SYSTEM_EMSCRIPTEN", R_WINDOW_SYSTEM_EMSCRIPTEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SYSTEM_ANDROID", R_WINDOW_SYSTEM_ANDROID, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_WINDOW_SYSTEM_UIKIT", R_WINDOW_SYSTEM_UIKIT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_INPUT_TYPE_TEXT", R_TEXT_INPUT_TYPE_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_INPUT_TYPE_EMAIL", R_TEXT_INPUT_TYPE_EMAIL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_INPUT_TYPE_NUMBER", R_TEXT_INPUT_TYPE_NUMBER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_INPUT_TYPE_DECIMAL", R_TEXT_INPUT_TYPE_DECIMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_INPUT_TYPE_PHONE", R_TEXT_INPUT_TYPE_PHONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_INPUT_TYPE_URL", R_TEXT_INPUT_TYPE_URL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_INPUT_TYPE_SEARCH", R_TEXT_INPUT_TYPE_SEARCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_RETURN_KEY_DEFAULT", R_RETURN_KEY_DEFAULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_RETURN_KEY_DONE", R_RETURN_KEY_DONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_RETURN_KEY_GO", R_RETURN_KEY_GO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_RETURN_KEY_NEXT", R_RETURN_KEY_NEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_RETURN_KEY_SEARCH", R_RETURN_KEY_SEARCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_RETURN_KEY_SEND", R_RETURN_KEY_SEND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EDGE_LEFT", R_EDGE_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EDGE_RIGHT", R_EDGE_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EDGE_TOP", R_EDGE_TOP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EDGE_BOTTOM", R_EDGE_BOTTOM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EDGE_TOP_LEFT", R_EDGE_TOP_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EDGE_TOP_RIGHT", R_EDGE_TOP_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EDGE_BOTTOM_LEFT", R_EDGE_BOTTOM_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EDGE_BOTTOM_RIGHT", R_EDGE_BOTTOM_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOUSE_LEFT", R_MOUSE_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOUSE_RIGHT", R_MOUSE_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOUSE_MIDDLE", R_MOUSE_MIDDLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOUSE_X1", R_MOUSE_X1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOUSE_X2", R_MOUSE_X2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOD_SHIFT", R_MOD_SHIFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOD_CTRL", R_MOD_CTRL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOD_ALT", R_MOD_ALT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOD_SUPER", R_MOD_SUPER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_ARROW", R_CURSOR_ARROW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_IBEAM", R_CURSOR_IBEAM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_HAND", R_CURSOR_HAND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_CROSSHAIR", R_CURSOR_CROSSHAIR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_RESIZE_H", R_CURSOR_RESIZE_H, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_RESIZE_V", R_CURSOR_RESIZE_V, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_RESIZE_NWSE", R_CURSOR_RESIZE_NWSE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_RESIZE_NESW", R_CURSOR_RESIZE_NESW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_MOVE", R_CURSOR_MOVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_NOT_ALLOWED", R_CURSOR_NOT_ALLOWED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CURSOR_NONE", R_CURSOR_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_UNKNOWN", R_KEY_UNKNOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_SPACE", R_KEY_SPACE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_APOSTROPHE", R_KEY_APOSTROPHE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_COMMA", R_KEY_COMMA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_MINUS", R_KEY_MINUS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_PERIOD", R_KEY_PERIOD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_SLASH", R_KEY_SLASH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_0", R_KEY_0, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_1", R_KEY_1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_2", R_KEY_2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_3", R_KEY_3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_4", R_KEY_4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_5", R_KEY_5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_6", R_KEY_6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_7", R_KEY_7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_8", R_KEY_8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_9", R_KEY_9, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_SEMICOLON", R_KEY_SEMICOLON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_EQUAL", R_KEY_EQUAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_A", R_KEY_A, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_B", R_KEY_B, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_C", R_KEY_C, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_D", R_KEY_D, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_E", R_KEY_E, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F", R_KEY_F, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_G", R_KEY_G, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_H", R_KEY_H, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_I", R_KEY_I, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_J", R_KEY_J, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_K", R_KEY_K, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_L", R_KEY_L, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_M", R_KEY_M, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_N", R_KEY_N, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_O", R_KEY_O, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_P", R_KEY_P, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_Q", R_KEY_Q, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_R", R_KEY_R, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_S", R_KEY_S, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_T", R_KEY_T, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_U", R_KEY_U, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_V", R_KEY_V, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_W", R_KEY_W, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_X", R_KEY_X, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_Y", R_KEY_Y, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_Z", R_KEY_Z, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_LEFT_BRACKET", R_KEY_LEFT_BRACKET, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_BACKSLASH", R_KEY_BACKSLASH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_RIGHT_BRACKET", R_KEY_RIGHT_BRACKET, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_GRAVE", R_KEY_GRAVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_ESCAPE", R_KEY_ESCAPE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_ENTER", R_KEY_ENTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_TAB", R_KEY_TAB, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_BACKSPACE", R_KEY_BACKSPACE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_INSERT", R_KEY_INSERT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_DELETE", R_KEY_DELETE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_RIGHT", R_KEY_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_LEFT", R_KEY_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_DOWN", R_KEY_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_UP", R_KEY_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_PAGE_UP", R_KEY_PAGE_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_PAGE_DOWN", R_KEY_PAGE_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_HOME", R_KEY_HOME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_END", R_KEY_END, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_CAPS_LOCK", R_KEY_CAPS_LOCK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_PRINT_SCREEN", R_KEY_PRINT_SCREEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_PAUSE", R_KEY_PAUSE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F1", R_KEY_F1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F2", R_KEY_F2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F3", R_KEY_F3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F4", R_KEY_F4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F5", R_KEY_F5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F6", R_KEY_F6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F7", R_KEY_F7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F8", R_KEY_F8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F9", R_KEY_F9, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F10", R_KEY_F10, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F11", R_KEY_F11, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_F12", R_KEY_F12, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_0", R_KEY_KP_0, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_1", R_KEY_KP_1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_2", R_KEY_KP_2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_3", R_KEY_KP_3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_4", R_KEY_KP_4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_5", R_KEY_KP_5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_6", R_KEY_KP_6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_7", R_KEY_KP_7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_8", R_KEY_KP_8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_9", R_KEY_KP_9, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_DECIMAL", R_KEY_KP_DECIMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_DIVIDE", R_KEY_KP_DIVIDE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_MULTIPLY", R_KEY_KP_MULTIPLY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_SUBTRACT", R_KEY_KP_SUBTRACT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_ADD", R_KEY_KP_ADD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_KP_ENTER", R_KEY_KP_ENTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_LEFT_SHIFT", R_KEY_LEFT_SHIFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_LEFT_CTRL", R_KEY_LEFT_CTRL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_LEFT_ALT", R_KEY_LEFT_ALT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_LEFT_SUPER", R_KEY_LEFT_SUPER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_RIGHT_SHIFT", R_KEY_RIGHT_SHIFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_RIGHT_CTRL", R_KEY_RIGHT_CTRL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_RIGHT_ALT", R_KEY_RIGHT_ALT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_RIGHT_SUPER", R_KEY_RIGHT_SUPER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_MENU", R_KEY_MENU, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_KEY_COUNT", R_KEY_COUNT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_NONE", R_EVENT_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_MOUSE_MOVE", R_EVENT_MOUSE_MOVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_MOUSE_DOWN", R_EVENT_MOUSE_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_MOUSE_UP", R_EVENT_MOUSE_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_MOUSE_WHEEL", R_EVENT_MOUSE_WHEEL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_MOUSE_ENTER", R_EVENT_MOUSE_ENTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_MOUSE_LEAVE", R_EVENT_MOUSE_LEAVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_KEY_DOWN", R_EVENT_KEY_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_KEY_UP", R_EVENT_KEY_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_TEXT", R_EVENT_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_FOCUS_GAINED", R_EVENT_FOCUS_GAINED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EVENT_FOCUS_LOST", R_EVENT_FOCUS_LOST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DROP_ENTER", R_DROP_ENTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DROP_MOVE", R_DROP_MOVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DROP_LEAVE", R_DROP_LEAVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DROP_DROPPED", R_DROP_DROPPED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DRAG_OPERATION_NONE", R_DRAG_OPERATION_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DRAG_OPERATION_COPY", R_DRAG_OPERATION_COPY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DRAG_OPERATION_MOVE", R_DRAG_OPERATION_MOVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DRAG_OPERATION_LINK", R_DRAG_OPERATION_LINK, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RInsets(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RInsets", class_RInsets_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_top_default_value;
	ZVAL_DOUBLE(&property_top_default_value, 0.0);
	zend_string *property_top_name = zend_string_init("top", sizeof("top") - 1, 1);
	zend_declare_typed_property(class_entry, property_top_name, &property_top_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_top_name);

	zval property_right_default_value;
	ZVAL_DOUBLE(&property_right_default_value, 0.0);
	zend_string *property_right_name = zend_string_init("right", sizeof("right") - 1, 1);
	zend_declare_typed_property(class_entry, property_right_name, &property_right_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_right_name);

	zval property_bottom_default_value;
	ZVAL_DOUBLE(&property_bottom_default_value, 0.0);
	zend_string *property_bottom_name = zend_string_init("bottom", sizeof("bottom") - 1, 1);
	zend_declare_typed_property(class_entry, property_bottom_name, &property_bottom_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_bottom_name);

	zval property_left_default_value;
	ZVAL_DOUBLE(&property_left_default_value, 0.0);
	zend_string *property_left_name = zend_string_init("left", sizeof("left") - 1, 1);
	zend_declare_typed_property(class_entry, property_left_name, &property_left_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_left_name);

	return class_entry;
}

static zend_class_entry *register_class_RTextInputInfo(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RTextInputInfo", class_RTextInputInfo_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_type_default_value;
	ZVAL_LONG(&property_type_default_value, 0);
	zend_string *property_type_name = zend_string_init("type", sizeof("type") - 1, 1);
	zend_declare_typed_property(class_entry, property_type_name, &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_type_name);

	zval property_return_key_default_value;
	ZVAL_LONG(&property_return_key_default_value, 0);
	zend_string *property_return_key_name = zend_string_init("return_key", sizeof("return_key") - 1, 1);
	zend_declare_typed_property(class_entry, property_return_key_name, &property_return_key_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_return_key_name);

	zval property_password_default_value;
	ZVAL_LONG(&property_password_default_value, 0);
	zend_string *property_password_name = zend_string_init("password", sizeof("password") - 1, 1);
	zend_declare_typed_property(class_entry, property_password_name, &property_password_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_password_name);

	zval property_read_only_default_value;
	ZVAL_LONG(&property_read_only_default_value, 0);
	zend_string *property_read_only_name = zend_string_init("read_only", sizeof("read_only") - 1, 1);
	zend_declare_typed_property(class_entry, property_read_only_name, &property_read_only_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_read_only_name);

	zval property_max_length_default_value;
	ZVAL_LONG(&property_max_length_default_value, 0);
	zend_string *property_max_length_name = zend_string_init("max_length", sizeof("max_length") - 1, 1);
	zend_declare_typed_property(class_entry, property_max_length_name, &property_max_length_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_max_length_name);

	return class_entry;
}

static zend_class_entry *register_class_RNativeWindow(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RNativeWindow", class_RNativeWindow_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_system_default_value;
	ZVAL_LONG(&property_system_default_value, 0);
	zend_string *property_system_name = zend_string_init("system", sizeof("system") - 1, 1);
	zend_declare_typed_property(class_entry, property_system_name, &property_system_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_system_name);

	zval property_display_default_value;
	ZVAL_LONG(&property_display_default_value, 0);
	zend_string *property_display_name = zend_string_init("display", sizeof("display") - 1, 1);
	zend_declare_typed_property(class_entry, property_display_name, &property_display_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_display_name);

	zval property_window_default_value;
	ZVAL_LONG(&property_window_default_value, 0);
	zend_string *property_window_name = zend_string_init("window", sizeof("window") - 1, 1);
	zend_declare_typed_property(class_entry, property_window_name, &property_window_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_window_name);

	zval property_visual_default_value;
	ZVAL_LONG(&property_visual_default_value, 0);
	zend_string *property_visual_name = zend_string_init("visual", sizeof("visual") - 1, 1);
	zend_declare_typed_property(class_entry, property_visual_name, &property_visual_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_visual_name);

	zval property_transparent_default_value;
	ZVAL_LONG(&property_transparent_default_value, 0);
	zend_string *property_transparent_name = zend_string_init("transparent", sizeof("transparent") - 1, 1);
	zend_declare_typed_property(class_entry, property_transparent_name, &property_transparent_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_transparent_name);

	return class_entry;
}

static zend_class_entry *register_class_REvent(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "REvent", class_REvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_type_default_value;
	ZVAL_LONG(&property_type_default_value, 0);
	zend_string *property_type_name = zend_string_init("type", sizeof("type") - 1, 1);
	zend_declare_typed_property(class_entry, property_type_name, &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_type_name);

	zval property_window_default_value;
	ZVAL_LONG(&property_window_default_value, 0);
	zend_string *property_window_name = zend_string_init("window", sizeof("window") - 1, 1);
	zend_declare_typed_property(class_entry, property_window_name, &property_window_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_window_name);

	zval property_target_default_value;
	ZVAL_LONG(&property_target_default_value, 0);
	zend_string *property_target_name = zend_string_init("target", sizeof("target") - 1, 1);
	zend_declare_typed_property(class_entry, property_target_name, &property_target_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_target_name);

	zval property_x_default_value;
	ZVAL_DOUBLE(&property_x_default_value, 0.0);
	zend_string *property_x_name = zend_string_init("x", sizeof("x") - 1, 1);
	zend_declare_typed_property(class_entry, property_x_name, &property_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_x_name);

	zval property_y_default_value;
	ZVAL_DOUBLE(&property_y_default_value, 0.0);
	zend_string *property_y_name = zend_string_init("y", sizeof("y") - 1, 1);
	zend_declare_typed_property(class_entry, property_y_name, &property_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_y_name);

	zval property_local_x_default_value;
	ZVAL_DOUBLE(&property_local_x_default_value, 0.0);
	zend_string *property_local_x_name = zend_string_init("local_x", sizeof("local_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_local_x_name, &property_local_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_local_x_name);

	zval property_local_y_default_value;
	ZVAL_DOUBLE(&property_local_y_default_value, 0.0);
	zend_string *property_local_y_name = zend_string_init("local_y", sizeof("local_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_local_y_name, &property_local_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_local_y_name);

	zval property_delta_x_default_value;
	ZVAL_DOUBLE(&property_delta_x_default_value, 0.0);
	zend_string *property_delta_x_name = zend_string_init("delta_x", sizeof("delta_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_delta_x_name, &property_delta_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_delta_x_name);

	zval property_delta_y_default_value;
	ZVAL_DOUBLE(&property_delta_y_default_value, 0.0);
	zend_string *property_delta_y_name = zend_string_init("delta_y", sizeof("delta_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_delta_y_name, &property_delta_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_delta_y_name);

	zval property_wheel_x_default_value;
	ZVAL_DOUBLE(&property_wheel_x_default_value, 0.0);
	zend_string *property_wheel_x_name = zend_string_init("wheel_x", sizeof("wheel_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_wheel_x_name, &property_wheel_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_wheel_x_name);

	zval property_wheel_y_default_value;
	ZVAL_DOUBLE(&property_wheel_y_default_value, 0.0);
	zend_string *property_wheel_y_name = zend_string_init("wheel_y", sizeof("wheel_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_wheel_y_name, &property_wheel_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_wheel_y_name);

	zval property_button_default_value;
	ZVAL_LONG(&property_button_default_value, 0);
	zend_string *property_button_name = zend_string_init("button", sizeof("button") - 1, 1);
	zend_declare_typed_property(class_entry, property_button_name, &property_button_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_button_name);

	zval property_clicks_default_value;
	ZVAL_LONG(&property_clicks_default_value, 0);
	zend_string *property_clicks_name = zend_string_init("clicks", sizeof("clicks") - 1, 1);
	zend_declare_typed_property(class_entry, property_clicks_name, &property_clicks_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_clicks_name);

	zval property_key_default_value;
	ZVAL_LONG(&property_key_default_value, 0);
	zend_string *property_key_name = zend_string_init("key", sizeof("key") - 1, 1);
	zend_declare_typed_property(class_entry, property_key_name, &property_key_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_key_name);

	zval property_modifiers_default_value;
	ZVAL_LONG(&property_modifiers_default_value, 0);
	zend_string *property_modifiers_name = zend_string_init("modifiers", sizeof("modifiers") - 1, 1);
	zend_declare_typed_property(class_entry, property_modifiers_name, &property_modifiers_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_modifiers_name);

	zval property_repeat_default_value;
	ZVAL_LONG(&property_repeat_default_value, 0);
	zend_string *property_repeat_name = zend_string_init("repeat", sizeof("repeat") - 1, 1);
	zend_declare_typed_property(class_entry, property_repeat_name, &property_repeat_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_repeat_name);

	zval property_codepoint_default_value;
	ZVAL_LONG(&property_codepoint_default_value, 0);
	zend_string *property_codepoint_name = zend_string_init("codepoint", sizeof("codepoint") - 1, 1);
	zend_declare_typed_property(class_entry, property_codepoint_name, &property_codepoint_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_codepoint_name);

	zval property_wheel_precise_default_value;
	ZVAL_LONG(&property_wheel_precise_default_value, 0);
	zend_string *property_wheel_precise_name = zend_string_init("wheel_precise", sizeof("wheel_precise") - 1, 1);
	zend_declare_typed_property(class_entry, property_wheel_precise_name, &property_wheel_precise_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_wheel_precise_name);

	return class_entry;
}

static zend_class_entry *register_class_RDropEvent(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RDropEvent", class_RDropEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_phase_default_value;
	ZVAL_LONG(&property_phase_default_value, 0);
	zend_string *property_phase_name = zend_string_init("phase", sizeof("phase") - 1, 1);
	zend_declare_typed_property(class_entry, property_phase_name, &property_phase_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_phase_name);

	zval property_window_default_value;
	ZVAL_LONG(&property_window_default_value, 0);
	zend_string *property_window_name = zend_string_init("window", sizeof("window") - 1, 1);
	zend_declare_typed_property(class_entry, property_window_name, &property_window_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_window_name);

	zval property_x_default_value;
	ZVAL_DOUBLE(&property_x_default_value, 0.0);
	zend_string *property_x_name = zend_string_init("x", sizeof("x") - 1, 1);
	zend_declare_typed_property(class_entry, property_x_name, &property_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_x_name);

	zval property_y_default_value;
	ZVAL_DOUBLE(&property_y_default_value, 0.0);
	zend_string *property_y_name = zend_string_init("y", sizeof("y") - 1, 1);
	zend_declare_typed_property(class_entry, property_y_name, &property_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_y_name);

	zval property_local_x_default_value;
	ZVAL_DOUBLE(&property_local_x_default_value, 0.0);
	zend_string *property_local_x_name = zend_string_init("local_x", sizeof("local_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_local_x_name, &property_local_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_local_x_name);

	zval property_local_y_default_value;
	ZVAL_DOUBLE(&property_local_y_default_value, 0.0);
	zend_string *property_local_y_name = zend_string_init("local_y", sizeof("local_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_local_y_name, &property_local_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_local_y_name);

	zval property_paths_default_value;
	ZVAL_NULL(&property_paths_default_value);
	zend_string *property_paths_name = zend_string_init("paths", sizeof("paths") - 1, 1);
	zend_declare_typed_property(class_entry, property_paths_name, &property_paths_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_paths_name);

	zval property_path_count_default_value;
	ZVAL_LONG(&property_path_count_default_value, 0);
	zend_string *property_path_count_name = zend_string_init("path_count", sizeof("path_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_path_count_name, &property_path_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_path_count_name);

	zval property_text_default_value;
	ZVAL_NULL(&property_text_default_value);
	zend_string *property_text_name = zend_string_init("text", sizeof("text") - 1, 1);
	zend_declare_typed_property(class_entry, property_text_name, &property_text_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_text_name);

	zval property_drag_type_default_value;
	ZVAL_NULL(&property_drag_type_default_value);
	zend_string *property_drag_type_name = zend_string_init("drag_type", sizeof("drag_type") - 1, 1);
	zend_declare_typed_property(class_entry, property_drag_type_name, &property_drag_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_drag_type_name);

	zval property_drag_source_default_value;
	ZVAL_LONG(&property_drag_source_default_value, 0);
	zend_string *property_drag_source_name = zend_string_init("drag_source", sizeof("drag_source") - 1, 1);
	zend_declare_typed_property(class_entry, property_drag_source_name, &property_drag_source_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_drag_source_name);

	return class_entry;
}
