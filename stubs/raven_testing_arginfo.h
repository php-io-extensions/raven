/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 62f62b7e05e461a630bbd516cf886b712a3cc997 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_set_deterministic, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_is_deterministic, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_get_platform_tag, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_find, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scope, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_click, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtest_double_click arginfo_Rtest_click

#define arginfo_Rtest_right_click arginfo_Rtest_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_click_at, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clicks, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtest_hover arginfo_Rtest_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_hover_at, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_drag, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_drag_to, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_scroll, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wheel_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, wheel_y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_key, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_type_text, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtest_tap arginfo_Rtest_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_swipe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_pump, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frames, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtest_is_idle arginfo_Rtest_is_deterministic

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_settle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_get_text, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtest_is_shown arginfo_Rtest_click

#define arginfo_Rtest_is_checked arginfo_Rtest_click

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_expect_golden, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, golden_path, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, options, RGoldenOptions, 1)
	ZEND_ARG_OBJ_INFO(0, result, RGoldenResult, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_compare_pixels, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, actual, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, expected, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channel_tolerance, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, max_channel_difference, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, diff_rgba, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_dump_tree, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_save_tree, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtest_save_png arginfo_Rtest_save_tree

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtest_run_script, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, script, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, source_name, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtest_get_script_error arginfo_Rtest_get_platform_tag

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RGoldenOptions___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, channel_tolerance, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, max_diff_ratio, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, per_platform, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, output_directory, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RGoldenResult___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, status, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, differing_pixels, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, max_channel_difference, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, golden_path, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, message, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rtest_set_deterministic);
ZEND_FUNCTION(Rtest_is_deterministic);
ZEND_FUNCTION(Rtest_get_platform_tag);
ZEND_FUNCTION(Rtest_find);
ZEND_FUNCTION(Rtest_click);
ZEND_FUNCTION(Rtest_double_click);
ZEND_FUNCTION(Rtest_right_click);
ZEND_FUNCTION(Rtest_click_at);
ZEND_FUNCTION(Rtest_hover);
ZEND_FUNCTION(Rtest_hover_at);
ZEND_FUNCTION(Rtest_drag);
ZEND_FUNCTION(Rtest_drag_to);
ZEND_FUNCTION(Rtest_scroll);
ZEND_FUNCTION(Rtest_key);
ZEND_FUNCTION(Rtest_type_text);
ZEND_FUNCTION(Rtest_tap);
ZEND_FUNCTION(Rtest_swipe);
ZEND_FUNCTION(Rtest_pump);
ZEND_FUNCTION(Rtest_is_idle);
ZEND_FUNCTION(Rtest_settle);
ZEND_FUNCTION(Rtest_get_text);
ZEND_FUNCTION(Rtest_is_shown);
ZEND_FUNCTION(Rtest_is_checked);
ZEND_FUNCTION(Rtest_expect_golden);
ZEND_FUNCTION(Rtest_compare_pixels);
ZEND_FUNCTION(Rtest_dump_tree);
ZEND_FUNCTION(Rtest_save_tree);
ZEND_FUNCTION(Rtest_save_png);
ZEND_FUNCTION(Rtest_run_script);
ZEND_FUNCTION(Rtest_get_script_error);
ZEND_METHOD(RGoldenOptions, __construct);
ZEND_METHOD(RGoldenResult, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rtest_set_deterministic, arginfo_Rtest_set_deterministic)
	ZEND_FE(Rtest_is_deterministic, arginfo_Rtest_is_deterministic)
	ZEND_FE(Rtest_get_platform_tag, arginfo_Rtest_get_platform_tag)
	ZEND_FE(Rtest_find, arginfo_Rtest_find)
	ZEND_FE(Rtest_click, arginfo_Rtest_click)
	ZEND_FE(Rtest_double_click, arginfo_Rtest_double_click)
	ZEND_FE(Rtest_right_click, arginfo_Rtest_right_click)
	ZEND_FE(Rtest_click_at, arginfo_Rtest_click_at)
	ZEND_FE(Rtest_hover, arginfo_Rtest_hover)
	ZEND_FE(Rtest_hover_at, arginfo_Rtest_hover_at)
	ZEND_FE(Rtest_drag, arginfo_Rtest_drag)
	ZEND_FE(Rtest_drag_to, arginfo_Rtest_drag_to)
	ZEND_FE(Rtest_scroll, arginfo_Rtest_scroll)
	ZEND_FE(Rtest_key, arginfo_Rtest_key)
	ZEND_FE(Rtest_type_text, arginfo_Rtest_type_text)
	ZEND_FE(Rtest_tap, arginfo_Rtest_tap)
	ZEND_FE(Rtest_swipe, arginfo_Rtest_swipe)
	ZEND_FE(Rtest_pump, arginfo_Rtest_pump)
	ZEND_FE(Rtest_is_idle, arginfo_Rtest_is_idle)
	ZEND_FE(Rtest_settle, arginfo_Rtest_settle)
	ZEND_FE(Rtest_get_text, arginfo_Rtest_get_text)
	ZEND_FE(Rtest_is_shown, arginfo_Rtest_is_shown)
	ZEND_FE(Rtest_is_checked, arginfo_Rtest_is_checked)
	ZEND_FE(Rtest_expect_golden, arginfo_Rtest_expect_golden)
	ZEND_FE(Rtest_compare_pixels, arginfo_Rtest_compare_pixels)
	ZEND_FE(Rtest_dump_tree, arginfo_Rtest_dump_tree)
	ZEND_FE(Rtest_save_tree, arginfo_Rtest_save_tree)
	ZEND_FE(Rtest_save_png, arginfo_Rtest_save_png)
	ZEND_FE(Rtest_run_script, arginfo_Rtest_run_script)
	ZEND_FE(Rtest_get_script_error, arginfo_Rtest_get_script_error)
	ZEND_FE_END
};

