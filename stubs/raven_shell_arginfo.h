/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: eec999a1d3067adc80c910a0e307c3d2841e5a22 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rheader_bar_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rheader_bar_set_title, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rheader_bar_set_buttons, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rheader_bar_set_button_side, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, side, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rheader_bar_set_title_align, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, align, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rheader_bar_set_title_notch, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rheader_bar_set_background, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_add_panel, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, side, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, relative, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_move_panel, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, side, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, relative, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_close_panel, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_set_panel_title, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_set_panel_icon, 0, 8, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, u0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, u1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, tint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_set_panel_closable, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, closable, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rdock_area_hide_panel arginfo_Rdock_area_close_panel

#define arginfo_Rdock_area_open_panel arginfo_Rdock_area_close_panel

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_is_panel_open, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_set_close_hides, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hides, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rdock_area_show_panel arginfo_Rdock_area_close_panel

#define arginfo_Rdock_area_is_panel_shown arginfo_Rdock_area_is_panel_open

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_set_movable, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_save_layout, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_load_layout, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_set_close_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_set_tearable, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tearable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_is_tearable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_set_float_mode, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdock_area_float_panel, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rdock_area_dock_panel arginfo_Rdock_area_close_panel

#define arginfo_Rdock_area_get_panel_window arginfo_Rdock_area_is_panel_open

#define arginfo_Rdock_area_set_changed_callback arginfo_Rdock_area_set_close_callback

#define arginfo_Risland_create arginfo_Rdock_area_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Risland_set_expanded, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, island, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expanded, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Risland_is_expanded, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, island, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Risland_expand_for, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, island, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Risland_set_expand_on_hover, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, island, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Risland_set_expand_on_click arginfo_Risland_set_expand_on_hover

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Risland_set_attached, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, island, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attached, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Risland_set_notch arginfo_Risland_set_expand_on_hover

#define arginfo_Risland_get_notch arginfo_Risland_is_expanded

#define arginfo_Risland_is_in_notch arginfo_Risland_is_expanded

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Risland_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, island, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_island, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_island, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_taskbar_progress, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_request_attention, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, critical, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtaskbar_set_badge, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtaskbar_set_menu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtaskbar_set_jump_list, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tasks, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtray_is_supported arginfo_Rdock_area_create

