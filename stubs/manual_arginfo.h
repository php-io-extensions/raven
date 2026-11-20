/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 819edc72e8b7e789cabdc3e5b3ed3ec20daa7893 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rinit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backend, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rinit_ex, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RInitDesc, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rshutdown, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rset_allocator, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, allocator, RAllocator, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_Rallocator_get_system, 0, 0, RAllocator, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rerror_set_callback, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rparallel_for, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grain, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, function, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtask_run_async, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, task, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfile_read, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, size, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_save_memory, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, size, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_capture, 0, 3, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_decode, 0, 4, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data_size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_encode_png, 0, 4, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, size, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_set_queue_lock_callbacks, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, lock, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, unlock, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_set_draw_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbackend_register, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, vtable, RBackendVTable, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rhost_platform_register, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RHostPlatformDesc, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RPainter___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_RAllocator___construct arginfo_class_RPainter___construct

#define arginfo_class_RActionContext___construct arginfo_class_RPainter___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RCapture___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pixels, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RBackendVTable___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, Init, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, Shutdown, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, CreateSurface, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, DestroySurface, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, CreateTexture, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, UpdateTexture, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, SetTextureFilter, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, DestroyTexture, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, RenderFrame, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, WaitIdle, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, CreateShader, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, DestroyShader, Closure, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RHostPlatformDesc___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, set_cursor, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, clipboard_set, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, clipboard_get, Closure, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, wake, Closure, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, user_data, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rinit);
ZEND_FUNCTION(Rinit_ex);
ZEND_FUNCTION(Rshutdown);
ZEND_FUNCTION(Rset_allocator);
ZEND_FUNCTION(Rallocator_get_system);
ZEND_FUNCTION(Rerror_set_callback);
ZEND_FUNCTION(Rparallel_for);
ZEND_FUNCTION(Rtask_run_async);
ZEND_FUNCTION(Rfile_read);
ZEND_FUNCTION(Rpdf_document_save_memory);
ZEND_FUNCTION(Rwindow_capture);
ZEND_FUNCTION(Rimage_decode);
ZEND_FUNCTION(Rimage_encode_png);
ZEND_FUNCTION(Rvulkan_set_queue_lock_callbacks);
ZEND_FUNCTION(Rviewport_set_draw_callback);
ZEND_FUNCTION(Rbackend_register);
ZEND_FUNCTION(Rhost_platform_register);
ZEND_METHOD(RPainter, __construct);
ZEND_METHOD(RAllocator, __construct);
ZEND_METHOD(RActionContext, __construct);
ZEND_METHOD(RCapture, __construct);
ZEND_METHOD(RBackendVTable, __construct);
ZEND_METHOD(RHostPlatformDesc, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rinit, arginfo_Rinit)
	ZEND_FE(Rinit_ex, arginfo_Rinit_ex)
	ZEND_FE(Rshutdown, arginfo_Rshutdown)
	ZEND_FE(Rset_allocator, arginfo_Rset_allocator)
	ZEND_FE(Rallocator_get_system, arginfo_Rallocator_get_system)
	ZEND_FE(Rerror_set_callback, arginfo_Rerror_set_callback)
	ZEND_FE(Rparallel_for, arginfo_Rparallel_for)
	ZEND_FE(Rtask_run_async, arginfo_Rtask_run_async)
	ZEND_FE(Rfile_read, arginfo_Rfile_read)
	ZEND_FE(Rpdf_document_save_memory, arginfo_Rpdf_document_save_memory)
	ZEND_FE(Rwindow_capture, arginfo_Rwindow_capture)
	ZEND_FE(Rimage_decode, arginfo_Rimage_decode)
	ZEND_FE(Rimage_encode_png, arginfo_Rimage_encode_png)
	ZEND_FE(Rvulkan_set_queue_lock_callbacks, arginfo_Rvulkan_set_queue_lock_callbacks)
	ZEND_FE(Rviewport_set_draw_callback, arginfo_Rviewport_set_draw_callback)
	ZEND_FE(Rbackend_register, arginfo_Rbackend_register)
	ZEND_FE(Rhost_platform_register, arginfo_Rhost_platform_register)
	ZEND_FE_END
};

