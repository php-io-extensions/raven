/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 5ce3f175100cb4b0a4124868f0ed37ffc2845c01 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbackend_device_lost, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RDrawInstance___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rect, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, uv, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clip, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, radii, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, color, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, border_color, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, border_width, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RDrawCommand___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, texture, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, first_instance, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, instance_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, callback, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, user_data, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, viewport, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, rect, IS_ARRAY, 0, "[0, 0, 0, 0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clip, IS_ARRAY, 0, "[0, 0, 0, 0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, shader, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RDrawData___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, instances, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, instance_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, commands, IS_ARRAY, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, command_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, framebuffer_width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, framebuffer_height, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clear_color, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frame_index, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, scale, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, vsync, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pointer, IS_ARRAY, 0, "[0.0, 0.0]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RTextureDesc___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, filter, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RBackendInitInfo___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, app_name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enable_validation, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, vsync, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window_system, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, native_display, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rbackend_device_lost);
ZEND_METHOD(RDrawInstance, __construct);
ZEND_METHOD(RDrawCommand, __construct);
ZEND_METHOD(RDrawData, __construct);
ZEND_METHOD(RTextureDesc, __construct);
ZEND_METHOD(RBackendInitInfo, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rbackend_device_lost, arginfo_Rbackend_device_lost)
	ZEND_FE_END
};