#define arginfo_Rtray_create arginfo_Rdock_area_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtray_destroy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tray, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtray_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tray, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtray_set_icon, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tray, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtray_set_tooltip, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tray, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtray_set_menu, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tray, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtray_set_clicked_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tray, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtray_set_title arginfo_Rtray_set_tooltip

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtray_get_rect, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tray, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RJumpTask___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, title, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, arguments, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, description, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rheader_bar_create);
ZEND_FUNCTION(Rheader_bar_set_title);
ZEND_FUNCTION(Rheader_bar_set_buttons);
ZEND_FUNCTION(Rheader_bar_set_button_side);
ZEND_FUNCTION(Rheader_bar_set_title_align);
ZEND_FUNCTION(Rheader_bar_set_title_notch);
ZEND_FUNCTION(Rheader_bar_set_background);
ZEND_FUNCTION(Rdock_area_create);
ZEND_FUNCTION(Rdock_area_add_panel);
ZEND_FUNCTION(Rdock_area_move_panel);
ZEND_FUNCTION(Rdock_area_close_panel);
ZEND_FUNCTION(Rdock_area_set_panel_title);
ZEND_FUNCTION(Rdock_area_set_panel_icon);
ZEND_FUNCTION(Rdock_area_set_panel_closable);
ZEND_FUNCTION(Rdock_area_hide_panel);
ZEND_FUNCTION(Rdock_area_open_panel);
ZEND_FUNCTION(Rdock_area_is_panel_open);
ZEND_FUNCTION(Rdock_area_set_close_hides);
ZEND_FUNCTION(Rdock_area_show_panel);
ZEND_FUNCTION(Rdock_area_is_panel_shown);
ZEND_FUNCTION(Rdock_area_set_movable);
ZEND_FUNCTION(Rdock_area_save_layout);
ZEND_FUNCTION(Rdock_area_load_layout);
ZEND_FUNCTION(Rdock_area_set_close_callback);
ZEND_FUNCTION(Rdock_area_set_tearable);
ZEND_FUNCTION(Rdock_area_is_tearable);
ZEND_FUNCTION(Rdock_area_set_float_mode);
ZEND_FUNCTION(Rdock_area_float_panel);
ZEND_FUNCTION(Rdock_area_dock_panel);
ZEND_FUNCTION(Rdock_area_get_panel_window);
ZEND_FUNCTION(Rdock_area_set_changed_callback);
ZEND_FUNCTION(Risland_create);
ZEND_FUNCTION(Risland_set_expanded);
ZEND_FUNCTION(Risland_is_expanded);
ZEND_FUNCTION(Risland_expand_for);
ZEND_FUNCTION(Risland_set_expand_on_hover);
ZEND_FUNCTION(Risland_set_expand_on_click);
ZEND_FUNCTION(Risland_set_attached);
ZEND_FUNCTION(Risland_set_notch);
ZEND_FUNCTION(Risland_get_notch);
ZEND_FUNCTION(Risland_is_in_notch);
ZEND_FUNCTION(Risland_set_changed_callback);
ZEND_FUNCTION(Rwindow_set_island);
ZEND_FUNCTION(Rwindow_get_island);
ZEND_FUNCTION(Rwindow_set_taskbar_progress);
ZEND_FUNCTION(Rwindow_request_attention);
ZEND_FUNCTION(Rtaskbar_set_badge);
ZEND_FUNCTION(Rtaskbar_set_menu);
ZEND_FUNCTION(Rtaskbar_set_jump_list);
ZEND_FUNCTION(Rtray_is_supported);
ZEND_FUNCTION(Rtray_create);
ZEND_FUNCTION(Rtray_destroy);
ZEND_FUNCTION(Rtray_is_valid);
ZEND_FUNCTION(Rtray_set_icon);
ZEND_FUNCTION(Rtray_set_tooltip);
ZEND_FUNCTION(Rtray_set_menu);
ZEND_FUNCTION(Rtray_set_clicked_callback);
ZEND_FUNCTION(Rtray_set_title);
ZEND_FUNCTION(Rtray_get_rect);
ZEND_METHOD(RJumpTask, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rheader_bar_create, arginfo_Rheader_bar_create)
	ZEND_FE(Rheader_bar_set_title, arginfo_Rheader_bar_set_title)
	ZEND_FE(Rheader_bar_set_buttons, arginfo_Rheader_bar_set_buttons)
	ZEND_FE(Rheader_bar_set_button_side, arginfo_Rheader_bar_set_button_side)
	ZEND_FE(Rheader_bar_set_title_align, arginfo_Rheader_bar_set_title_align)
	ZEND_FE(Rheader_bar_set_title_notch, arginfo_Rheader_bar_set_title_notch)
	ZEND_FE(Rheader_bar_set_background, arginfo_Rheader_bar_set_background)
	ZEND_FE(Rdock_area_create, arginfo_Rdock_area_create)
	ZEND_FE(Rdock_area_add_panel, arginfo_Rdock_area_add_panel)
	ZEND_FE(Rdock_area_move_panel, arginfo_Rdock_area_move_panel)
	ZEND_FE(Rdock_area_close_panel, arginfo_Rdock_area_close_panel)
	ZEND_FE(Rdock_area_set_panel_title, arginfo_Rdock_area_set_panel_title)
	ZEND_FE(Rdock_area_set_panel_icon, arginfo_Rdock_area_set_panel_icon)
	ZEND_FE(Rdock_area_set_panel_closable, arginfo_Rdock_area_set_panel_closable)
	ZEND_FE(Rdock_area_hide_panel, arginfo_Rdock_area_hide_panel)
	ZEND_FE(Rdock_area_open_panel, arginfo_Rdock_area_open_panel)
	ZEND_FE(Rdock_area_is_panel_open, arginfo_Rdock_area_is_panel_open)
	ZEND_FE(Rdock_area_set_close_hides, arginfo_Rdock_area_set_close_hides)
	ZEND_FE(Rdock_area_show_panel, arginfo_Rdock_area_show_panel)
	ZEND_FE(Rdock_area_is_panel_shown, arginfo_Rdock_area_is_panel_shown)
	ZEND_FE(Rdock_area_set_movable, arginfo_Rdock_area_set_movable)
	ZEND_FE(Rdock_area_save_layout, arginfo_Rdock_area_save_layout)
	ZEND_FE(Rdock_area_load_layout, arginfo_Rdock_area_load_layout)
	ZEND_FE(Rdock_area_set_close_callback, arginfo_Rdock_area_set_close_callback)
	ZEND_FE(Rdock_area_set_tearable, arginfo_Rdock_area_set_tearable)
	ZEND_FE(Rdock_area_is_tearable, arginfo_Rdock_area_is_tearable)
	ZEND_FE(Rdock_area_set_float_mode, arginfo_Rdock_area_set_float_mode)
	ZEND_FE(Rdock_area_float_panel, arginfo_Rdock_area_float_panel)
	ZEND_FE(Rdock_area_dock_panel, arginfo_Rdock_area_dock_panel)
	ZEND_FE(Rdock_area_get_panel_window, arginfo_Rdock_area_get_panel_window)
	ZEND_FE(Rdock_area_set_changed_callback, arginfo_Rdock_area_set_changed_callback)
	ZEND_FE(Risland_create, arginfo_Risland_create)
	ZEND_FE(Risland_set_expanded, arginfo_Risland_set_expanded)
	ZEND_FE(Risland_is_expanded, arginfo_Risland_is_expanded)
	ZEND_FE(Risland_expand_for, arginfo_Risland_expand_for)
	ZEND_FE(Risland_set_expand_on_hover, arginfo_Risland_set_expand_on_hover)
	ZEND_FE(Risland_set_expand_on_click, arginfo_Risland_set_expand_on_click)
	ZEND_FE(Risland_set_attached, arginfo_Risland_set_attached)
	ZEND_FE(Risland_set_notch, arginfo_Risland_set_notch)
	ZEND_FE(Risland_get_notch, arginfo_Risland_get_notch)
	ZEND_FE(Risland_is_in_notch, arginfo_Risland_is_in_notch)
	ZEND_FE(Risland_set_changed_callback, arginfo_Risland_set_changed_callback)
	ZEND_FE(Rwindow_set_island, arginfo_Rwindow_set_island)
	ZEND_FE(Rwindow_get_island, arginfo_Rwindow_get_island)
	ZEND_FE(Rwindow_set_taskbar_progress, arginfo_Rwindow_set_taskbar_progress)
	ZEND_FE(Rwindow_request_attention, arginfo_Rwindow_request_attention)
	ZEND_FE(Rtaskbar_set_badge, arginfo_Rtaskbar_set_badge)
	ZEND_FE(Rtaskbar_set_menu, arginfo_Rtaskbar_set_menu)
	ZEND_FE(Rtaskbar_set_jump_list, arginfo_Rtaskbar_set_jump_list)
	ZEND_FE(Rtray_is_supported, arginfo_Rtray_is_supported)
	ZEND_FE(Rtray_create, arginfo_Rtray_create)
	ZEND_FE(Rtray_destroy, arginfo_Rtray_destroy)
	ZEND_FE(Rtray_is_valid, arginfo_Rtray_is_valid)
	ZEND_FE(Rtray_set_icon, arginfo_Rtray_set_icon)
	ZEND_FE(Rtray_set_tooltip, arginfo_Rtray_set_tooltip)
	ZEND_FE(Rtray_set_menu, arginfo_Rtray_set_menu)
	ZEND_FE(Rtray_set_clicked_callback, arginfo_Rtray_set_clicked_callback)
	ZEND_FE(Rtray_set_title, arginfo_Rtray_set_title)
	ZEND_FE(Rtray_get_rect, arginfo_Rtray_get_rect)
	ZEND_FE_END
};

