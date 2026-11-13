/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 31c4e83b9d8511055050e55bc5a3b1725bd4ed07 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdialog_open, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, content, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, closed, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdialog_close, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdialog_run, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, content, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_has_dialog, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmessage_box, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_dialog_open, 0, 1, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, desc, RFileDialogDesc, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rfile_dialog_save arginfo_Rfile_dialog_open

#define arginfo_Rfile_dialog_select_folder arginfo_Rfile_dialog_open

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_dialog_get_result_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_dialog_get_result, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_register_memory, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, copy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_unregister_memory, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_is_memory, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_write, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rfile_browser_create arginfo_Rfile_dialog_get_result_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_mode, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_directory, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_get_directory, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_refresh, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_filters, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filters, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_show_hidden, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, show, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_multiple, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiple, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_controls_visible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rfile_browser_set_places_visible arginfo_Rfile_browser_set_controls_visible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_file_name, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_default_extension, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_get_selection_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_get_selection, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rfile_browser_select arginfo_Rfile_browser_set_file_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_browser_set_accepted_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, browser, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rfile_browser_set_cancelled_callback arginfo_Rfile_browser_set_accepted_callback

#define arginfo_Rfile_browser_set_selection_changed_callback arginfo_Rfile_browser_set_accepted_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnotification_show, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, body, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, urgency, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnotification_is_supported arginfo_Rfile_dialog_get_result_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rnotification_set_fallback, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rnotification_set_clicked_callback arginfo_Rnotification_set_fallback

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RFileFilter___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, patterns, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RFileDialogDesc___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, parent, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, title, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, directory, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, file_name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, filters, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, filter_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, default_extension, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rdialog_open);
ZEND_FUNCTION(Rdialog_close);
ZEND_FUNCTION(Rdialog_run);
ZEND_FUNCTION(Rwindow_has_dialog);
ZEND_FUNCTION(Rmessage_box);
ZEND_FUNCTION(Rfile_dialog_open);
ZEND_FUNCTION(Rfile_dialog_save);
ZEND_FUNCTION(Rfile_dialog_select_folder);
ZEND_FUNCTION(Rfile_dialog_get_result_count);
ZEND_FUNCTION(Rfile_dialog_get_result);
ZEND_FUNCTION(Rfile_register_memory);
ZEND_FUNCTION(Rfile_unregister_memory);
ZEND_FUNCTION(Rfile_is_memory);
ZEND_FUNCTION(Rfile_write);
ZEND_FUNCTION(Rfile_browser_create);
ZEND_FUNCTION(Rfile_browser_set_mode);
ZEND_FUNCTION(Rfile_browser_set_directory);
ZEND_FUNCTION(Rfile_browser_get_directory);
ZEND_FUNCTION(Rfile_browser_refresh);
ZEND_FUNCTION(Rfile_browser_set_filters);
ZEND_FUNCTION(Rfile_browser_set_show_hidden);
ZEND_FUNCTION(Rfile_browser_set_multiple);
ZEND_FUNCTION(Rfile_browser_set_controls_visible);
ZEND_FUNCTION(Rfile_browser_set_places_visible);
ZEND_FUNCTION(Rfile_browser_set_file_name);
ZEND_FUNCTION(Rfile_browser_set_default_extension);
ZEND_FUNCTION(Rfile_browser_get_selection_count);
ZEND_FUNCTION(Rfile_browser_get_selection);
ZEND_FUNCTION(Rfile_browser_select);
ZEND_FUNCTION(Rfile_browser_set_accepted_callback);
ZEND_FUNCTION(Rfile_browser_set_cancelled_callback);
ZEND_FUNCTION(Rfile_browser_set_selection_changed_callback);
ZEND_FUNCTION(Rnotification_show);
ZEND_FUNCTION(Rnotification_is_supported);
ZEND_FUNCTION(Rnotification_set_fallback);
ZEND_FUNCTION(Rnotification_set_clicked_callback);
ZEND_METHOD(RFileFilter, __construct);
ZEND_METHOD(RFileDialogDesc, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rdialog_open, arginfo_Rdialog_open)
	ZEND_FE(Rdialog_close, arginfo_Rdialog_close)
	ZEND_FE(Rdialog_run, arginfo_Rdialog_run)
	ZEND_FE(Rwindow_has_dialog, arginfo_Rwindow_has_dialog)
	ZEND_FE(Rmessage_box, arginfo_Rmessage_box)
	ZEND_FE(Rfile_dialog_open, arginfo_Rfile_dialog_open)
	ZEND_FE(Rfile_dialog_save, arginfo_Rfile_dialog_save)
	ZEND_FE(Rfile_dialog_select_folder, arginfo_Rfile_dialog_select_folder)
	ZEND_FE(Rfile_dialog_get_result_count, arginfo_Rfile_dialog_get_result_count)
	ZEND_FE(Rfile_dialog_get_result, arginfo_Rfile_dialog_get_result)
	ZEND_FE(Rfile_register_memory, arginfo_Rfile_register_memory)
	ZEND_FE(Rfile_unregister_memory, arginfo_Rfile_unregister_memory)
	ZEND_FE(Rfile_is_memory, arginfo_Rfile_is_memory)
	ZEND_FE(Rfile_write, arginfo_Rfile_write)
	ZEND_FE(Rfile_browser_create, arginfo_Rfile_browser_create)
	ZEND_FE(Rfile_browser_set_mode, arginfo_Rfile_browser_set_mode)
	ZEND_FE(Rfile_browser_set_directory, arginfo_Rfile_browser_set_directory)
	ZEND_FE(Rfile_browser_get_directory, arginfo_Rfile_browser_get_directory)
	ZEND_FE(Rfile_browser_refresh, arginfo_Rfile_browser_refresh)
	ZEND_FE(Rfile_browser_set_filters, arginfo_Rfile_browser_set_filters)
	ZEND_FE(Rfile_browser_set_show_hidden, arginfo_Rfile_browser_set_show_hidden)
	ZEND_FE(Rfile_browser_set_multiple, arginfo_Rfile_browser_set_multiple)
	ZEND_FE(Rfile_browser_set_controls_visible, arginfo_Rfile_browser_set_controls_visible)
	ZEND_FE(Rfile_browser_set_places_visible, arginfo_Rfile_browser_set_places_visible)
	ZEND_FE(Rfile_browser_set_file_name, arginfo_Rfile_browser_set_file_name)
	ZEND_FE(Rfile_browser_set_default_extension, arginfo_Rfile_browser_set_default_extension)
	ZEND_FE(Rfile_browser_get_selection_count, arginfo_Rfile_browser_get_selection_count)
	ZEND_FE(Rfile_browser_get_selection, arginfo_Rfile_browser_get_selection)
	ZEND_FE(Rfile_browser_select, arginfo_Rfile_browser_select)
	ZEND_FE(Rfile_browser_set_accepted_callback, arginfo_Rfile_browser_set_accepted_callback)
	ZEND_FE(Rfile_browser_set_cancelled_callback, arginfo_Rfile_browser_set_cancelled_callback)
	ZEND_FE(Rfile_browser_set_selection_changed_callback, arginfo_Rfile_browser_set_selection_changed_callback)
	ZEND_FE(Rnotification_show, arginfo_Rnotification_show)
	ZEND_FE(Rnotification_is_supported, arginfo_Rnotification_is_supported)
	ZEND_FE(Rnotification_set_fallback, arginfo_Rnotification_set_fallback)
	ZEND_FE(Rnotification_set_clicked_callback, arginfo_Rnotification_set_clicked_callback)
	ZEND_FE_END
};

