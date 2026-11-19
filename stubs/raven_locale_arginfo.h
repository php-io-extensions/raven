/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 46784941b969bf5baf27c14a00560bb34c47af9a */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_load_csv, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_load_csv_from_memory, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, csv, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_clear, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_set_text, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, language, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_get_language_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_get_language_at, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_set_language, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_get_language, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rlocale_get_system_language arginfo_Rlocale_get_language

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_set_fallback_language, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rlocale_is_rtl arginfo_Rlocale_get_language_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_set_changed_callback, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtr, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtr_exists, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtr_format, 0, 3, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, args, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, arg_count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtr_plural, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_text_key, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlocale_format_number, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, decimals, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rlocale_load_csv);
ZEND_FUNCTION(Rlocale_load_csv_from_memory);
ZEND_FUNCTION(Rlocale_clear);
ZEND_FUNCTION(Rlocale_set_text);
ZEND_FUNCTION(Rlocale_get_language_count);
ZEND_FUNCTION(Rlocale_get_language_at);
ZEND_FUNCTION(Rlocale_set_language);
ZEND_FUNCTION(Rlocale_get_language);
ZEND_FUNCTION(Rlocale_get_system_language);
ZEND_FUNCTION(Rlocale_set_fallback_language);
ZEND_FUNCTION(Rlocale_is_rtl);
ZEND_FUNCTION(Rlocale_set_changed_callback);
ZEND_FUNCTION(Rtr);
ZEND_FUNCTION(Rtr_exists);
ZEND_FUNCTION(Rtr_format);
ZEND_FUNCTION(Rtr_plural);
ZEND_FUNCTION(Rwidget_set_text_key);
ZEND_FUNCTION(Rlocale_format_number);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rlocale_load_csv, arginfo_Rlocale_load_csv)
	ZEND_FE(Rlocale_load_csv_from_memory, arginfo_Rlocale_load_csv_from_memory)
	ZEND_FE(Rlocale_clear, arginfo_Rlocale_clear)
	ZEND_FE(Rlocale_set_text, arginfo_Rlocale_set_text)
	ZEND_FE(Rlocale_get_language_count, arginfo_Rlocale_get_language_count)
	ZEND_FE(Rlocale_get_language_at, arginfo_Rlocale_get_language_at)
	ZEND_FE(Rlocale_set_language, arginfo_Rlocale_set_language)
	ZEND_FE(Rlocale_get_language, arginfo_Rlocale_get_language)
	ZEND_FE(Rlocale_get_system_language, arginfo_Rlocale_get_system_language)
	ZEND_FE(Rlocale_set_fallback_language, arginfo_Rlocale_set_fallback_language)
	ZEND_FE(Rlocale_is_rtl, arginfo_Rlocale_is_rtl)
	ZEND_FE(Rlocale_set_changed_callback, arginfo_Rlocale_set_changed_callback)
	ZEND_FE(Rtr, arginfo_Rtr)
	ZEND_FE(Rtr_exists, arginfo_Rtr_exists)
	ZEND_FE(Rtr_format, arginfo_Rtr_format)
	ZEND_FE(Rtr_plural, arginfo_Rtr_plural)
	ZEND_FE(Rwidget_set_text_key, arginfo_Rwidget_set_text_key)
	ZEND_FE(Rlocale_format_number, arginfo_Rlocale_format_number)
	ZEND_FE_END
};