static const zend_function_entry class_RJumpTask_methods[] = {
	ZEND_ME(RJumpTask, __construct, arginfo_class_RJumpTask___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_shell_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_HEADER_NO_BUTTONS", R_HEADER_NO_BUTTONS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HEADER_CLOSE", R_HEADER_CLOSE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HEADER_MINIMIZE", R_HEADER_MINIMIZE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HEADER_MAXIMIZE", R_HEADER_MAXIMIZE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HEADER_ALL_BUTTONS", R_HEADER_ALL_BUTTONS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TASKBAR_PROGRESS_NONE", R_TASKBAR_PROGRESS_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TASKBAR_PROGRESS_NORMAL", R_TASKBAR_PROGRESS_NORMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TASKBAR_PROGRESS_PAUSED", R_TASKBAR_PROGRESS_PAUSED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TASKBAR_PROGRESS_ERROR", R_TASKBAR_PROGRESS_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TASKBAR_PROGRESS_INDETERMINATE", R_TASKBAR_PROGRESS_INDETERMINATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DOCK_LEFT", R_DOCK_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DOCK_RIGHT", R_DOCK_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DOCK_TOP", R_DOCK_TOP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DOCK_BOTTOM", R_DOCK_BOTTOM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DOCK_TAB", R_DOCK_TAB, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DOCK_FLOAT_WINDOW", R_DOCK_FLOAT_WINDOW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DOCK_FLOAT_IN_WINDOW", R_DOCK_FLOAT_IN_WINDOW, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RJumpTask(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RJumpTask", class_RJumpTask_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_title_default_value;
	ZVAL_NULL(&property_title_default_value);
	zend_string *property_title_name = zend_string_init("title", sizeof("title") - 1, 1);
	zend_declare_typed_property(class_entry, property_title_name, &property_title_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_title_name);

	zval property_arguments_default_value;
	ZVAL_NULL(&property_arguments_default_value);
	zend_string *property_arguments_name = zend_string_init("arguments", sizeof("arguments") - 1, 1);
	zend_declare_typed_property(class_entry, property_arguments_name, &property_arguments_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_arguments_name);

	zval property_description_default_value;
	ZVAL_NULL(&property_description_default_value);
	zend_string *property_description_name = zend_string_init("description", sizeof("description") - 1, 1);
	zend_declare_typed_property(class_entry, property_description_name, &property_description_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_description_name);

	return class_entry;
}
