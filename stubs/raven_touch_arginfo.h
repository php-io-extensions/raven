/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 8c5e73057f6f467a55b5b993120e260c51824686 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtouch_get_settings, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, settings, RTouchSettings, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtouch_set_settings arginfo_Rtouch_get_settings

#define arginfo_Rtouch_get_default_settings arginfo_Rtouch_get_settings

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_set_touch_settings, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, settings, RTouchSettings, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_get_touch_settings arginfo_Rwindow_set_touch_settings

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_touch_mode, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_touch_mode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_touch_gestures, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_get_touch_gestures arginfo_Rwidget_get_touch_mode

#define arginfo_Rwidget_set_pen_mouse arginfo_Rwidget_set_touch_gestures

#define arginfo_Rwidget_get_pen_mouse arginfo_Rwidget_get_touch_mode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_touch_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_set_pen_callback arginfo_Rwidget_set_touch_callback

#define arginfo_Rwidget_set_gesture_callback arginfo_Rwidget_set_touch_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_touch_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwindow_is_pen_in_range arginfo_Rwindow_get_touch_count

#define arginfo_Rwindow_is_touch_active arginfo_Rwindow_get_touch_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_touch, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, phase, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_pen, 0, 9, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, phase, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pressure, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, tilt_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, tilt_y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eraser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_trackpad_gesture, 0, 10, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, phase, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scale_delta, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rotation_delta, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pan_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pan_y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fingers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_trackpad_scroll, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_inject_trackpad_scroll_end, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_advance_touch, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RTouchSettings___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mouse_emulation, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, slop, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, long_press, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, inertia, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, deceleration, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, gestures, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pen_mouse_emulation, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pressure_curve, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pressure_threshold, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, palm_rejection, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, trackpad_gestures, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, swipe_navigation, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, swipe_distance, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, min_touch_size, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RTouchEvent___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, phase, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, target, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, id, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pressure, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, modifiers, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RPenEvent___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, phase, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, target, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pressure, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, raw_pressure, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, tilt_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, tilt_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rotation, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, eraser, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, buttons, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, modifiers, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RGestureEvent___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, phase, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, target, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, local_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, scale, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, scale_delta, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pan_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pan_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rotation, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, kind, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, device, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, fingers, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, total_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, total_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rotation_delta, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, cancelled, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rtouch_get_settings);
ZEND_FUNCTION(Rtouch_set_settings);
ZEND_FUNCTION(Rtouch_get_default_settings);
ZEND_FUNCTION(Rwindow_set_touch_settings);
ZEND_FUNCTION(Rwindow_get_touch_settings);
ZEND_FUNCTION(Rwidget_set_touch_mode);
ZEND_FUNCTION(Rwidget_get_touch_mode);
ZEND_FUNCTION(Rwidget_set_touch_gestures);
ZEND_FUNCTION(Rwidget_get_touch_gestures);
ZEND_FUNCTION(Rwidget_set_pen_mouse);
ZEND_FUNCTION(Rwidget_get_pen_mouse);
ZEND_FUNCTION(Rwidget_set_touch_callback);
ZEND_FUNCTION(Rwidget_set_pen_callback);
ZEND_FUNCTION(Rwidget_set_gesture_callback);
ZEND_FUNCTION(Rwindow_get_touch_count);
ZEND_FUNCTION(Rwindow_is_pen_in_range);
ZEND_FUNCTION(Rwindow_is_touch_active);
ZEND_FUNCTION(Rwindow_inject_touch);
ZEND_FUNCTION(Rwindow_inject_pen);
ZEND_FUNCTION(Rwindow_inject_trackpad_gesture);
ZEND_FUNCTION(Rwindow_inject_trackpad_scroll);
ZEND_FUNCTION(Rwindow_inject_trackpad_scroll_end);
ZEND_FUNCTION(Rwindow_advance_touch);
ZEND_METHOD(RTouchSettings, __construct);
ZEND_METHOD(RTouchEvent, __construct);
ZEND_METHOD(RPenEvent, __construct);
ZEND_METHOD(RGestureEvent, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rtouch_get_settings, arginfo_Rtouch_get_settings)
	ZEND_FE(Rtouch_set_settings, arginfo_Rtouch_set_settings)
	ZEND_FE(Rtouch_get_default_settings, arginfo_Rtouch_get_default_settings)
	ZEND_FE(Rwindow_set_touch_settings, arginfo_Rwindow_set_touch_settings)
	ZEND_FE(Rwindow_get_touch_settings, arginfo_Rwindow_get_touch_settings)
	ZEND_FE(Rwidget_set_touch_mode, arginfo_Rwidget_set_touch_mode)
	ZEND_FE(Rwidget_get_touch_mode, arginfo_Rwidget_get_touch_mode)
	ZEND_FE(Rwidget_set_touch_gestures, arginfo_Rwidget_set_touch_gestures)
	ZEND_FE(Rwidget_get_touch_gestures, arginfo_Rwidget_get_touch_gestures)
	ZEND_FE(Rwidget_set_pen_mouse, arginfo_Rwidget_set_pen_mouse)
	ZEND_FE(Rwidget_get_pen_mouse, arginfo_Rwidget_get_pen_mouse)
	ZEND_FE(Rwidget_set_touch_callback, arginfo_Rwidget_set_touch_callback)
	ZEND_FE(Rwidget_set_pen_callback, arginfo_Rwidget_set_pen_callback)
	ZEND_FE(Rwidget_set_gesture_callback, arginfo_Rwidget_set_gesture_callback)
	ZEND_FE(Rwindow_get_touch_count, arginfo_Rwindow_get_touch_count)
	ZEND_FE(Rwindow_is_pen_in_range, arginfo_Rwindow_is_pen_in_range)
	ZEND_FE(Rwindow_is_touch_active, arginfo_Rwindow_is_touch_active)
	ZEND_FE(Rwindow_inject_touch, arginfo_Rwindow_inject_touch)
	ZEND_FE(Rwindow_inject_pen, arginfo_Rwindow_inject_pen)
	ZEND_FE(Rwindow_inject_trackpad_gesture, arginfo_Rwindow_inject_trackpad_gesture)
	ZEND_FE(Rwindow_inject_trackpad_scroll, arginfo_Rwindow_inject_trackpad_scroll)
	ZEND_FE(Rwindow_inject_trackpad_scroll_end, arginfo_Rwindow_inject_trackpad_scroll_end)
	ZEND_FE(Rwindow_advance_touch, arginfo_Rwindow_advance_touch)
	ZEND_FE_END
};

