/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d58638a0b7ea14583507e9e96043e1c96142f08d */

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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_permission_answer, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, permission, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, status, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_service_complete, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, files, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RHostServiceRequest___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, id, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, service, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, anchor_x, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, anchor_y, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, anchor_width, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, anchor_height, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, title, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, filters, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, filter_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, file_name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, default_extension, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, size, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, path, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, max_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mime_type, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, share_title, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

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
ZEND_FUNCTION(Rhost_permission_answer);
ZEND_FUNCTION(Rhost_service_complete);
ZEND_METHOD(RHostServiceRequest, __construct);

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
	ZEND_FE(Rhost_permission_answer, arginfo_Rhost_permission_answer)
	ZEND_FE(Rhost_service_complete, arginfo_Rhost_service_complete)
	ZEND_FE_END
};

static const zend_function_entry class_RHostServiceRequest_methods[] = {
	ZEND_ME(RHostServiceRequest, __construct, arginfo_class_RHostServiceRequest___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_host_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_HOST_SERVICE_OPEN_FILES", R_HOST_SERVICE_OPEN_FILES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HOST_SERVICE_SAVE_FILE", R_HOST_SERVICE_SAVE_FILE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HOST_SERVICE_SELECT_FOLDER", R_HOST_SERVICE_SELECT_FOLDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HOST_SERVICE_TAKE_PHOTO", R_HOST_SERVICE_TAKE_PHOTO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HOST_SERVICE_PICK_PHOTOS", R_HOST_SERVICE_PICK_PHOTOS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HOST_SERVICE_SHARE", R_HOST_SERVICE_SHARE, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RHostServiceRequest(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RHostServiceRequest", class_RHostServiceRequest_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_id_default_value;
	ZVAL_LONG(&property_id_default_value, 0);
	zend_string *property_id_name = zend_string_init("id", sizeof("id") - 1, 1);
	zend_declare_typed_property(class_entry, property_id_name, &property_id_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_id_name);

	zval property_service_default_value;
	ZVAL_LONG(&property_service_default_value, 0);
	zend_string *property_service_name = zend_string_init("service", sizeof("service") - 1, 1);
	zend_declare_typed_property(class_entry, property_service_name, &property_service_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_service_name);

	zval property_window_default_value;
	ZVAL_LONG(&property_window_default_value, 0);
	zend_string *property_window_name = zend_string_init("window", sizeof("window") - 1, 1);
	zend_declare_typed_property(class_entry, property_window_name, &property_window_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_window_name);

	zval property_anchor_x_default_value;
	ZVAL_DOUBLE(&property_anchor_x_default_value, 0.0);
	zend_string *property_anchor_x_name = zend_string_init("anchor_x", sizeof("anchor_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_anchor_x_name, &property_anchor_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_anchor_x_name);

	zval property_anchor_y_default_value;
	ZVAL_DOUBLE(&property_anchor_y_default_value, 0.0);
	zend_string *property_anchor_y_name = zend_string_init("anchor_y", sizeof("anchor_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_anchor_y_name, &property_anchor_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_anchor_y_name);

	zval property_anchor_width_default_value;
	ZVAL_DOUBLE(&property_anchor_width_default_value, 0.0);
	zend_string *property_anchor_width_name = zend_string_init("anchor_width", sizeof("anchor_width") - 1, 1);
	zend_declare_typed_property(class_entry, property_anchor_width_name, &property_anchor_width_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_anchor_width_name);

	zval property_anchor_height_default_value;
	ZVAL_DOUBLE(&property_anchor_height_default_value, 0.0);
	zend_string *property_anchor_height_name = zend_string_init("anchor_height", sizeof("anchor_height") - 1, 1);
	zend_declare_typed_property(class_entry, property_anchor_height_name, &property_anchor_height_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_anchor_height_name);

	zval property_title_default_value;
	ZVAL_NULL(&property_title_default_value);
	zend_string *property_title_name = zend_string_init("title", sizeof("title") - 1, 1);
	zend_declare_typed_property(class_entry, property_title_name, &property_title_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_title_name);

	zval property_filters_default_value;
	ZVAL_NULL(&property_filters_default_value);
	zend_string *property_filters_name = zend_string_init("filters", sizeof("filters") - 1, 1);
	zend_declare_typed_property(class_entry, property_filters_name, &property_filters_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_filters_name);

	zval property_filter_count_default_value;
	ZVAL_LONG(&property_filter_count_default_value, 0);
	zend_string *property_filter_count_name = zend_string_init("filter_count", sizeof("filter_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_filter_count_name, &property_filter_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_filter_count_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_file_name_default_value;
	ZVAL_NULL(&property_file_name_default_value);
	zend_string *property_file_name_name = zend_string_init("file_name", sizeof("file_name") - 1, 1);
	zend_declare_typed_property(class_entry, property_file_name_name, &property_file_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_file_name_name);

	zval property_default_extension_default_value;
	ZVAL_NULL(&property_default_extension_default_value);
	zend_string *property_default_extension_name = zend_string_init("default_extension", sizeof("default_extension") - 1, 1);
	zend_declare_typed_property(class_entry, property_default_extension_name, &property_default_extension_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_default_extension_name);

	zval property_data_default_value;
	ZVAL_NULL(&property_data_default_value);
	zend_string *property_data_name = zend_string_init("data", sizeof("data") - 1, 1);
	zend_declare_typed_property(class_entry, property_data_name, &property_data_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_data_name);

	zval property_size_default_value;
	ZVAL_LONG(&property_size_default_value, 0);
	zend_string *property_size_name = zend_string_init("size", sizeof("size") - 1, 1);
	zend_declare_typed_property(class_entry, property_size_name, &property_size_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_size_name);

	zval property_path_default_value;
	ZVAL_NULL(&property_path_default_value);
	zend_string *property_path_name = zend_string_init("path", sizeof("path") - 1, 1);
	zend_declare_typed_property(class_entry, property_path_name, &property_path_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_path_name);

	zval property_max_count_default_value;
	ZVAL_LONG(&property_max_count_default_value, 0);
	zend_string *property_max_count_name = zend_string_init("max_count", sizeof("max_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_max_count_name, &property_max_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_max_count_name);

	zval property_text_default_value;
	ZVAL_NULL(&property_text_default_value);
	zend_string *property_text_name = zend_string_init("text", sizeof("text") - 1, 1);
	zend_declare_typed_property(class_entry, property_text_name, &property_text_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_text_name);

	zval property_mime_type_default_value;
	ZVAL_NULL(&property_mime_type_default_value);
	zend_string *property_mime_type_name = zend_string_init("mime_type", sizeof("mime_type") - 1, 1);
	zend_declare_typed_property(class_entry, property_mime_type_name, &property_mime_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_mime_type_name);

	zval property_share_title_default_value;
	ZVAL_NULL(&property_share_title_default_value);
	zend_string *property_share_title_name = zend_string_init("share_title", sizeof("share_title") - 1, 1);
	zend_declare_typed_property(class_entry, property_share_title_name, &property_share_title_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_share_title_name);

	return class_entry;
}