static const zend_function_entry class_RGoldenOptions_methods[] = {
	ZEND_ME(RGoldenOptions, __construct, arginfo_class_RGoldenOptions___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RGoldenResult_methods[] = {
	ZEND_ME(RGoldenResult, __construct, arginfo_class_RGoldenResult___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_testing_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_GOLDEN_MATCH", R_GOLDEN_MATCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GOLDEN_UPDATED", R_GOLDEN_UPDATED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GOLDEN_MISMATCH", R_GOLDEN_MISMATCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GOLDEN_SIZE_MISMATCH", R_GOLDEN_SIZE_MISMATCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GOLDEN_MISSING", R_GOLDEN_MISSING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_GOLDEN_FAILED", R_GOLDEN_FAILED, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RGoldenOptions(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RGoldenOptions", class_RGoldenOptions_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_channel_tolerance_default_value;
	ZVAL_LONG(&property_channel_tolerance_default_value, 0);
	zend_string *property_channel_tolerance_name = zend_string_init("channel_tolerance", sizeof("channel_tolerance") - 1, 1);
	zend_declare_typed_property(class_entry, property_channel_tolerance_name, &property_channel_tolerance_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_channel_tolerance_name);

	zval property_max_diff_ratio_default_value;
	ZVAL_DOUBLE(&property_max_diff_ratio_default_value, 0.0);
	zend_string *property_max_diff_ratio_name = zend_string_init("max_diff_ratio", sizeof("max_diff_ratio") - 1, 1);
	zend_declare_typed_property(class_entry, property_max_diff_ratio_name, &property_max_diff_ratio_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_max_diff_ratio_name);

	zval property_per_platform_default_value;
	ZVAL_LONG(&property_per_platform_default_value, 0);
	zend_string *property_per_platform_name = zend_string_init("per_platform", sizeof("per_platform") - 1, 1);
	zend_declare_typed_property(class_entry, property_per_platform_name, &property_per_platform_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_per_platform_name);

	zval property_output_directory_default_value;
	ZVAL_NULL(&property_output_directory_default_value);
	zend_string *property_output_directory_name = zend_string_init("output_directory", sizeof("output_directory") - 1, 1);
	zend_declare_typed_property(class_entry, property_output_directory_name, &property_output_directory_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_output_directory_name);

	return class_entry;
}

static zend_class_entry *register_class_RGoldenResult(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RGoldenResult", class_RGoldenResult_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_status_default_value;
	ZVAL_LONG(&property_status_default_value, 0);
	zend_string *property_status_name = zend_string_init("status", sizeof("status") - 1, 1);
	zend_declare_typed_property(class_entry, property_status_name, &property_status_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_status_name);

	zval property_width_default_value;
	ZVAL_LONG(&property_width_default_value, 0);
	zend_string *property_width_name = zend_string_init("width", sizeof("width") - 1, 1);
	zend_declare_typed_property(class_entry, property_width_name, &property_width_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_width_name);

	zval property_height_default_value;
	ZVAL_LONG(&property_height_default_value, 0);
	zend_string *property_height_name = zend_string_init("height", sizeof("height") - 1, 1);
	zend_declare_typed_property(class_entry, property_height_name, &property_height_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_height_name);

	zval property_differing_pixels_default_value;
	ZVAL_LONG(&property_differing_pixels_default_value, 0);
	zend_string *property_differing_pixels_name = zend_string_init("differing_pixels", sizeof("differing_pixels") - 1, 1);
	zend_declare_typed_property(class_entry, property_differing_pixels_name, &property_differing_pixels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_differing_pixels_name);

	zval property_max_channel_difference_default_value;
	ZVAL_LONG(&property_max_channel_difference_default_value, 0);
	zend_string *property_max_channel_difference_name = zend_string_init("max_channel_difference", sizeof("max_channel_difference") - 1, 1);
	zend_declare_typed_property(class_entry, property_max_channel_difference_name, &property_max_channel_difference_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_max_channel_difference_name);

	zval property_golden_path_default_value;
	ZVAL_NULL(&property_golden_path_default_value);
	zend_string *property_golden_path_name = zend_string_init("golden_path", sizeof("golden_path") - 1, 1);
	zend_declare_typed_property(class_entry, property_golden_path_name, &property_golden_path_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_golden_path_name);

	zval property_message_default_value;
	ZVAL_NULL(&property_message_default_value);
	zend_string *property_message_name = zend_string_init("message", sizeof("message") - 1, 1);
	zend_declare_typed_property(class_entry, property_message_name, &property_message_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_message_name);

	return class_entry;
}
