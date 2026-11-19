/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: bbdc7c17dd6706bc4c049d7044680b9b7e1fcafe */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcustom_set_paint_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcustom_set_measure_callback arginfo_Rcustom_set_paint_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_rect, 0, 10, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_shadow, 0, 11, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, blur, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_rect_outline, 0, 11, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, thickness, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_circle, 0, 8, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, center_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, center_y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_line, 0, 10, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, x0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, thickness, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_curve, 0, 14, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, x0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cx0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cy0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cx1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cy1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, thickness, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_triangle, 0, 11, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, x0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_image, 0, 10, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_text, 0, 10, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rdraw_glass arginfo_Rdraw_rect

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_spring, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_OBJ_INFO(0, spring, RSpring, 1)
	ZEND_ARG_TYPE_INFO(0, target, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, motion, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspring_kick, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, spring, RSpring, 1)
	ZEND_ARG_TYPE_INFO(0, velocity, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspring_set, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, spring, RSpring, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_push_clip_rect, 0, 5, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdraw_pop_clip_rect, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, painter, RPainter, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RSpring___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, value, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, velocity, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, started, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rcustom_set_paint_callback);
ZEND_FUNCTION(Rcustom_set_measure_callback);
ZEND_FUNCTION(Rdraw_rect);
ZEND_FUNCTION(Rdraw_shadow);
ZEND_FUNCTION(Rdraw_rect_outline);
ZEND_FUNCTION(Rdraw_circle);
ZEND_FUNCTION(Rdraw_line);
ZEND_FUNCTION(Rdraw_curve);
ZEND_FUNCTION(Rdraw_triangle);
ZEND_FUNCTION(Rdraw_image);
ZEND_FUNCTION(Rdraw_text);
ZEND_FUNCTION(Rdraw_glass);
ZEND_FUNCTION(Rdraw_spring);
ZEND_FUNCTION(Rspring_kick);
ZEND_FUNCTION(Rspring_set);
ZEND_FUNCTION(Rdraw_push_clip_rect);
ZEND_FUNCTION(Rdraw_pop_clip_rect);
ZEND_METHOD(RSpring, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rcustom_set_paint_callback, arginfo_Rcustom_set_paint_callback)
	ZEND_FE(Rcustom_set_measure_callback, arginfo_Rcustom_set_measure_callback)
	ZEND_FE(Rdraw_rect, arginfo_Rdraw_rect)
	ZEND_FE(Rdraw_shadow, arginfo_Rdraw_shadow)
	ZEND_FE(Rdraw_rect_outline, arginfo_Rdraw_rect_outline)
	ZEND_FE(Rdraw_circle, arginfo_Rdraw_circle)
	ZEND_FE(Rdraw_line, arginfo_Rdraw_line)
	ZEND_FE(Rdraw_curve, arginfo_Rdraw_curve)
	ZEND_FE(Rdraw_triangle, arginfo_Rdraw_triangle)
	ZEND_FE(Rdraw_image, arginfo_Rdraw_image)
	ZEND_FE(Rdraw_text, arginfo_Rdraw_text)
	ZEND_FE(Rdraw_glass, arginfo_Rdraw_glass)
	ZEND_FE(Rdraw_spring, arginfo_Rdraw_spring)
	ZEND_FE(Rspring_kick, arginfo_Rspring_kick)
	ZEND_FE(Rspring_set, arginfo_Rspring_set)
	ZEND_FE(Rdraw_push_clip_rect, arginfo_Rdraw_push_clip_rect)
	ZEND_FE(Rdraw_pop_clip_rect, arginfo_Rdraw_pop_clip_rect)
	ZEND_FE_END
};

static const zend_function_entry class_RSpring_methods[] = {
	ZEND_ME(RSpring, __construct, arginfo_class_RSpring___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_draw_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_MOTION_SNAPPY", R_MOTION_SNAPPY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOTION_SMOOTH", R_MOTION_SMOOTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOTION_BOUNCY", R_MOTION_BOUNCY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MOTION_WOBBLY", R_MOTION_WOBBLY, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RSpring(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RSpring", class_RSpring_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_value_default_value;
	ZVAL_DOUBLE(&property_value_default_value, 0.0);
	zend_string *property_value_name = zend_string_init("value", sizeof("value") - 1, 1);
	zend_declare_typed_property(class_entry, property_value_name, &property_value_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_value_name);

	zval property_velocity_default_value;
	ZVAL_DOUBLE(&property_velocity_default_value, 0.0);
	zend_string *property_velocity_name = zend_string_init("velocity", sizeof("velocity") - 1, 1);
	zend_declare_typed_property(class_entry, property_velocity_name, &property_velocity_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_velocity_name);

	zval property_started_default_value;
	ZVAL_LONG(&property_started_default_value, 0);
	zend_string *property_started_name = zend_string_init("started", sizeof("started") - 1, 1);
	zend_declare_typed_property(class_entry, property_started_name, &property_started_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_started_name);

	return class_entry;
}