static const zend_function_entry class_RTouchSettings_methods[] = {
	ZEND_ME(RTouchSettings, __construct, arginfo_class_RTouchSettings___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RTouchEvent_methods[] = {
	ZEND_ME(RTouchEvent, __construct, arginfo_class_RTouchEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RPenEvent_methods[] = {
	ZEND_ME(RPenEvent, __construct, arginfo_class_RPenEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RGestureEvent_methods[] = {
	ZEND_ME(RGestureEvent, __construct, arginfo_class_RGestureEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_touch_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_TOUCH_MODE_AUTO", R_TOUCH_MODE_AUTO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOUCH_MODE_SCROLL", R_TOUCH_MODE_SCROLL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOUCH_MODE_MOUSE", R_TOUCH_MODE_MOUSE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOUCH_MODE_NONE", R_TOUCH_MODE_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOUCH_DOWN", R_TOUCH_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOUCH_MOVE", R_TOUCH_MOVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOUCH_UP", R_TOUCH_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOUCH_CANCEL", R_TOUCH_CANCEL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PEN_DOWN", R_PEN_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PEN_MOVE", R_PEN_MOVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PEN_UP", R_PEN_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PEN_HOVER", R_PEN_HOVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PEN_LEAVE", R_PEN_LEAVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PEN_BUTTON_BARREL", R_PEN_BUTTON_BARREL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PEN_BUTTON_BARREL2", R_PEN_BUTTON_BARREL2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GESTURE_BEGIN", R_GESTURE_BEGIN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GESTURE_UPDATE", R_GESTURE_UPDATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GESTURE_END", R_GESTURE_END, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GESTURE_PINCH", R_GESTURE_PINCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GESTURE_SWIPE", R_GESTURE_SWIPE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GESTURE_DEVICE_TOUCHSCREEN", R_GESTURE_DEVICE_TOUCHSCREEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GESTURE_DEVICE_TRACKPAD", R_GESTURE_DEVICE_TRACKPAD, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RTouchSettings(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RTouchSettings", class_RTouchSettings_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_mouse_emulation_default_value;
	ZVAL_LONG(&property_mouse_emulation_default_value, 0);
	zend_string *property_mouse_emulation_name = zend_string_init("mouse_emulation", sizeof("mouse_emulation") - 1, 1);
	zend_declare_typed_property(class_entry, property_mouse_emulation_name, &property_mouse_emulation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_mouse_emulation_name);

	zval property_slop_default_value;
	ZVAL_DOUBLE(&property_slop_default_value, 0.0);
	zend_string *property_slop_name = zend_string_init("slop", sizeof("slop") - 1, 1);
	zend_declare_typed_property(class_entry, property_slop_name, &property_slop_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_slop_name);

	zval property_long_press_default_value;
	ZVAL_DOUBLE(&property_long_press_default_value, 0.0);
	zend_string *property_long_press_name = zend_string_init("long_press", sizeof("long_press") - 1, 1);
	zend_declare_typed_property(class_entry, property_long_press_name, &property_long_press_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_long_press_name);

	zval property_inertia_default_value;
	ZVAL_LONG(&property_inertia_default_value, 0);
	zend_string *property_inertia_name = zend_string_init("inertia", sizeof("inertia") - 1, 1);
	zend_declare_typed_property(class_entry, property_inertia_name, &property_inertia_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_inertia_name);

	zval property_deceleration_default_value;
	ZVAL_DOUBLE(&property_deceleration_default_value, 0.0);
	zend_string *property_deceleration_name = zend_string_init("deceleration", sizeof("deceleration") - 1, 1);
	zend_declare_typed_property(class_entry, property_deceleration_name, &property_deceleration_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_deceleration_name);

	zval property_gestures_default_value;
	ZVAL_LONG(&property_gestures_default_value, 0);
	zend_string *property_gestures_name = zend_string_init("gestures", sizeof("gestures") - 1, 1);
	zend_declare_typed_property(class_entry, property_gestures_name, &property_gestures_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_gestures_name);

	zval property_pen_mouse_emulation_default_value;
	ZVAL_LONG(&property_pen_mouse_emulation_default_value, 0);
	zend_string *property_pen_mouse_emulation_name = zend_string_init("pen_mouse_emulation", sizeof("pen_mouse_emulation") - 1, 1);
	zend_declare_typed_property(class_entry, property_pen_mouse_emulation_name, &property_pen_mouse_emulation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pen_mouse_emulation_name);

	zval property_pressure_curve_default_value;
	ZVAL_DOUBLE(&property_pressure_curve_default_value, 0.0);
	zend_string *property_pressure_curve_name = zend_string_init("pressure_curve", sizeof("pressure_curve") - 1, 1);
	zend_declare_typed_property(class_entry, property_pressure_curve_name, &property_pressure_curve_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_pressure_curve_name);

	zval property_pressure_threshold_default_value;
	ZVAL_DOUBLE(&property_pressure_threshold_default_value, 0.0);
	zend_string *property_pressure_threshold_name = zend_string_init("pressure_threshold", sizeof("pressure_threshold") - 1, 1);
	zend_declare_typed_property(class_entry, property_pressure_threshold_name, &property_pressure_threshold_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_pressure_threshold_name);

	zval property_palm_rejection_default_value;
	ZVAL_LONG(&property_palm_rejection_default_value, 0);
	zend_string *property_palm_rejection_name = zend_string_init("palm_rejection", sizeof("palm_rejection") - 1, 1);
	zend_declare_typed_property(class_entry, property_palm_rejection_name, &property_palm_rejection_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_palm_rejection_name);

	zval property_trackpad_gestures_default_value;
	ZVAL_LONG(&property_trackpad_gestures_default_value, 0);
	zend_string *property_trackpad_gestures_name = zend_string_init("trackpad_gestures", sizeof("trackpad_gestures") - 1, 1);
	zend_declare_typed_property(class_entry, property_trackpad_gestures_name, &property_trackpad_gestures_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_trackpad_gestures_name);

	zval property_swipe_navigation_default_value;
	ZVAL_LONG(&property_swipe_navigation_default_value, 0);
	zend_string *property_swipe_navigation_name = zend_string_init("swipe_navigation", sizeof("swipe_navigation") - 1, 1);
	zend_declare_typed_property(class_entry, property_swipe_navigation_name, &property_swipe_navigation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_swipe_navigation_name);

	zval property_swipe_distance_default_value;
	ZVAL_DOUBLE(&property_swipe_distance_default_value, 0.0);
	zend_string *property_swipe_distance_name = zend_string_init("swipe_distance", sizeof("swipe_distance") - 1, 1);
	zend_declare_typed_property(class_entry, property_swipe_distance_name, &property_swipe_distance_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_swipe_distance_name);

	zval property_min_touch_size_default_value;
	ZVAL_DOUBLE(&property_min_touch_size_default_value, 0.0);
	zend_string *property_min_touch_size_name = zend_string_init("min_touch_size", sizeof("min_touch_size") - 1, 1);
	zend_declare_typed_property(class_entry, property_min_touch_size_name, &property_min_touch_size_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_min_touch_size_name);

	return class_entry;
}

static zend_class_entry *register_class_RTouchEvent(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RTouchEvent", class_RTouchEvent_methods);
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

	zval property_target_default_value;
	ZVAL_LONG(&property_target_default_value, 0);
	zend_string *property_target_name = zend_string_init("target", sizeof("target") - 1, 1);
	zend_declare_typed_property(class_entry, property_target_name, &property_target_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_target_name);

	zval property_id_default_value;
	ZVAL_LONG(&property_id_default_value, 0);
	zend_string *property_id_name = zend_string_init("id", sizeof("id") - 1, 1);
	zend_declare_typed_property(class_entry, property_id_name, &property_id_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_id_name);

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

	zval property_pressure_default_value;
	ZVAL_DOUBLE(&property_pressure_default_value, 0.0);
	zend_string *property_pressure_name = zend_string_init("pressure", sizeof("pressure") - 1, 1);
	zend_declare_typed_property(class_entry, property_pressure_name, &property_pressure_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_pressure_name);

	zval property_width_default_value;
	ZVAL_DOUBLE(&property_width_default_value, 0.0);
	zend_string *property_width_name = zend_string_init("width", sizeof("width") - 1, 1);
	zend_declare_typed_property(class_entry, property_width_name, &property_width_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_width_name);

	zval property_height_default_value;
	ZVAL_DOUBLE(&property_height_default_value, 0.0);
	zend_string *property_height_name = zend_string_init("height", sizeof("height") - 1, 1);
	zend_declare_typed_property(class_entry, property_height_name, &property_height_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_height_name);

	zval property_count_default_value;
	ZVAL_LONG(&property_count_default_value, 0);
	zend_string *property_count_name = zend_string_init("count", sizeof("count") - 1, 1);
	zend_declare_typed_property(class_entry, property_count_name, &property_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_count_name);

	zval property_modifiers_default_value;
	ZVAL_LONG(&property_modifiers_default_value, 0);
	zend_string *property_modifiers_name = zend_string_init("modifiers", sizeof("modifiers") - 1, 1);
	zend_declare_typed_property(class_entry, property_modifiers_name, &property_modifiers_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_modifiers_name);

	return class_entry;
}

static zend_class_entry *register_class_RPenEvent(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RPenEvent", class_RPenEvent_methods);
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

	zval property_pressure_default_value;
	ZVAL_DOUBLE(&property_pressure_default_value, 0.0);
	zend_string *property_pressure_name = zend_string_init("pressure", sizeof("pressure") - 1, 1);
	zend_declare_typed_property(class_entry, property_pressure_name, &property_pressure_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_pressure_name);

	zval property_raw_pressure_default_value;
	ZVAL_DOUBLE(&property_raw_pressure_default_value, 0.0);
	zend_string *property_raw_pressure_name = zend_string_init("raw_pressure", sizeof("raw_pressure") - 1, 1);
	zend_declare_typed_property(class_entry, property_raw_pressure_name, &property_raw_pressure_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_raw_pressure_name);

	zval property_tilt_x_default_value;
	ZVAL_DOUBLE(&property_tilt_x_default_value, 0.0);
	zend_string *property_tilt_x_name = zend_string_init("tilt_x", sizeof("tilt_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_tilt_x_name, &property_tilt_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_tilt_x_name);

	zval property_tilt_y_default_value;
	ZVAL_DOUBLE(&property_tilt_y_default_value, 0.0);
	zend_string *property_tilt_y_name = zend_string_init("tilt_y", sizeof("tilt_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_tilt_y_name, &property_tilt_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_tilt_y_name);

	zval property_rotation_default_value;
	ZVAL_DOUBLE(&property_rotation_default_value, 0.0);
	zend_string *property_rotation_name = zend_string_init("rotation", sizeof("rotation") - 1, 1);
	zend_declare_typed_property(class_entry, property_rotation_name, &property_rotation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_rotation_name);

	zval property_eraser_default_value;
	ZVAL_LONG(&property_eraser_default_value, 0);
	zend_string *property_eraser_name = zend_string_init("eraser", sizeof("eraser") - 1, 1);
	zend_declare_typed_property(class_entry, property_eraser_name, &property_eraser_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_eraser_name);

	zval property_buttons_default_value;
	ZVAL_LONG(&property_buttons_default_value, 0);
	zend_string *property_buttons_name = zend_string_init("buttons", sizeof("buttons") - 1, 1);
	zend_declare_typed_property(class_entry, property_buttons_name, &property_buttons_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_buttons_name);

	zval property_modifiers_default_value;
	ZVAL_LONG(&property_modifiers_default_value, 0);
	zend_string *property_modifiers_name = zend_string_init("modifiers", sizeof("modifiers") - 1, 1);
	zend_declare_typed_property(class_entry, property_modifiers_name, &property_modifiers_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_modifiers_name);

	return class_entry;
}

static zend_class_entry *register_class_RGestureEvent(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RGestureEvent", class_RGestureEvent_methods);
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

	zval property_scale_default_value;
	ZVAL_DOUBLE(&property_scale_default_value, 0.0);
	zend_string *property_scale_name = zend_string_init("scale", sizeof("scale") - 1, 1);
	zend_declare_typed_property(class_entry, property_scale_name, &property_scale_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_scale_name);

	zval property_scale_delta_default_value;
	ZVAL_DOUBLE(&property_scale_delta_default_value, 0.0);
	zend_string *property_scale_delta_name = zend_string_init("scale_delta", sizeof("scale_delta") - 1, 1);
	zend_declare_typed_property(class_entry, property_scale_delta_name, &property_scale_delta_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_scale_delta_name);

	zval property_pan_x_default_value;
	ZVAL_DOUBLE(&property_pan_x_default_value, 0.0);
	zend_string *property_pan_x_name = zend_string_init("pan_x", sizeof("pan_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_pan_x_name, &property_pan_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_pan_x_name);

	zval property_pan_y_default_value;
	ZVAL_DOUBLE(&property_pan_y_default_value, 0.0);
	zend_string *property_pan_y_name = zend_string_init("pan_y", sizeof("pan_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_pan_y_name, &property_pan_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_pan_y_name);

	zval property_rotation_default_value;
	ZVAL_DOUBLE(&property_rotation_default_value, 0.0);
	zend_string *property_rotation_name = zend_string_init("rotation", sizeof("rotation") - 1, 1);
	zend_declare_typed_property(class_entry, property_rotation_name, &property_rotation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_rotation_name);

	zval property_kind_default_value;
	ZVAL_LONG(&property_kind_default_value, 0);
	zend_string *property_kind_name = zend_string_init("kind", sizeof("kind") - 1, 1);
	zend_declare_typed_property(class_entry, property_kind_name, &property_kind_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_kind_name);

	zval property_device_default_value;
	ZVAL_LONG(&property_device_default_value, 0);
	zend_string *property_device_name = zend_string_init("device", sizeof("device") - 1, 1);
	zend_declare_typed_property(class_entry, property_device_name, &property_device_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_device_name);

	zval property_fingers_default_value;
	ZVAL_LONG(&property_fingers_default_value, 0);
	zend_string *property_fingers_name = zend_string_init("fingers", sizeof("fingers") - 1, 1);
	zend_declare_typed_property(class_entry, property_fingers_name, &property_fingers_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_fingers_name);

	zval property_total_x_default_value;
	ZVAL_DOUBLE(&property_total_x_default_value, 0.0);
	zend_string *property_total_x_name = zend_string_init("total_x", sizeof("total_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_total_x_name, &property_total_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_total_x_name);

	zval property_total_y_default_value;
	ZVAL_DOUBLE(&property_total_y_default_value, 0.0);
	zend_string *property_total_y_name = zend_string_init("total_y", sizeof("total_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_total_y_name, &property_total_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_total_y_name);

	zval property_rotation_delta_default_value;
	ZVAL_DOUBLE(&property_rotation_delta_default_value, 0.0);
	zend_string *property_rotation_delta_name = zend_string_init("rotation_delta", sizeof("rotation_delta") - 1, 1);
	zend_declare_typed_property(class_entry, property_rotation_delta_name, &property_rotation_delta_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_rotation_delta_name);

	zval property_cancelled_default_value;
	ZVAL_LONG(&property_cancelled_default_value, 0);
	zend_string *property_cancelled_name = zend_string_init("cancelled", sizeof("cancelled") - 1, 1);
	zend_declare_typed_property(class_entry, property_cancelled_name, &property_cancelled_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_cancelled_name);

	return class_entry;
}
