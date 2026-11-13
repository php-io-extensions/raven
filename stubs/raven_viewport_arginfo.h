/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 9514ee006176b819cf4e5d9f39ee7bf3f08205fa */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_set_texture, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_set_stretch, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_set_flip_y, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_set_native, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_get_native_handle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, native, RNativeWindow, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_get_pixel_size, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_set_resize_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rviewport_set_realtime, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, realtime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RViewportDrawInfo___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, backend, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, viewport, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, x, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, y, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clip_x, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clip_y, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clip_width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clip_height, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, framebuffer_width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, framebuffer_height, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frame_index, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, command_buffer, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, render_pass, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, color_format, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rviewport_set_texture);
ZEND_FUNCTION(Rviewport_set_stretch);
ZEND_FUNCTION(Rviewport_set_flip_y);
ZEND_FUNCTION(Rviewport_set_native);
ZEND_FUNCTION(Rviewport_get_native_handle);
ZEND_FUNCTION(Rviewport_get_pixel_size);
ZEND_FUNCTION(Rviewport_set_resize_callback);
ZEND_FUNCTION(Rviewport_set_realtime);
ZEND_METHOD(RViewportDrawInfo, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rviewport_set_texture, arginfo_Rviewport_set_texture)
	ZEND_FE(Rviewport_set_stretch, arginfo_Rviewport_set_stretch)
	ZEND_FE(Rviewport_set_flip_y, arginfo_Rviewport_set_flip_y)
	ZEND_FE(Rviewport_set_native, arginfo_Rviewport_set_native)
	ZEND_FE(Rviewport_get_native_handle, arginfo_Rviewport_get_native_handle)
	ZEND_FE(Rviewport_get_pixel_size, arginfo_Rviewport_get_pixel_size)
	ZEND_FE(Rviewport_set_resize_callback, arginfo_Rviewport_set_resize_callback)
	ZEND_FE(Rviewport_set_realtime, arginfo_Rviewport_set_realtime)
	ZEND_FE_END
};

static const zend_function_entry class_RViewportDrawInfo_methods[] = {
	ZEND_ME(RViewportDrawInfo, __construct, arginfo_class_RViewportDrawInfo___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RViewportDrawInfo(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RViewportDrawInfo", class_RViewportDrawInfo_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_backend_default_value;
	ZVAL_LONG(&property_backend_default_value, 0);
	zend_string *property_backend_name = zend_string_init("backend", sizeof("backend") - 1, 1);
	zend_declare_typed_property(class_entry, property_backend_name, &property_backend_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_backend_name);

	zval property_viewport_default_value;
	ZVAL_LONG(&property_viewport_default_value, 0);
	zend_string *property_viewport_name = zend_string_init("viewport", sizeof("viewport") - 1, 1);
	zend_declare_typed_property(class_entry, property_viewport_name, &property_viewport_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_viewport_name);

	zval property_window_default_value;
	ZVAL_LONG(&property_window_default_value, 0);
	zend_string *property_window_name = zend_string_init("window", sizeof("window") - 1, 1);
	zend_declare_typed_property(class_entry, property_window_name, &property_window_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_window_name);

	zval property_x_default_value;
	ZVAL_LONG(&property_x_default_value, 0);
	zend_string *property_x_name = zend_string_init("x", sizeof("x") - 1, 1);
	zend_declare_typed_property(class_entry, property_x_name, &property_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_x_name);

	zval property_y_default_value;
	ZVAL_LONG(&property_y_default_value, 0);
	zend_string *property_y_name = zend_string_init("y", sizeof("y") - 1, 1);
	zend_declare_typed_property(class_entry, property_y_name, &property_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_y_name);

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

	zval property_clip_x_default_value;
	ZVAL_LONG(&property_clip_x_default_value, 0);
	zend_string *property_clip_x_name = zend_string_init("clip_x", sizeof("clip_x") - 1, 1);
	zend_declare_typed_property(class_entry, property_clip_x_name, &property_clip_x_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_clip_x_name);

	zval property_clip_y_default_value;
	ZVAL_LONG(&property_clip_y_default_value, 0);
	zend_string *property_clip_y_name = zend_string_init("clip_y", sizeof("clip_y") - 1, 1);
	zend_declare_typed_property(class_entry, property_clip_y_name, &property_clip_y_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_clip_y_name);

	zval property_clip_width_default_value;
	ZVAL_LONG(&property_clip_width_default_value, 0);
	zend_string *property_clip_width_name = zend_string_init("clip_width", sizeof("clip_width") - 1, 1);
	zend_declare_typed_property(class_entry, property_clip_width_name, &property_clip_width_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_clip_width_name);

	zval property_clip_height_default_value;
	ZVAL_LONG(&property_clip_height_default_value, 0);
	zend_string *property_clip_height_name = zend_string_init("clip_height", sizeof("clip_height") - 1, 1);
	zend_declare_typed_property(class_entry, property_clip_height_name, &property_clip_height_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_clip_height_name);

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

	zval property_frame_index_default_value;
	ZVAL_LONG(&property_frame_index_default_value, 0);
	zend_string *property_frame_index_name = zend_string_init("frame_index", sizeof("frame_index") - 1, 1);
	zend_declare_typed_property(class_entry, property_frame_index_name, &property_frame_index_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_frame_index_name);

	zval property_command_buffer_default_value;
	ZVAL_LONG(&property_command_buffer_default_value, 0);
	zend_string *property_command_buffer_name = zend_string_init("command_buffer", sizeof("command_buffer") - 1, 1);
	zend_declare_typed_property(class_entry, property_command_buffer_name, &property_command_buffer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_command_buffer_name);

	zval property_render_pass_default_value;
	ZVAL_LONG(&property_render_pass_default_value, 0);
	zend_string *property_render_pass_name = zend_string_init("render_pass", sizeof("render_pass") - 1, 1);
	zend_declare_typed_property(class_entry, property_render_pass_name, &property_render_pass_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_render_pass_name);

	zval property_color_format_default_value;
	ZVAL_LONG(&property_color_format_default_value, 0);
	zend_string *property_color_format_name = zend_string_init("color_format", sizeof("color_format") - 1, 1);
	zend_declare_typed_property(class_entry, property_color_format_name, &property_color_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_color_format_name);

	return class_entry;
}
