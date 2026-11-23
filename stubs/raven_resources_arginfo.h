/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: b42b5ad7b91b6b309e769836cd76325ec025de1e */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, data_size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_create_from_file, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_destroy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_get_default, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rfont_get_monospace arginfo_Rfont_get_default

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_set_fallback, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fallback, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_set_variant, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, variant, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_get_variant, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rfont_measure_text, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, width, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtexture_create arginfo_Rfont_create

#define arginfo_Rtexture_create_async arginfo_Rfont_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_create_from_svg, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, svg, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, svg_size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scale, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_uses_current_color, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_get_density, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtexture_create_from_file arginfo_Rfont_create_from_file

#define arginfo_Rtexture_create_from_file_async arginfo_Rfont_create_from_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_create_from_url_async, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_create_from_pixels, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_update, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_decode_info, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data_size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, frame_count, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, loop_count, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_save_png, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtexture_is_ready arginfo_Rtexture_uses_current_color

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_wait, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtexture_destroy arginfo_Rtexture_wait

#define arginfo_Rtexture_is_valid arginfo_Rtexture_uses_current_color

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_get_size, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtexture_set_filter, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Ricon_get, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Ricon_get_count arginfo_Rfont_get_default

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Ricon_get_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rfont_create);
ZEND_FUNCTION(Rfont_create_from_file);
ZEND_FUNCTION(Rfont_destroy);
ZEND_FUNCTION(Rfont_is_valid);
ZEND_FUNCTION(Rfont_get_default);
ZEND_FUNCTION(Rfont_get_monospace);
ZEND_FUNCTION(Rfont_set_fallback);
ZEND_FUNCTION(Rfont_set_variant);
ZEND_FUNCTION(Rfont_get_variant);
ZEND_FUNCTION(Rfont_measure_text);
ZEND_FUNCTION(Rtexture_create);
ZEND_FUNCTION(Rtexture_create_async);
ZEND_FUNCTION(Rtexture_create_from_svg);
ZEND_FUNCTION(Rtexture_uses_current_color);
ZEND_FUNCTION(Rtexture_get_density);
ZEND_FUNCTION(Rtexture_create_from_file);
ZEND_FUNCTION(Rtexture_create_from_file_async);
ZEND_FUNCTION(Rtexture_create_from_url_async);
ZEND_FUNCTION(Rtexture_create_from_pixels);
ZEND_FUNCTION(Rtexture_update);
ZEND_FUNCTION(Rimage_decode_info);
ZEND_FUNCTION(Rimage_save_png);
ZEND_FUNCTION(Rtexture_is_ready);
ZEND_FUNCTION(Rtexture_wait);
ZEND_FUNCTION(Rtexture_destroy);
ZEND_FUNCTION(Rtexture_is_valid);
ZEND_FUNCTION(Rtexture_get_size);
ZEND_FUNCTION(Rtexture_set_filter);
ZEND_FUNCTION(Ricon_get);
ZEND_FUNCTION(Ricon_get_count);
ZEND_FUNCTION(Ricon_get_name);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rfont_create, arginfo_Rfont_create)
	ZEND_FE(Rfont_create_from_file, arginfo_Rfont_create_from_file)
	ZEND_FE(Rfont_destroy, arginfo_Rfont_destroy)
	ZEND_FE(Rfont_is_valid, arginfo_Rfont_is_valid)
	ZEND_FE(Rfont_get_default, arginfo_Rfont_get_default)
	ZEND_FE(Rfont_get_monospace, arginfo_Rfont_get_monospace)
	ZEND_FE(Rfont_set_fallback, arginfo_Rfont_set_fallback)
	ZEND_FE(Rfont_set_variant, arginfo_Rfont_set_variant)
	ZEND_FE(Rfont_get_variant, arginfo_Rfont_get_variant)
	ZEND_FE(Rfont_measure_text, arginfo_Rfont_measure_text)
	ZEND_FE(Rtexture_create, arginfo_Rtexture_create)
	ZEND_FE(Rtexture_create_async, arginfo_Rtexture_create_async)
	ZEND_FE(Rtexture_create_from_svg, arginfo_Rtexture_create_from_svg)
	ZEND_FE(Rtexture_uses_current_color, arginfo_Rtexture_uses_current_color)
	ZEND_FE(Rtexture_get_density, arginfo_Rtexture_get_density)
	ZEND_FE(Rtexture_create_from_file, arginfo_Rtexture_create_from_file)
	ZEND_FE(Rtexture_create_from_file_async, arginfo_Rtexture_create_from_file_async)
	ZEND_FE(Rtexture_create_from_url_async, arginfo_Rtexture_create_from_url_async)
	ZEND_FE(Rtexture_create_from_pixels, arginfo_Rtexture_create_from_pixels)
	ZEND_FE(Rtexture_update, arginfo_Rtexture_update)
	ZEND_FE(Rimage_decode_info, arginfo_Rimage_decode_info)
	ZEND_FE(Rimage_save_png, arginfo_Rimage_save_png)
	ZEND_FE(Rtexture_is_ready, arginfo_Rtexture_is_ready)
	ZEND_FE(Rtexture_wait, arginfo_Rtexture_wait)
	ZEND_FE(Rtexture_destroy, arginfo_Rtexture_destroy)
	ZEND_FE(Rtexture_is_valid, arginfo_Rtexture_is_valid)
	ZEND_FE(Rtexture_get_size, arginfo_Rtexture_get_size)
	ZEND_FE(Rtexture_set_filter, arginfo_Rtexture_set_filter)
	ZEND_FE(Ricon_get, arginfo_Ricon_get)
	ZEND_FE(Ricon_get_count, arginfo_Ricon_get_count)
	ZEND_FE(Ricon_get_name, arginfo_Ricon_get_name)
	ZEND_FE_END
};

static void register_raven_resources_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_FONT_REGULAR", R_FONT_REGULAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FONT_BOLD", R_FONT_BOLD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FONT_ITALIC", R_FONT_ITALIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FONT_BOLD_ITALIC", R_FONT_BOLD_ITALIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILTER_LINEAR", R_FILTER_LINEAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILTER_NEAREST", R_FILTER_NEAREST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FILTER_MIPMAP", R_FILTER_MIPMAP, CONST_PERSISTENT);
}
