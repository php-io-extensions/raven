/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: b08fa646b89cbfe2763bbf244ebf205bffe626d4 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raccessibility_set_text_scale, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, scale, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raccessibility_get_text_scale, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raccessibility_set_high_contrast, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raccessibility_get_high_contrast, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Raccessibility_set_focus_always_visible arginfo_Raccessibility_set_high_contrast

#define arginfo_Raccessibility_get_focus_always_visible arginfo_Raccessibility_get_high_contrast

#define arginfo_Raccessibility_set_reduce_motion arginfo_Raccessibility_set_high_contrast

#define arginfo_Raccessibility_get_reduce_motion arginfo_Raccessibility_get_high_contrast

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raccessibility_set_color_filter, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Raccessibility_get_color_filter arginfo_Raccessibility_get_high_contrast

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raccessibility_get_system_settings, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, settings, RAccessibilitySettings, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raccessibility_follow_system, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_accessible_name, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_accessible_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_accessible_description, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_accessible_role, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_accessible_role, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_accessible_hidden, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hidden, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_accessible_labelled_by, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_accessible_action, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, press, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_accessible_checked, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checked, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raccessibility_announce, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, assertive, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Raccessibility_is_screen_reader_active arginfo_Raccessibility_get_high_contrast

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RAccessibilitySettings___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text_scale, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, high_contrast, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, reduce_motion, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, screen_reader, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Raccessibility_set_text_scale);
ZEND_FUNCTION(Raccessibility_get_text_scale);
ZEND_FUNCTION(Raccessibility_set_high_contrast);
ZEND_FUNCTION(Raccessibility_get_high_contrast);
ZEND_FUNCTION(Raccessibility_set_focus_always_visible);
ZEND_FUNCTION(Raccessibility_get_focus_always_visible);
ZEND_FUNCTION(Raccessibility_set_reduce_motion);
ZEND_FUNCTION(Raccessibility_get_reduce_motion);
ZEND_FUNCTION(Raccessibility_set_color_filter);
ZEND_FUNCTION(Raccessibility_get_color_filter);
ZEND_FUNCTION(Raccessibility_get_system_settings);
ZEND_FUNCTION(Raccessibility_follow_system);
ZEND_FUNCTION(Rwidget_set_accessible_name);
ZEND_FUNCTION(Rwidget_get_accessible_name);
ZEND_FUNCTION(Rwidget_set_accessible_description);
ZEND_FUNCTION(Rwidget_set_accessible_role);
ZEND_FUNCTION(Rwidget_get_accessible_role);
ZEND_FUNCTION(Rwidget_set_accessible_hidden);
ZEND_FUNCTION(Rwidget_set_accessible_labelled_by);
ZEND_FUNCTION(Rwidget_set_accessible_action);
ZEND_FUNCTION(Rwidget_set_accessible_checked);
ZEND_FUNCTION(Raccessibility_announce);
ZEND_FUNCTION(Raccessibility_is_screen_reader_active);
ZEND_METHOD(RAccessibilitySettings, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Raccessibility_set_text_scale, arginfo_Raccessibility_set_text_scale)
	ZEND_FE(Raccessibility_get_text_scale, arginfo_Raccessibility_get_text_scale)
	ZEND_FE(Raccessibility_set_high_contrast, arginfo_Raccessibility_set_high_contrast)
	ZEND_FE(Raccessibility_get_high_contrast, arginfo_Raccessibility_get_high_contrast)
	ZEND_FE(Raccessibility_set_focus_always_visible, arginfo_Raccessibility_set_focus_always_visible)
	ZEND_FE(Raccessibility_get_focus_always_visible, arginfo_Raccessibility_get_focus_always_visible)
	ZEND_FE(Raccessibility_set_reduce_motion, arginfo_Raccessibility_set_reduce_motion)
	ZEND_FE(Raccessibility_get_reduce_motion, arginfo_Raccessibility_get_reduce_motion)
	ZEND_FE(Raccessibility_set_color_filter, arginfo_Raccessibility_set_color_filter)
	ZEND_FE(Raccessibility_get_color_filter, arginfo_Raccessibility_get_color_filter)
	ZEND_FE(Raccessibility_get_system_settings, arginfo_Raccessibility_get_system_settings)
	ZEND_FE(Raccessibility_follow_system, arginfo_Raccessibility_follow_system)
	ZEND_FE(Rwidget_set_accessible_name, arginfo_Rwidget_set_accessible_name)
	ZEND_FE(Rwidget_get_accessible_name, arginfo_Rwidget_get_accessible_name)
	ZEND_FE(Rwidget_set_accessible_description, arginfo_Rwidget_set_accessible_description)
	ZEND_FE(Rwidget_set_accessible_role, arginfo_Rwidget_set_accessible_role)
	ZEND_FE(Rwidget_get_accessible_role, arginfo_Rwidget_get_accessible_role)
	ZEND_FE(Rwidget_set_accessible_hidden, arginfo_Rwidget_set_accessible_hidden)
	ZEND_FE(Rwidget_set_accessible_labelled_by, arginfo_Rwidget_set_accessible_labelled_by)
	ZEND_FE(Rwidget_set_accessible_action, arginfo_Rwidget_set_accessible_action)
	ZEND_FE(Rwidget_set_accessible_checked, arginfo_Rwidget_set_accessible_checked)
	ZEND_FE(Raccessibility_announce, arginfo_Raccessibility_announce)
	ZEND_FE(Raccessibility_is_screen_reader_active, arginfo_Raccessibility_is_screen_reader_active)
	ZEND_FE_END
};