static const zend_function_entry class_RFileFilter_methods[] = {
	ZEND_ME(RFileFilter, __construct, arginfo_class_RFileFilter___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RFileDialogDesc_methods[] = {
	ZEND_ME(RFileDialogDesc, __construct, arginfo_class_RFileDialogDesc___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_dialogs_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_NOTIFICATION_LOW", R_NOTIFICATION_LOW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_NOTIFICATION_NORMAL", R_NOTIFICATION_NORMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_NOTIFICATION_CRITICAL", R_NOTIFICATION_CRITICAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILE_DIALOG_MULTIPLE", R_FILE_DIALOG_MULTIPLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILE_DIALOG_RAVEN", R_FILE_DIALOG_RAVEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILE_DIALOG_SHOW_HIDDEN", R_FILE_DIALOG_SHOW_HIDDEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILE_BROWSER_OPEN", R_FILE_BROWSER_OPEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILE_BROWSER_SAVE", R_FILE_BROWSER_SAVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILE_BROWSER_FOLDER", R_FILE_BROWSER_FOLDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MESSAGE_OK", R_MESSAGE_OK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MESSAGE_OK_CANCEL", R_MESSAGE_OK_CANCEL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MESSAGE_YES_NO", R_MESSAGE_YES_NO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MESSAGE_YES_NO_CANCEL", R_MESSAGE_YES_NO_CANCEL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MESSAGE_RESULT_CANCEL", R_MESSAGE_RESULT_CANCEL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MESSAGE_RESULT_OK", R_MESSAGE_RESULT_OK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MESSAGE_RESULT_YES", R_MESSAGE_RESULT_YES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MESSAGE_RESULT_NO", R_MESSAGE_RESULT_NO, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RFileFilter(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RFileFilter", class_RFileFilter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_name_default_value;
	ZVAL_NULL(&property_name_default_value);
	zend_string *property_name_name = zend_string_init("name", sizeof("name") - 1, 1);
	zend_declare_typed_property(class_entry, property_name_name, &property_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_name_name);

	zval property_patterns_default_value;
	ZVAL_NULL(&property_patterns_default_value);
	zend_string *property_patterns_name = zend_string_init("patterns", sizeof("patterns") - 1, 1);
	zend_declare_typed_property(class_entry, property_patterns_name, &property_patterns_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_patterns_name);

	return class_entry;
}

static zend_class_entry *register_class_RFileDialogDesc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RFileDialogDesc", class_RFileDialogDesc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_parent_default_value;
	ZVAL_LONG(&property_parent_default_value, 0);
	zend_string *property_parent_name = zend_string_init("parent", sizeof("parent") - 1, 1);
	zend_declare_typed_property(class_entry, property_parent_name, &property_parent_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_parent_name);

	zval property_title_default_value;
	ZVAL_NULL(&property_title_default_value);
	zend_string *property_title_name = zend_string_init("title", sizeof("title") - 1, 1);
	zend_declare_typed_property(class_entry, property_title_name, &property_title_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_title_name);

	zval property_directory_default_value;
	ZVAL_NULL(&property_directory_default_value);
	zend_string *property_directory_name = zend_string_init("directory", sizeof("directory") - 1, 1);
	zend_declare_typed_property(class_entry, property_directory_name, &property_directory_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_directory_name);

	zval property_file_name_default_value;
	ZVAL_NULL(&property_file_name_default_value);
	zend_string *property_file_name_name = zend_string_init("file_name", sizeof("file_name") - 1, 1);
	zend_declare_typed_property(class_entry, property_file_name_name, &property_file_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_file_name_name);

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

	zval property_default_extension_default_value;
	ZVAL_NULL(&property_default_extension_default_value);
	zend_string *property_default_extension_name = zend_string_init("default_extension", sizeof("default_extension") - 1, 1);
	zend_declare_typed_property(class_entry, property_default_extension_name, &property_default_extension_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_default_extension_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	return class_entry;
}
