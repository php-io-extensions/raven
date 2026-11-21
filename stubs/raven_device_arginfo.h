/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a0f61798b43fba26d779e57f422ff688c56b8d67 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpermission_get_status, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, permission, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpermission_request, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, permission, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpermission_open_settings, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpermission_to_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, permission, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpermission_status_to_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, status, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_open_async, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RFileDialogDesc, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_save_async, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RFileDialogDesc, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_export_async, 0, 4, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RFileDialogDesc, 1)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rfile_select_folder_async arginfo_Rfile_open_async

#define arginfo_Rcamera_is_available arginfo_Rpermission_open_settings

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcamera_take_photo, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rphoto_pick, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, max_count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rhaptic_is_supported arginfo_Rpermission_open_settings

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhaptic_play, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, haptic, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rshare_show, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RShareDesc, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RPickedFile___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, path, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mime_type, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, size, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RShareDesc___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, path, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mime_type, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, title, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, anchor, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rpermission_get_status);
ZEND_FUNCTION(Rpermission_request);
ZEND_FUNCTION(Rpermission_open_settings);
ZEND_FUNCTION(Rpermission_to_string);
ZEND_FUNCTION(Rpermission_status_to_string);
ZEND_FUNCTION(Rfile_open_async);
ZEND_FUNCTION(Rfile_save_async);
ZEND_FUNCTION(Rfile_export_async);
ZEND_FUNCTION(Rfile_select_folder_async);
ZEND_FUNCTION(Rcamera_is_available);
ZEND_FUNCTION(Rcamera_take_photo);
ZEND_FUNCTION(Rphoto_pick);
ZEND_FUNCTION(Rhaptic_is_supported);
ZEND_FUNCTION(Rhaptic_play);
ZEND_FUNCTION(Rshare_show);
ZEND_METHOD(RPickedFile, __construct);
ZEND_METHOD(RShareDesc, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rpermission_get_status, arginfo_Rpermission_get_status)
	ZEND_FE(Rpermission_request, arginfo_Rpermission_request)
	ZEND_FE(Rpermission_open_settings, arginfo_Rpermission_open_settings)
	ZEND_FE(Rpermission_to_string, arginfo_Rpermission_to_string)
	ZEND_FE(Rpermission_status_to_string, arginfo_Rpermission_status_to_string)
	ZEND_FE(Rfile_open_async, arginfo_Rfile_open_async)
	ZEND_FE(Rfile_save_async, arginfo_Rfile_save_async)
	ZEND_FE(Rfile_export_async, arginfo_Rfile_export_async)
	ZEND_FE(Rfile_select_folder_async, arginfo_Rfile_select_folder_async)
	ZEND_FE(Rcamera_is_available, arginfo_Rcamera_is_available)
	ZEND_FE(Rcamera_take_photo, arginfo_Rcamera_take_photo)
	ZEND_FE(Rphoto_pick, arginfo_Rphoto_pick)
	ZEND_FE(Rhaptic_is_supported, arginfo_Rhaptic_is_supported)
	ZEND_FE(Rhaptic_play, arginfo_Rhaptic_play)
	ZEND_FE(Rshare_show, arginfo_Rshare_show)
	ZEND_FE_END
};