static const zend_function_entry class_RPainter_methods[] = {
	ZEND_ME(RPainter, __construct, arginfo_class_RPainter___construct, ZEND_ACC_PRIVATE)
	ZEND_FE_END
};

static const zend_function_entry class_RAllocator_methods[] = {
	ZEND_ME(RAllocator, __construct, arginfo_class_RAllocator___construct, ZEND_ACC_PRIVATE)
	ZEND_FE_END
};

static const zend_function_entry class_RActionContext_methods[] = {
	ZEND_ME(RActionContext, __construct, arginfo_class_RActionContext___construct, ZEND_ACC_PRIVATE)
	ZEND_FE_END
};

static const zend_function_entry class_RCapture_methods[] = {
	ZEND_ME(RCapture, __construct, arginfo_class_RCapture___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RBackendVTable_methods[] = {
	ZEND_ME(RBackendVTable, __construct, arginfo_class_RBackendVTable___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RHostPlatformDesc_methods[] = {
	ZEND_ME(RHostPlatformDesc, __construct, arginfo_class_RHostPlatformDesc___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RPainter(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RPainter", class_RPainter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_RAllocator(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RAllocator", class_RAllocator_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_RActionContext(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RActionContext", class_RActionContext_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_RCapture(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RCapture", class_RCapture_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_pixels_default_value;
	ZVAL_NULL(&property_pixels_default_value);
	zend_string *property_pixels_name = zend_string_init("pixels", sizeof("pixels") - 1, 1);
	zend_declare_typed_property(class_entry, property_pixels_name, &property_pixels_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_pixels_name);

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

static zend_class_entry *register_class_RBackendVTable(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RBackendVTable", class_RBackendVTable_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_name_default_value;
	ZVAL_NULL(&property_name_default_value);
	zend_string *property_name_name = zend_string_init("name", sizeof("name") - 1, 1);
	zend_declare_typed_property(class_entry, property_name_name, &property_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_name_name);

	zval property_Init_default_value;
	ZVAL_NULL(&property_Init_default_value);
	zend_string *property_Init_name = zend_string_init("Init", sizeof("Init") - 1, 1);
	zend_string *property_Init_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_Init_name, &property_Init_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_Init_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_Init_name);

	zval property_Shutdown_default_value;
	ZVAL_NULL(&property_Shutdown_default_value);
	zend_string *property_Shutdown_name = zend_string_init("Shutdown", sizeof("Shutdown") - 1, 1);
	zend_string *property_Shutdown_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_Shutdown_name, &property_Shutdown_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_Shutdown_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_Shutdown_name);

	zval property_CreateSurface_default_value;
	ZVAL_NULL(&property_CreateSurface_default_value);
	zend_string *property_CreateSurface_name = zend_string_init("CreateSurface", sizeof("CreateSurface") - 1, 1);
	zend_string *property_CreateSurface_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_CreateSurface_name, &property_CreateSurface_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_CreateSurface_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_CreateSurface_name);

	zval property_DestroySurface_default_value;
	ZVAL_NULL(&property_DestroySurface_default_value);
	zend_string *property_DestroySurface_name = zend_string_init("DestroySurface", sizeof("DestroySurface") - 1, 1);
	zend_string *property_DestroySurface_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_DestroySurface_name, &property_DestroySurface_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_DestroySurface_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_DestroySurface_name);

	zval property_CreateTexture_default_value;
	ZVAL_NULL(&property_CreateTexture_default_value);
	zend_string *property_CreateTexture_name = zend_string_init("CreateTexture", sizeof("CreateTexture") - 1, 1);
	zend_string *property_CreateTexture_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_CreateTexture_name, &property_CreateTexture_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_CreateTexture_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_CreateTexture_name);

	zval property_UpdateTexture_default_value;
	ZVAL_NULL(&property_UpdateTexture_default_value);
	zend_string *property_UpdateTexture_name = zend_string_init("UpdateTexture", sizeof("UpdateTexture") - 1, 1);
	zend_string *property_UpdateTexture_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_UpdateTexture_name, &property_UpdateTexture_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_UpdateTexture_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_UpdateTexture_name);

	zval property_SetTextureFilter_default_value;
	ZVAL_NULL(&property_SetTextureFilter_default_value);
	zend_string *property_SetTextureFilter_name = zend_string_init("SetTextureFilter", sizeof("SetTextureFilter") - 1, 1);
	zend_string *property_SetTextureFilter_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_SetTextureFilter_name, &property_SetTextureFilter_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_SetTextureFilter_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_SetTextureFilter_name);

	zval property_DestroyTexture_default_value;
	ZVAL_NULL(&property_DestroyTexture_default_value);
	zend_string *property_DestroyTexture_name = zend_string_init("DestroyTexture", sizeof("DestroyTexture") - 1, 1);
	zend_string *property_DestroyTexture_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_DestroyTexture_name, &property_DestroyTexture_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_DestroyTexture_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_DestroyTexture_name);

	zval property_RenderFrame_default_value;
	ZVAL_NULL(&property_RenderFrame_default_value);
	zend_string *property_RenderFrame_name = zend_string_init("RenderFrame", sizeof("RenderFrame") - 1, 1);
	zend_string *property_RenderFrame_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_RenderFrame_name, &property_RenderFrame_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_RenderFrame_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_RenderFrame_name);

	zval property_WaitIdle_default_value;
	ZVAL_NULL(&property_WaitIdle_default_value);
	zend_string *property_WaitIdle_name = zend_string_init("WaitIdle", sizeof("WaitIdle") - 1, 1);
	zend_string *property_WaitIdle_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_WaitIdle_name, &property_WaitIdle_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_WaitIdle_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_WaitIdle_name);

	zval property_CreateShader_default_value;
	ZVAL_NULL(&property_CreateShader_default_value);
	zend_string *property_CreateShader_name = zend_string_init("CreateShader", sizeof("CreateShader") - 1, 1);
	zend_string *property_CreateShader_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_CreateShader_name, &property_CreateShader_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_CreateShader_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_CreateShader_name);

	zval property_DestroyShader_default_value;
	ZVAL_NULL(&property_DestroyShader_default_value);
	zend_string *property_DestroyShader_name = zend_string_init("DestroyShader", sizeof("DestroyShader") - 1, 1);
	zend_string *property_DestroyShader_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_DestroyShader_name, &property_DestroyShader_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_DestroyShader_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_DestroyShader_name);

	return class_entry;
}

