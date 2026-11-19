/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a3e741919a31a8b7638e2a888be357f21235528a */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_load, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_load_file, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rscript_check arginfo_Rscript_load

#define arginfo_Rscript_check_file arginfo_Rscript_load_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_format, 0, 3, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indent, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_reset, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_has_function, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_set_enabled, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_is_enabled, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_set_limits, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, max_instructions, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_depth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_memory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rscript_set_log_callback, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rscript_set_diagnostic_callback arginfo_Rscript_set_log_callback

ZEND_FUNCTION(Rscript_load);
ZEND_FUNCTION(Rscript_load_file);
ZEND_FUNCTION(Rscript_check);
ZEND_FUNCTION(Rscript_check_file);
ZEND_FUNCTION(Rscript_format);
ZEND_FUNCTION(Rscript_reset);
ZEND_FUNCTION(Rscript_has_function);
ZEND_FUNCTION(Rscript_set_enabled);
ZEND_FUNCTION(Rscript_is_enabled);
ZEND_FUNCTION(Rscript_set_limits);
ZEND_FUNCTION(Rscript_set_log_callback);
ZEND_FUNCTION(Rscript_set_diagnostic_callback);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rscript_load, arginfo_Rscript_load)
	ZEND_FE(Rscript_load_file, arginfo_Rscript_load_file)
	ZEND_FE(Rscript_check, arginfo_Rscript_check)
	ZEND_FE(Rscript_check_file, arginfo_Rscript_check_file)
	ZEND_FE(Rscript_format, arginfo_Rscript_format)
	ZEND_FE(Rscript_reset, arginfo_Rscript_reset)
	ZEND_FE(Rscript_has_function, arginfo_Rscript_has_function)
	ZEND_FE(Rscript_set_enabled, arginfo_Rscript_set_enabled)
	ZEND_FE(Rscript_is_enabled, arginfo_Rscript_is_enabled)
	ZEND_FE(Rscript_set_limits, arginfo_Rscript_set_limits)
	ZEND_FE(Rscript_set_log_callback, arginfo_Rscript_set_log_callback)
	ZEND_FE(Rscript_set_diagnostic_callback, arginfo_Rscript_set_diagnostic_callback)
	ZEND_FE_END
};