static const zend_function_entry class_RDrawInstance_methods[] = {
	ZEND_ME(RDrawInstance, __construct, arginfo_class_RDrawInstance___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RDrawCommand_methods[] = {
	ZEND_ME(RDrawCommand, __construct, arginfo_class_RDrawCommand___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RDrawData_methods[] = {
	ZEND_ME(RDrawData, __construct, arginfo_class_RDrawData___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RTextureDesc_methods[] = {
	ZEND_ME(RTextureDesc, __construct, arginfo_class_RTextureDesc___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RBackendInitInfo_methods[] = {
	ZEND_ME(RBackendInitInfo, __construct, arginfo_class_RBackendInitInfo___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_backend_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_DRAW_INSTANCES", R_DRAW_INSTANCES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DRAW_CALLBACK", R_DRAW_CALLBACK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DRAW_BACKDROP", R_DRAW_BACKDROP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DRAW_ERASE", R_DRAW_ERASE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_DRAW_SHADER", R_DRAW_SHADER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXTURE_RGBA8", R_TEXTURE_RGBA8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXTURE_ALPHA8", R_TEXTURE_ALPHA8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_RECT", R_PRIM_RECT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_GLYPH", R_PRIM_GLYPH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_SHADOW", R_PRIM_SHADOW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_LINE", R_PRIM_LINE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_TRIANGLE", R_PRIM_TRIANGLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_GLASS", R_PRIM_GLASS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_BLUR", R_PRIM_BLUR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_CURVE", R_PRIM_CURVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_SHADER", R_PRIM_SHADER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PRIM_MASK", R_PRIM_MASK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_INSTANCE_TEXTURED", R_INSTANCE_TEXTURED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_INSTANCE_NO_POINTER", R_INSTANCE_NO_POINTER, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RDrawInstance(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RDrawInstance", class_RDrawInstance_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_rect_default_value;
	ZVAL_EMPTY_ARRAY(&property_rect_default_value);
	zend_string *property_rect_name = zend_string_init("rect", sizeof("rect") - 1, 1);
	zend_declare_typed_property(class_entry, property_rect_name, &property_rect_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_rect_name);

	zval property_uv_default_value;
	ZVAL_EMPTY_ARRAY(&property_uv_default_value);
	zend_string *property_uv_name = zend_string_init("uv", sizeof("uv") - 1, 1);
	zend_declare_typed_property(class_entry, property_uv_name, &property_uv_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_uv_name);

	zval property_clip_default_value;
	ZVAL_EMPTY_ARRAY(&property_clip_default_value);
	zend_string *property_clip_name = zend_string_init("clip", sizeof("clip") - 1, 1);
	zend_declare_typed_property(class_entry, property_clip_name, &property_clip_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_clip_name);

	zval property_radii_default_value;
	ZVAL_EMPTY_ARRAY(&property_radii_default_value);
	zend_string *property_radii_name = zend_string_init("radii", sizeof("radii") - 1, 1);
	zend_declare_typed_property(class_entry, property_radii_name, &property_radii_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_radii_name);

	zval property_color_default_value;
	ZVAL_LONG(&property_color_default_value, 0);
	zend_string *property_color_name = zend_string_init("color", sizeof("color") - 1, 1);
	zend_declare_typed_property(class_entry, property_color_name, &property_color_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_color_name);

	zval property_border_color_default_value;
	ZVAL_LONG(&property_border_color_default_value, 0);
	zend_string *property_border_color_name = zend_string_init("border_color", sizeof("border_color") - 1, 1);
	zend_declare_typed_property(class_entry, property_border_color_name, &property_border_color_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_border_color_name);

	zval property_border_width_default_value;
	ZVAL_DOUBLE(&property_border_width_default_value, 0.0);
	zend_string *property_border_width_name = zend_string_init("border_width", sizeof("border_width") - 1, 1);
	zend_declare_typed_property(class_entry, property_border_width_name, &property_border_width_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_border_width_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	return class_entry;
}

static zend_class_entry *register_class_RDrawCommand(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RDrawCommand", class_RDrawCommand_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_type_default_value;
	ZVAL_LONG(&property_type_default_value, 0);
	zend_string *property_type_name = zend_string_init("type", sizeof("type") - 1, 1);
	zend_declare_typed_property(class_entry, property_type_name, &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_type_name);

	zval property_texture_default_value;
	ZVAL_LONG(&property_texture_default_value, 0);
	zend_string *property_texture_name = zend_string_init("texture", sizeof("texture") - 1, 1);
	zend_declare_typed_property(class_entry, property_texture_name, &property_texture_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_texture_name);

	zval property_first_instance_default_value;
	ZVAL_LONG(&property_first_instance_default_value, 0);
	zend_string *property_first_instance_name = zend_string_init("first_instance", sizeof("first_instance") - 1, 1);
	zend_declare_typed_property(class_entry, property_first_instance_name, &property_first_instance_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_first_instance_name);

	zval property_instance_count_default_value;
	ZVAL_LONG(&property_instance_count_default_value, 0);
	zend_string *property_instance_count_name = zend_string_init("instance_count", sizeof("instance_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_instance_count_name, &property_instance_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_instance_count_name);

	zval property_callback_default_value;
	ZVAL_LONG(&property_callback_default_value, 0);
	zend_string *property_callback_name = zend_string_init("callback", sizeof("callback") - 1, 1);
	zend_declare_typed_property(class_entry, property_callback_name, &property_callback_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_callback_name);

	zval property_user_data_default_value;
	ZVAL_LONG(&property_user_data_default_value, 0);
	zend_string *property_user_data_name = zend_string_init("user_data", sizeof("user_data") - 1, 1);
	zend_declare_typed_property(class_entry, property_user_data_name, &property_user_data_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_user_data_name);

	zval property_viewport_default_value;
	ZVAL_LONG(&property_viewport_default_value, 0);
	zend_string *property_viewport_name = zend_string_init("viewport", sizeof("viewport") - 1, 1);
	zend_declare_typed_property(class_entry, property_viewport_name, &property_viewport_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_viewport_name);

	zval property_rect_default_value;
	ZVAL_EMPTY_ARRAY(&property_rect_default_value);
	zend_string *property_rect_name = zend_string_init("rect", sizeof("rect") - 1, 1);
	zend_declare_typed_property(class_entry, property_rect_name, &property_rect_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_rect_name);

	zval property_clip_default_value;
	ZVAL_EMPTY_ARRAY(&property_clip_default_value);
	zend_string *property_clip_name = zend_string_init("clip", sizeof("clip") - 1, 1);
	zend_declare_typed_property(class_entry, property_clip_name, &property_clip_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_clip_name);

	zval property_shader_default_value;
	ZVAL_LONG(&property_shader_default_value, 0);
	zend_string *property_shader_name = zend_string_init("shader", sizeof("shader") - 1, 1);
	zend_declare_typed_property(class_entry, property_shader_name, &property_shader_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_shader_name);

	return class_entry;
}

static zend_class_entry *register_class_RDrawData(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RDrawData", class_RDrawData_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_window_default_value;
	ZVAL_LONG(&property_window_default_value, 0);
	zend_string *property_window_name = zend_string_init("window", sizeof("window") - 1, 1);
	zend_declare_typed_property(class_entry, property_window_name, &property_window_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_window_name);

	zval property_instances_default_value;
	ZVAL_NULL(&property_instances_default_value);
	zend_string *property_instances_name = zend_string_init("instances", sizeof("instances") - 1, 1);
	zend_declare_typed_property(class_entry, property_instances_name, &property_instances_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_instances_name);

	zval property_instance_count_default_value;
	ZVAL_LONG(&property_instance_count_default_value, 0);
	zend_string *property_instance_count_name = zend_string_init("instance_count", sizeof("instance_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_instance_count_name, &property_instance_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_instance_count_name);

	zval property_commands_default_value;
	ZVAL_NULL(&property_commands_default_value);
	zend_string *property_commands_name = zend_string_init("commands", sizeof("commands") - 1, 1);
	zend_declare_typed_property(class_entry, property_commands_name, &property_commands_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY|MAY_BE_NULL));
	zend_string_release(property_commands_name);

	zval property_command_count_default_value;
	ZVAL_LONG(&property_command_count_default_value, 0);
	zend_string *property_command_count_name = zend_string_init("command_count", sizeof("command_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_command_count_name, &property_command_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_command_count_name);

	zval property_framebuffer_width_default_value;
	ZVAL_LONG(&property_framebuffer_width_default_value, 0);
	zend_string *property_framebuffer_width_name = zend_string_init("framebuffer_width", sizeof("framebuffer_width") - 1, 1);
	zend_declare_typed_property(class_entry, property_framebuffer_width_name, &property_framebuffer_width_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_framebuffer_width_name);

	zval property_framebuffer_height_default_value;
	ZVAL_LONG(&property_framebuffer_height_default_value, 0);
	zend_string *property_framebuffer_height_name = zend_string_init("framebuffer_height", sizeof("framebuffer_height") - 1, 1);
	zend_declare_typed_property(class_entry, property_framebuffer_height_name, &property_framebuffer_height_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_framebuffer_height_name);

	zval property_clear_color_default_value;
	ZVAL_EMPTY_ARRAY(&property_clear_color_default_value);
	zend_string *property_clear_color_name = zend_string_init("clear_color", sizeof("clear_color") - 1, 1);
	zend_declare_typed_property(class_entry, property_clear_color_name, &property_clear_color_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_clear_color_name);

	zval property_frame_index_default_value;
	ZVAL_LONG(&property_frame_index_default_value, 0);
	zend_string *property_frame_index_name = zend_string_init("frame_index", sizeof("frame_index") - 1, 1);
	zend_declare_typed_property(class_entry, property_frame_index_name, &property_frame_index_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_frame_index_name);

	zval property_scale_default_value;
	ZVAL_DOUBLE(&property_scale_default_value, 0.0);
	zend_string *property_scale_name = zend_string_init("scale", sizeof("scale") - 1, 1);
	zend_declare_typed_property(class_entry, property_scale_name, &property_scale_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_scale_name);

	zval property_vsync_default_value;
	ZVAL_LONG(&property_vsync_default_value, 0);
	zend_string *property_vsync_name = zend_string_init("vsync", sizeof("vsync") - 1, 1);
	zend_declare_typed_property(class_entry, property_vsync_name, &property_vsync_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_vsync_name);

	zval property_pointer_default_value;
	ZVAL_EMPTY_ARRAY(&property_pointer_default_value);
	zend_string *property_pointer_name = zend_string_init("pointer", sizeof("pointer") - 1, 1);
	zend_declare_typed_property(class_entry, property_pointer_name, &property_pointer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_pointer_name);

	return class_entry;
}

static zend_class_entry *register_class_RTextureDesc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RTextureDesc", class_RTextureDesc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

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

	zval property_format_default_value;
	ZVAL_LONG(&property_format_default_value, 0);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_format_name);

	zval property_filter_default_value;
	ZVAL_LONG(&property_filter_default_value, 0);
	zend_string *property_filter_name = zend_string_init("filter", sizeof("filter") - 1, 1);
	zend_declare_typed_property(class_entry, property_filter_name, &property_filter_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_filter_name);

	return class_entry;
}

static zend_class_entry *register_class_RBackendInitInfo(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RBackendInitInfo", class_RBackendInitInfo_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_app_name_default_value;
	ZVAL_NULL(&property_app_name_default_value);
	zend_string *property_app_name_name = zend_string_init("app_name", sizeof("app_name") - 1, 1);
	zend_declare_typed_property(class_entry, property_app_name_name, &property_app_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_app_name_name);

	zval property_enable_validation_default_value;
	ZVAL_LONG(&property_enable_validation_default_value, 0);
	zend_string *property_enable_validation_name = zend_string_init("enable_validation", sizeof("enable_validation") - 1, 1);
	zend_declare_typed_property(class_entry, property_enable_validation_name, &property_enable_validation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_enable_validation_name);

	zval property_vsync_default_value;
	ZVAL_LONG(&property_vsync_default_value, 0);
	zend_string *property_vsync_name = zend_string_init("vsync", sizeof("vsync") - 1, 1);
	zend_declare_typed_property(class_entry, property_vsync_name, &property_vsync_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_vsync_name);

	zval property_window_system_default_value;
	ZVAL_LONG(&property_window_system_default_value, 0);
	zend_string *property_window_system_name = zend_string_init("window_system", sizeof("window_system") - 1, 1);
	zend_declare_typed_property(class_entry, property_window_system_name, &property_window_system_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_window_system_name);

	zval property_native_display_default_value;
	ZVAL_LONG(&property_native_display_default_value, 0);
	zend_string *property_native_display_name = zend_string_init("native_display", sizeof("native_display") - 1, 1);
	zend_declare_typed_property(class_entry, property_native_display_name, &property_native_display_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_native_display_name);

	return class_entry;
}
