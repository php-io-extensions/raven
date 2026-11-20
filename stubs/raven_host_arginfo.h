/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: afcfbe3e7cf666b707bf0926412f04d1d43caf6c */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_platform_is_active, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_window_set_size, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scale, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_window_set_insets, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, safe_area, RInsets, 1)
	ZEND_ARG_TYPE_INFO(0, keyboard_height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_set_system_dark, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, dark, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_inject_mouse_move, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_inject_mouse_button, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pressed, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_inject_mouse_wheel, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wheel_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, wheel_y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_inject_mouse_leave, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_inject_key, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pressed, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, repeat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_inject_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, codepoint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_inject_composition, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, selection_start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection_end, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_inject_focus, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, focused, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rhost_inject_close arginfo_Rhost_inject_mouse_leave

ZEND_FUNCTION(Rhost_platform_is_active);
ZEND_FUNCTION(Rhost_window_set_size);
ZEND_FUNCTION(Rhost_window_set_insets);
ZEND_FUNCTION(Rhost_set_system_dark);
ZEND_FUNCTION(Rhost_inject_mouse_move);
ZEND_FUNCTION(Rhost_inject_mouse_button);
ZEND_FUNCTION(Rhost_inject_mouse_wheel);
ZEND_FUNCTION(Rhost_inject_mouse_leave);
ZEND_FUNCTION(Rhost_inject_key);
ZEND_FUNCTION(Rhost_inject_text);
ZEND_FUNCTION(Rhost_inject_composition);
ZEND_FUNCTION(Rhost_inject_focus);
ZEND_FUNCTION(Rhost_inject_close);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rhost_platform_is_active, arginfo_Rhost_platform_is_active)
	ZEND_FE(Rhost_window_set_size, arginfo_Rhost_window_set_size)
	ZEND_FE(Rhost_window_set_insets, arginfo_Rhost_window_set_insets)
	ZEND_FE(Rhost_set_system_dark, arginfo_Rhost_set_system_dark)
	ZEND_FE(Rhost_inject_mouse_move, arginfo_Rhost_inject_mouse_move)
	ZEND_FE(Rhost_inject_mouse_button, arginfo_Rhost_inject_mouse_button)
	ZEND_FE(Rhost_inject_mouse_wheel, arginfo_Rhost_inject_mouse_wheel)
	ZEND_FE(Rhost_inject_mouse_leave, arginfo_Rhost_inject_mouse_leave)
	ZEND_FE(Rhost_inject_key, arginfo_Rhost_inject_key)
	ZEND_FE(Rhost_inject_text, arginfo_Rhost_inject_text)
	ZEND_FE(Rhost_inject_composition, arginfo_Rhost_inject_composition)
	ZEND_FE(Rhost_inject_focus, arginfo_Rhost_inject_focus)
	ZEND_FE(Rhost_inject_close, arginfo_Rhost_inject_close)
	ZEND_FE_END
};