static const zend_function_entry class_RPickedFile_methods[] = {
	ZEND_ME(RPickedFile, __construct, arginfo_class_RPickedFile___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RShareDesc_methods[] = {
	ZEND_ME(RShareDesc, __construct, arginfo_class_RShareDesc___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_device_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_PERMISSION_CAMERA", R_PERMISSION_CAMERA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_NOTIFICATIONS", R_PERMISSION_NOTIFICATIONS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_PHOTOS", R_PERMISSION_PHOTOS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_MICROPHONE", R_PERMISSION_MICROPHONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_LOCATION", R_PERMISSION_LOCATION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_UNSUPPORTED", R_PERMISSION_UNSUPPORTED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_NOT_ASKED", R_PERMISSION_NOT_ASKED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_GRANTED", R_PERMISSION_GRANTED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_LIMITED", R_PERMISSION_LIMITED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_DENIED", R_PERMISSION_DENIED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PERMISSION_BLOCKED", R_PERMISSION_BLOCKED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DEVICE_DONE", R_DEVICE_DONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DEVICE_CANCELLED", R_DEVICE_CANCELLED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DEVICE_DENIED", R_DEVICE_DENIED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DEVICE_UNSUPPORTED", R_DEVICE_UNSUPPORTED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DEVICE_BUSY", R_DEVICE_BUSY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DEVICE_FAILED", R_DEVICE_FAILED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HAPTIC_LIGHT", R_HAPTIC_LIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HAPTIC_MEDIUM", R_HAPTIC_MEDIUM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HAPTIC_HEAVY", R_HAPTIC_HEAVY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HAPTIC_SELECTION", R_HAPTIC_SELECTION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HAPTIC_SUCCESS", R_HAPTIC_SUCCESS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HAPTIC_WARNING", R_HAPTIC_WARNING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_HAPTIC_ERROR", R_HAPTIC_ERROR, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RPickedFile(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RPickedFile", class_RPickedFile_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_path_default_value;
	ZVAL_NULL(&property_path_default_value);
	zend_string *property_path_name = zend_string_init("path", sizeof("path") - 1, 1);
	zend_declare_typed_property(class_entry, property_path_name, &property_path_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_path_name);

	zval property_name_default_value;
	ZVAL_NULL(&property_name_default_value);
	zend_string *property_name_name = zend_string_init("name", sizeof("name") - 1, 1);
	zend_declare_typed_property(class_entry, property_name_name, &property_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_name_name);

	zval property_mime_type_default_value;
	ZVAL_NULL(&property_mime_type_default_value);
	zend_string *property_mime_type_name = zend_string_init("mime_type", sizeof("mime_type") - 1, 1);
	zend_declare_typed_property(class_entry, property_mime_type_name, &property_mime_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_mime_type_name);

	zval property_size_default_value;
	ZVAL_LONG(&property_size_default_value, 0);
	zend_string *property_size_name = zend_string_init("size", sizeof("size") - 1, 1);
	zend_declare_typed_property(class_entry, property_size_name, &property_size_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_size_name);

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

	return class_entry;
}

static zend_class_entry *register_class_RShareDesc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RShareDesc", class_RShareDesc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_text_default_value;
	ZVAL_NULL(&property_text_default_value);
	zend_string *property_text_name = zend_string_init("text", sizeof("text") - 1, 1);
	zend_declare_typed_property(class_entry, property_text_name, &property_text_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_text_name);

	zval property_path_default_value;
	ZVAL_NULL(&property_path_default_value);
	zend_string *property_path_name = zend_string_init("path", sizeof("path") - 1, 1);
	zend_declare_typed_property(class_entry, property_path_name, &property_path_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_path_name);

	zval property_mime_type_default_value;
	ZVAL_NULL(&property_mime_type_default_value);
	zend_string *property_mime_type_name = zend_string_init("mime_type", sizeof("mime_type") - 1, 1);
	zend_declare_typed_property(class_entry, property_mime_type_name, &property_mime_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_mime_type_name);

	zval property_title_default_value;
	ZVAL_NULL(&property_title_default_value);
	zend_string *property_title_name = zend_string_init("title", sizeof("title") - 1, 1);
	zend_declare_typed_property(class_entry, property_title_name, &property_title_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_title_name);

	zval property_anchor_default_value;
	ZVAL_LONG(&property_anchor_default_value, 0);
	zend_string *property_anchor_name = zend_string_init("anchor", sizeof("anchor") - 1, 1);
	zend_declare_typed_property(class_entry, property_anchor_name, &property_anchor_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_anchor_name);

	return class_entry;
}
