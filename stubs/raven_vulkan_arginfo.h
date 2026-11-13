/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 9d962cbd88fe0833cc0ddfa592bcce7893991531 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_get_required_instance_extensions, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(1, count, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rvulkan_get_required_device_extensions arginfo_Rvulkan_get_required_instance_extensions

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_set_external_device, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, instance, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, physical_device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, queue, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, queue_family, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_get_instance, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rvulkan_get_physical_device arginfo_Rvulkan_get_instance

#define arginfo_Rvulkan_get_device arginfo_Rvulkan_get_instance

#define arginfo_Rvulkan_get_graphics_queue arginfo_Rvulkan_get_instance

#define arginfo_Rvulkan_get_graphics_queue_family arginfo_Rvulkan_get_instance

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_simulate_device_lost, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_texture_create_from_image_view, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_texture_set_image_view, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_texture_create_shared, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rvulkan_texture_get_shared_info, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, info, RSharedTextureInfo, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RSharedTextureInfo___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, handle, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, allocation_size, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, width, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rvulkan_get_required_instance_extensions);
ZEND_FUNCTION(Rvulkan_get_required_device_extensions);
ZEND_FUNCTION(Rvulkan_set_external_device);
ZEND_FUNCTION(Rvulkan_get_instance);
ZEND_FUNCTION(Rvulkan_get_physical_device);
ZEND_FUNCTION(Rvulkan_get_device);
ZEND_FUNCTION(Rvulkan_get_graphics_queue);
ZEND_FUNCTION(Rvulkan_get_graphics_queue_family);
ZEND_FUNCTION(Rvulkan_simulate_device_lost);
ZEND_FUNCTION(Rvulkan_texture_create_from_image_view);
ZEND_FUNCTION(Rvulkan_texture_set_image_view);
ZEND_FUNCTION(Rvulkan_texture_create_shared);
ZEND_FUNCTION(Rvulkan_texture_get_shared_info);
ZEND_METHOD(RSharedTextureInfo, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rvulkan_get_required_instance_extensions, arginfo_Rvulkan_get_required_instance_extensions)
	ZEND_FE(Rvulkan_get_required_device_extensions, arginfo_Rvulkan_get_required_device_extensions)
	ZEND_FE(Rvulkan_set_external_device, arginfo_Rvulkan_set_external_device)
	ZEND_FE(Rvulkan_get_instance, arginfo_Rvulkan_get_instance)
	ZEND_FE(Rvulkan_get_physical_device, arginfo_Rvulkan_get_physical_device)
	ZEND_FE(Rvulkan_get_device, arginfo_Rvulkan_get_device)
	ZEND_FE(Rvulkan_get_graphics_queue, arginfo_Rvulkan_get_graphics_queue)
	ZEND_FE(Rvulkan_get_graphics_queue_family, arginfo_Rvulkan_get_graphics_queue_family)
	ZEND_FE(Rvulkan_simulate_device_lost, arginfo_Rvulkan_simulate_device_lost)
	ZEND_FE(Rvulkan_texture_create_from_image_view, arginfo_Rvulkan_texture_create_from_image_view)
	ZEND_FE(Rvulkan_texture_set_image_view, arginfo_Rvulkan_texture_set_image_view)
	ZEND_FE(Rvulkan_texture_create_shared, arginfo_Rvulkan_texture_create_shared)
	ZEND_FE(Rvulkan_texture_get_shared_info, arginfo_Rvulkan_texture_get_shared_info)
	ZEND_FE_END
};

static const zend_function_entry class_RSharedTextureInfo_methods[] = {
	ZEND_ME(RSharedTextureInfo, __construct, arginfo_class_RSharedTextureInfo___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RSharedTextureInfo(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RSharedTextureInfo", class_RSharedTextureInfo_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_handle_default_value;
	ZVAL_LONG(&property_handle_default_value, 0);
	zend_string *property_handle_name = zend_string_init("handle", sizeof("handle") - 1, 1);
	zend_declare_typed_property(class_entry, property_handle_name, &property_handle_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_handle_name);

	zval property_allocation_size_default_value;
	ZVAL_LONG(&property_allocation_size_default_value, 0);
	zend_string *property_allocation_size_name = zend_string_init("allocation_size", sizeof("allocation_size") - 1, 1);
	zend_declare_typed_property(class_entry, property_allocation_size_name, &property_allocation_size_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_allocation_size_name);

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