static zend_class_entry *register_class_RHostPlatformDesc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RHostPlatformDesc", class_RHostPlatformDesc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_set_cursor_default_value;
	ZVAL_NULL(&property_set_cursor_default_value);
	zend_string *property_set_cursor_name = zend_string_init("set_cursor", sizeof("set_cursor") - 1, 1);
	zend_string *property_set_cursor_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_set_cursor_name, &property_set_cursor_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_set_cursor_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_set_cursor_name);

	zval property_clipboard_set_default_value;
	ZVAL_NULL(&property_clipboard_set_default_value);
	zend_string *property_clipboard_set_name = zend_string_init("clipboard_set", sizeof("clipboard_set") - 1, 1);
	zend_string *property_clipboard_set_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_clipboard_set_name, &property_clipboard_set_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_clipboard_set_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_clipboard_set_name);

	zval property_clipboard_get_default_value;
	ZVAL_NULL(&property_clipboard_get_default_value);
	zend_string *property_clipboard_get_name = zend_string_init("clipboard_get", sizeof("clipboard_get") - 1, 1);
	zend_string *property_clipboard_get_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_clipboard_get_name, &property_clipboard_get_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_clipboard_get_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_clipboard_get_name);

	zval property_wake_default_value;
	ZVAL_NULL(&property_wake_default_value);
	zend_string *property_wake_name = zend_string_init("wake", sizeof("wake") - 1, 1);
	zend_string *property_wake_class_Closure = zend_string_init("Closure", sizeof("Closure")-1, 1);
	zend_declare_typed_property(class_entry, property_wake_name, &property_wake_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_wake_class_Closure, 0, MAY_BE_NULL));
	zend_string_release(property_wake_name);

	zval property_user_data_default_value;
	ZVAL_NULL(&property_user_data_default_value);
	zend_string *property_user_data_name = zend_string_init("user_data", sizeof("user_data") - 1, 1);
	zend_declare_typed_property(class_entry, property_user_data_name, &property_user_data_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ANY));
	zend_string_release(property_user_data_name);

	return class_entry;
}
