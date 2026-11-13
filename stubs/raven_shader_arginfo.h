/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 2e7b68f2d652d53f2c6cf832611e4e4bfcca7b10 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rshader_create, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spirv, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rshader_create_from_file, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rshader_destroy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, shader, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rshader_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shader, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rshader_get_flags arginfo_Rshader_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Reffect_get, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, effect, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Reffect_find, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Reffect_get_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, effect, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Reffect_get_defaults, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, effect, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, look, RShaderLook, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rshader_look_init, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, look, RShaderLook, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rshader_look_defaults, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, shader, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, look, RShaderLook, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_shader, 0, 7, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, shader, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, look, RShaderLook, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rborder_set_effect, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, border, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shader, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, look, RShaderLook, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rborder_get_effect, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, border, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RShaderLook___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, color, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, color2, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, params, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, radius, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, texture, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, animate, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pointer, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, hover, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, press, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rshader_create);
ZEND_FUNCTION(Rshader_create_from_file);
ZEND_FUNCTION(Rshader_destroy);
ZEND_FUNCTION(Rshader_is_valid);
ZEND_FUNCTION(Rshader_get_flags);
ZEND_FUNCTION(Reffect_get);
ZEND_FUNCTION(Reffect_find);
ZEND_FUNCTION(Reffect_get_name);
ZEND_FUNCTION(Reffect_get_defaults);
ZEND_FUNCTION(Rshader_look_init);
ZEND_FUNCTION(Rshader_look_defaults);
ZEND_FUNCTION(Rdraw_shader);
ZEND_FUNCTION(Rborder_set_effect);
ZEND_FUNCTION(Rborder_get_effect);
ZEND_METHOD(RShaderLook, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rshader_create, arginfo_Rshader_create)
	ZEND_FE(Rshader_create_from_file, arginfo_Rshader_create_from_file)
	ZEND_FE(Rshader_destroy, arginfo_Rshader_destroy)
	ZEND_FE(Rshader_is_valid, arginfo_Rshader_is_valid)
	ZEND_FE(Rshader_get_flags, arginfo_Rshader_get_flags)
	ZEND_FE(Reffect_get, arginfo_Reffect_get)
	ZEND_FE(Reffect_find, arginfo_Reffect_find)
	ZEND_FE(Reffect_get_name, arginfo_Reffect_get_name)
	ZEND_FE(Reffect_get_defaults, arginfo_Reffect_get_defaults)
	ZEND_FE(Rshader_look_init, arginfo_Rshader_look_init)
	ZEND_FE(Rshader_look_defaults, arginfo_Rshader_look_defaults)
	ZEND_FE(Rdraw_shader, arginfo_Rdraw_shader)
	ZEND_FE(Rborder_set_effect, arginfo_Rborder_set_effect)
	ZEND_FE(Rborder_get_effect, arginfo_Rborder_get_effect)
	ZEND_FE_END
};

static const zend_function_entry class_RShaderLook_methods[] = {
	ZEND_ME(RShaderLook, __construct, arginfo_class_RShaderLook___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_shader_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_EFFECT_AURORA", R_EFFECT_AURORA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EFFECT_SHIMMER", R_EFFECT_SHIMMER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EFFECT_NEON", R_EFFECT_NEON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EFFECT_RIPPLE", R_EFFECT_RIPPLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EFFECT_PLASMA", R_EFFECT_PLASMA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EFFECT_GRAIN", R_EFFECT_GRAIN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EFFECT_SPOTLIGHT", R_EFFECT_SPOTLIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EFFECT_MESH", R_EFFECT_MESH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_EFFECT_LAST_", R_EFFECT_LAST_, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_SHADER_BACKDROP", R_SHADER_BACKDROP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_SHADER_ANIMATED", R_SHADER_ANIMATED, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RShaderLook(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RShaderLook", class_RShaderLook_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_color_default_value;
	ZVAL_EMPTY_ARRAY(&property_color_default_value);
	zend_string *property_color_name = zend_string_init("color", sizeof("color") - 1, 1);
	zend_declare_typed_property(class_entry, property_color_name, &property_color_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_color_name);

	zval property_color2_default_value;
	ZVAL_EMPTY_ARRAY(&property_color2_default_value);
	zend_string *property_color2_name = zend_string_init("color2", sizeof("color2") - 1, 1);
	zend_declare_typed_property(class_entry, property_color2_name, &property_color2_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_color2_name);

	zval property_params_default_value;
	ZVAL_EMPTY_ARRAY(&property_params_default_value);
	zend_string *property_params_name = zend_string_init("params", sizeof("params") - 1, 1);
	zend_declare_typed_property(class_entry, property_params_name, &property_params_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_params_name);

	zval property_radius_default_value;
	ZVAL_DOUBLE(&property_radius_default_value, 0.0);
	zend_string *property_radius_name = zend_string_init("radius", sizeof("radius") - 1, 1);
	zend_declare_typed_property(class_entry, property_radius_name, &property_radius_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_radius_name);

	zval property_texture_default_value;
	ZVAL_LONG(&property_texture_default_value, 0);
	zend_string *property_texture_name = zend_string_init("texture", sizeof("texture") - 1, 1);
	zend_declare_typed_property(class_entry, property_texture_name, &property_texture_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_texture_name);

	zval property_animate_default_value;
	ZVAL_LONG(&property_animate_default_value, 0);
	zend_string *property_animate_name = zend_string_init("animate", sizeof("animate") - 1, 1);
	zend_declare_typed_property(class_entry, property_animate_name, &property_animate_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_animate_name);

	zval property_pointer_default_value;
	ZVAL_LONG(&property_pointer_default_value, 0);
	zend_string *property_pointer_name = zend_string_init("pointer", sizeof("pointer") - 1, 1);
	zend_declare_typed_property(class_entry, property_pointer_name, &property_pointer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_pointer_name);

	zval property_hover_default_value;
	ZVAL_DOUBLE(&property_hover_default_value, 0.0);
	zend_string *property_hover_name = zend_string_init("hover", sizeof("hover") - 1, 1);
	zend_declare_typed_property(class_entry, property_hover_name, &property_hover_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_hover_name);

	zval property_press_default_value;
	ZVAL_DOUBLE(&property_press_default_value, 0.0);
	zend_string *property_press_name = zend_string_init("press", sizeof("press") - 1, 1);
	zend_declare_typed_property(class_entry, property_press_name, &property_press_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_press_name);

	return class_entry;
}