static const zend_function_entry class_RAccessibilitySettings_methods[] = {
	ZEND_ME(RAccessibilitySettings, __construct, arginfo_class_RAccessibilitySettings___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_accessibility_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_NONE", R_COLOR_FILTER_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_PROTANOPIA", R_COLOR_FILTER_PROTANOPIA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_DEUTERANOPIA", R_COLOR_FILTER_DEUTERANOPIA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_TRITANOPIA", R_COLOR_FILTER_TRITANOPIA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_GRAYSCALE", R_COLOR_FILTER_GRAYSCALE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_INVERT", R_COLOR_FILTER_INVERT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_SIMULATE_PROTANOPIA", R_COLOR_FILTER_SIMULATE_PROTANOPIA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_SIMULATE_DEUTERANOPIA", R_COLOR_FILTER_SIMULATE_DEUTERANOPIA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_SIMULATE_TRITANOPIA", R_COLOR_FILTER_SIMULATE_TRITANOPIA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_COLOR_FILTER_SIMULATE_ACHROMATOPSIA", R_COLOR_FILTER_SIMULATE_ACHROMATOPSIA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_AUTO", R_ROLE_AUTO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_NONE", R_ROLE_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_WINDOW", R_ROLE_WINDOW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_GROUP", R_ROLE_GROUP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TEXT", R_ROLE_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_HEADING", R_ROLE_HEADING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_LINK", R_ROLE_LINK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_BUTTON", R_ROLE_BUTTON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TOGGLE_BUTTON", R_ROLE_TOGGLE_BUTTON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_CHECKBOX", R_ROLE_CHECKBOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_RADIO_BUTTON", R_ROLE_RADIO_BUTTON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_SLIDER", R_ROLE_SLIDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_PROGRESS_BAR", R_ROLE_PROGRESS_BAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_SPIN_BUTTON", R_ROLE_SPIN_BUTTON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TEXT_FIELD", R_ROLE_TEXT_FIELD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_DOCUMENT", R_ROLE_DOCUMENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_COMBO_BOX", R_ROLE_COMBO_BOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_LIST", R_ROLE_LIST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_LIST_ITEM", R_ROLE_LIST_ITEM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TREE", R_ROLE_TREE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TREE_ITEM", R_ROLE_TREE_ITEM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TABLE", R_ROLE_TABLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_MENU_BAR", R_ROLE_MENU_BAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_MENU", R_ROLE_MENU, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_MENU_ITEM", R_ROLE_MENU_ITEM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TAB_LIST", R_ROLE_TAB_LIST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TAB", R_ROLE_TAB, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TAB_PANEL", R_ROLE_TAB_PANEL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_TOOLBAR", R_ROLE_TOOLBAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_STATUS_BAR", R_ROLE_STATUS_BAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_DIALOG", R_ROLE_DIALOG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_ALERT", R_ROLE_ALERT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_IMAGE", R_ROLE_IMAGE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_CANVAS", R_ROLE_CANVAS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_SEPARATOR", R_ROLE_SEPARATOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_SCROLL_BAR", R_ROLE_SCROLL_BAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ROLE_PANE", R_ROLE_PANE, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RAccessibilitySettings(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RAccessibilitySettings", class_RAccessibilitySettings_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_text_scale_default_value;
	ZVAL_DOUBLE(&property_text_scale_default_value, 0.0);
	zend_string *property_text_scale_name = zend_string_init("text_scale", sizeof("text_scale") - 1, 1);
	zend_declare_typed_property(class_entry, property_text_scale_name, &property_text_scale_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_text_scale_name);

	zval property_high_contrast_default_value;
	ZVAL_LONG(&property_high_contrast_default_value, 0);
	zend_string *property_high_contrast_name = zend_string_init("high_contrast", sizeof("high_contrast") - 1, 1);
	zend_declare_typed_property(class_entry, property_high_contrast_name, &property_high_contrast_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_high_contrast_name);

	zval property_reduce_motion_default_value;
	ZVAL_LONG(&property_reduce_motion_default_value, 0);
	zend_string *property_reduce_motion_name = zend_string_init("reduce_motion", sizeof("reduce_motion") - 1, 1);
	zend_declare_typed_property(class_entry, property_reduce_motion_name, &property_reduce_motion_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_reduce_motion_name);

	zval property_screen_reader_default_value;
	ZVAL_LONG(&property_screen_reader_default_value, 0);
	zend_string *property_screen_reader_name = zend_string_init("screen_reader", sizeof("screen_reader") - 1, 1);
	zend_declare_typed_property(class_entry, property_screen_reader_name, &property_screen_reader_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_screen_reader_name);

	return class_entry;
}
