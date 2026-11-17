/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 2d9f5486339367035ac0ffa42d298e10111bb0ba */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_create_from_xml, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xml, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_create_from_xml_file, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rwidget_create_from_xml arginfo_Rwindow_create_from_xml

#define arginfo_Rwidget_create_from_xml_file arginfo_Rwindow_create_from_xml_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_set_base_path, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_set_auto_load, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_get_auto_load, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_set_live_reload arginfo_Rxml_set_auto_load

#define arginfo_Rxml_get_live_reload arginfo_Rxml_get_auto_load

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_set_reload_callback, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_check_files arginfo_Rxml_get_auto_load

#define arginfo_Rxml_register_widgets arginfo_Rwindow_create_from_xml

#define arginfo_Rxml_register_widgets_from_file arginfo_Rwindow_create_from_xml_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_unregister_widget, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_is_widget_registered, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_get_registered_widget_count arginfo_Rxml_get_auto_load

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_get_registered_widget_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_register_tag, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, create, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, set_attribute, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_unregister_tag, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_is_tag_registered, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_resolve_path, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_set_attribute, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_document_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, root_tag, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_document_parse, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xml, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, error, RXmlError, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_document_load arginfo_Rwindow_create_from_xml_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_document_destroy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_document_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_document_get_root arginfo_Rxml_document_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_document_to_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_document_save, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_document_create_widget arginfo_Rxml_document_is_valid

#define arginfo_Rxml_document_create_window arginfo_Rxml_document_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_node_get_document arginfo_Rxml_node_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_get_tag, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_set_tag, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_node_is_comment arginfo_Rxml_node_is_valid

#define arginfo_Rxml_node_get_text arginfo_Rxml_node_get_tag

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_set_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_node_get_parent arginfo_Rxml_node_is_valid

#define arginfo_Rxml_node_get_child_count arginfo_Rxml_node_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_get_child, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_node_get_index arginfo_Rxml_node_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_add_child, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_add_comment, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_add_xml, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xml, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_remove, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_move, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, new_parent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_node_duplicate arginfo_Rxml_node_is_valid

#define arginfo_Rxml_node_to_string arginfo_Rxml_node_get_tag

#define arginfo_Rxml_node_get_attribute_count arginfo_Rxml_node_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_get_attribute_name, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_node_get_attribute_value arginfo_Rxml_node_get_attribute_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_get_attribute, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_node_set_attribute, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_node_get_line arginfo_Rxml_node_is_valid

#define arginfo_Rxml_node_get_widget arginfo_Rxml_node_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwidget_get_xml_node, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_get_tag_count arginfo_Rxml_get_auto_load

#define arginfo_Rxml_get_tag_name arginfo_Rxml_get_registered_widget_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_get_tag_description, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rxml_get_tag_children arginfo_Rxml_is_tag_registered

#define arginfo_Rxml_get_attribute_count arginfo_Rxml_is_tag_registered

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rxml_get_attribute_info, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, info, RXmlAttributeInfo, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RXmlError___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, line, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, column, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, message, IS_STRING, 0, "\'\'")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RXmlAttributeInfo___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, choices, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, group, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, description, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rwindow_create_from_xml);
ZEND_FUNCTION(Rwindow_create_from_xml_file);
ZEND_FUNCTION(Rwidget_create_from_xml);
ZEND_FUNCTION(Rwidget_create_from_xml_file);
ZEND_FUNCTION(Rxml_set_base_path);
ZEND_FUNCTION(Rxml_set_auto_load);
ZEND_FUNCTION(Rxml_get_auto_load);
ZEND_FUNCTION(Rxml_set_live_reload);
ZEND_FUNCTION(Rxml_get_live_reload);
ZEND_FUNCTION(Rxml_set_reload_callback);
ZEND_FUNCTION(Rxml_check_files);
ZEND_FUNCTION(Rxml_register_widgets);
ZEND_FUNCTION(Rxml_register_widgets_from_file);
ZEND_FUNCTION(Rxml_unregister_widget);
ZEND_FUNCTION(Rxml_is_widget_registered);
ZEND_FUNCTION(Rxml_get_registered_widget_count);
ZEND_FUNCTION(Rxml_get_registered_widget_name);
ZEND_FUNCTION(Rxml_register_tag);
ZEND_FUNCTION(Rxml_unregister_tag);
ZEND_FUNCTION(Rxml_is_tag_registered);
ZEND_FUNCTION(Rxml_resolve_path);
ZEND_FUNCTION(Rwidget_set_attribute);
ZEND_FUNCTION(Rxml_document_create);
ZEND_FUNCTION(Rxml_document_parse);
ZEND_FUNCTION(Rxml_document_load);
ZEND_FUNCTION(Rxml_document_destroy);
ZEND_FUNCTION(Rxml_document_is_valid);
ZEND_FUNCTION(Rxml_document_get_root);
ZEND_FUNCTION(Rxml_document_to_string);
ZEND_FUNCTION(Rxml_document_save);
ZEND_FUNCTION(Rxml_document_create_widget);
ZEND_FUNCTION(Rxml_document_create_window);
ZEND_FUNCTION(Rxml_node_is_valid);
ZEND_FUNCTION(Rxml_node_get_document);
ZEND_FUNCTION(Rxml_node_get_tag);
ZEND_FUNCTION(Rxml_node_set_tag);
ZEND_FUNCTION(Rxml_node_is_comment);
ZEND_FUNCTION(Rxml_node_get_text);
ZEND_FUNCTION(Rxml_node_set_text);
ZEND_FUNCTION(Rxml_node_get_parent);
ZEND_FUNCTION(Rxml_node_get_child_count);
ZEND_FUNCTION(Rxml_node_get_child);
ZEND_FUNCTION(Rxml_node_get_index);
ZEND_FUNCTION(Rxml_node_add_child);
ZEND_FUNCTION(Rxml_node_add_comment);
ZEND_FUNCTION(Rxml_node_add_xml);
ZEND_FUNCTION(Rxml_node_remove);
ZEND_FUNCTION(Rxml_node_move);
ZEND_FUNCTION(Rxml_node_duplicate);
ZEND_FUNCTION(Rxml_node_to_string);
ZEND_FUNCTION(Rxml_node_get_attribute_count);
ZEND_FUNCTION(Rxml_node_get_attribute_name);
ZEND_FUNCTION(Rxml_node_get_attribute_value);
ZEND_FUNCTION(Rxml_node_get_attribute);
ZEND_FUNCTION(Rxml_node_set_attribute);
ZEND_FUNCTION(Rxml_node_get_line);
ZEND_FUNCTION(Rxml_node_get_widget);
ZEND_FUNCTION(Rwidget_get_xml_node);
ZEND_FUNCTION(Rxml_get_tag_count);
ZEND_FUNCTION(Rxml_get_tag_name);
ZEND_FUNCTION(Rxml_get_tag_description);
ZEND_FUNCTION(Rxml_get_tag_children);
ZEND_FUNCTION(Rxml_get_attribute_count);
ZEND_FUNCTION(Rxml_get_attribute_info);
ZEND_METHOD(RXmlError, __construct);
ZEND_METHOD(RXmlAttributeInfo, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rwindow_create_from_xml, arginfo_Rwindow_create_from_xml)
	ZEND_FE(Rwindow_create_from_xml_file, arginfo_Rwindow_create_from_xml_file)
	ZEND_FE(Rwidget_create_from_xml, arginfo_Rwidget_create_from_xml)
	ZEND_FE(Rwidget_create_from_xml_file, arginfo_Rwidget_create_from_xml_file)
	ZEND_FE(Rxml_set_base_path, arginfo_Rxml_set_base_path)
	ZEND_FE(Rxml_set_auto_load, arginfo_Rxml_set_auto_load)
	ZEND_FE(Rxml_get_auto_load, arginfo_Rxml_get_auto_load)
	ZEND_FE(Rxml_set_live_reload, arginfo_Rxml_set_live_reload)
	ZEND_FE(Rxml_get_live_reload, arginfo_Rxml_get_live_reload)
	ZEND_FE(Rxml_set_reload_callback, arginfo_Rxml_set_reload_callback)
	ZEND_FE(Rxml_check_files, arginfo_Rxml_check_files)
	ZEND_FE(Rxml_register_widgets, arginfo_Rxml_register_widgets)
	ZEND_FE(Rxml_register_widgets_from_file, arginfo_Rxml_register_widgets_from_file)
	ZEND_FE(Rxml_unregister_widget, arginfo_Rxml_unregister_widget)
	ZEND_FE(Rxml_is_widget_registered, arginfo_Rxml_is_widget_registered)
	ZEND_FE(Rxml_get_registered_widget_count, arginfo_Rxml_get_registered_widget_count)
	ZEND_FE(Rxml_get_registered_widget_name, arginfo_Rxml_get_registered_widget_name)
	ZEND_FE(Rxml_register_tag, arginfo_Rxml_register_tag)
	ZEND_FE(Rxml_unregister_tag, arginfo_Rxml_unregister_tag)
	ZEND_FE(Rxml_is_tag_registered, arginfo_Rxml_is_tag_registered)
	ZEND_FE(Rxml_resolve_path, arginfo_Rxml_resolve_path)
	ZEND_FE(Rwidget_set_attribute, arginfo_Rwidget_set_attribute)
	ZEND_FE(Rxml_document_create, arginfo_Rxml_document_create)
	ZEND_FE(Rxml_document_parse, arginfo_Rxml_document_parse)
	ZEND_FE(Rxml_document_load, arginfo_Rxml_document_load)
	ZEND_FE(Rxml_document_destroy, arginfo_Rxml_document_destroy)
	ZEND_FE(Rxml_document_is_valid, arginfo_Rxml_document_is_valid)
	ZEND_FE(Rxml_document_get_root, arginfo_Rxml_document_get_root)
	ZEND_FE(Rxml_document_to_string, arginfo_Rxml_document_to_string)
	ZEND_FE(Rxml_document_save, arginfo_Rxml_document_save)
	ZEND_FE(Rxml_document_create_widget, arginfo_Rxml_document_create_widget)
	ZEND_FE(Rxml_document_create_window, arginfo_Rxml_document_create_window)
	ZEND_FE(Rxml_node_is_valid, arginfo_Rxml_node_is_valid)
	ZEND_FE(Rxml_node_get_document, arginfo_Rxml_node_get_document)
	ZEND_FE(Rxml_node_get_tag, arginfo_Rxml_node_get_tag)
	ZEND_FE(Rxml_node_set_tag, arginfo_Rxml_node_set_tag)
	ZEND_FE(Rxml_node_is_comment, arginfo_Rxml_node_is_comment)
	ZEND_FE(Rxml_node_get_text, arginfo_Rxml_node_get_text)
	ZEND_FE(Rxml_node_set_text, arginfo_Rxml_node_set_text)
	ZEND_FE(Rxml_node_get_parent, arginfo_Rxml_node_get_parent)
	ZEND_FE(Rxml_node_get_child_count, arginfo_Rxml_node_get_child_count)
	ZEND_FE(Rxml_node_get_child, arginfo_Rxml_node_get_child)
	ZEND_FE(Rxml_node_get_index, arginfo_Rxml_node_get_index)
	ZEND_FE(Rxml_node_add_child, arginfo_Rxml_node_add_child)
	ZEND_FE(Rxml_node_add_comment, arginfo_Rxml_node_add_comment)
	ZEND_FE(Rxml_node_add_xml, arginfo_Rxml_node_add_xml)
	ZEND_FE(Rxml_node_remove, arginfo_Rxml_node_remove)
	ZEND_FE(Rxml_node_move, arginfo_Rxml_node_move)
	ZEND_FE(Rxml_node_duplicate, arginfo_Rxml_node_duplicate)
	ZEND_FE(Rxml_node_to_string, arginfo_Rxml_node_to_string)
	ZEND_FE(Rxml_node_get_attribute_count, arginfo_Rxml_node_get_attribute_count)
	ZEND_FE(Rxml_node_get_attribute_name, arginfo_Rxml_node_get_attribute_name)
	ZEND_FE(Rxml_node_get_attribute_value, arginfo_Rxml_node_get_attribute_value)
	ZEND_FE(Rxml_node_get_attribute, arginfo_Rxml_node_get_attribute)
	ZEND_FE(Rxml_node_set_attribute, arginfo_Rxml_node_set_attribute)
	ZEND_FE(Rxml_node_get_line, arginfo_Rxml_node_get_line)
	ZEND_FE(Rxml_node_get_widget, arginfo_Rxml_node_get_widget)
	ZEND_FE(Rwidget_get_xml_node, arginfo_Rwidget_get_xml_node)
	ZEND_FE(Rxml_get_tag_count, arginfo_Rxml_get_tag_count)
	ZEND_FE(Rxml_get_tag_name, arginfo_Rxml_get_tag_name)
	ZEND_FE(Rxml_get_tag_description, arginfo_Rxml_get_tag_description)
	ZEND_FE(Rxml_get_tag_children, arginfo_Rxml_get_tag_children)
	ZEND_FE(Rxml_get_attribute_count, arginfo_Rxml_get_attribute_count)
	ZEND_FE(Rxml_get_attribute_info, arginfo_Rxml_get_attribute_info)
	ZEND_FE_END
};

static const zend_function_entry class_RXmlError_methods[] = {
	ZEND_ME(RXmlError, __construct, arginfo_class_RXmlError___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RXmlAttributeInfo_methods[] = {
	ZEND_ME(RXmlAttributeInfo, __construct, arginfo_class_RXmlAttributeInfo___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_xml_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_XML_TEXT", R_XML_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_XML_BOOL", R_XML_BOOL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_XML_NUMBER", R_XML_NUMBER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_XML_CHOICE", R_XML_CHOICE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_XML_COLOR", R_XML_COLOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_XML_ACTION", R_XML_ACTION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_XML_FILE", R_XML_FILE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_XML_NUMBERS", R_XML_NUMBERS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_XML_LIST", R_XML_LIST, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RXmlError(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RXmlError", class_RXmlError_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_line_default_value;
	ZVAL_LONG(&property_line_default_value, 0);
	zend_string *property_line_name = zend_string_init("line", sizeof("line") - 1, 1);
	zend_declare_typed_property(class_entry, property_line_name, &property_line_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_line_name);

	zval property_column_default_value;
	ZVAL_LONG(&property_column_default_value, 0);
	zend_string *property_column_name = zend_string_init("column", sizeof("column") - 1, 1);
	zend_declare_typed_property(class_entry, property_column_name, &property_column_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_column_name);

	zval property_message_default_value;
	ZVAL_EMPTY_STRING(&property_message_default_value);
	zend_string *property_message_name = zend_string_init("message", sizeof("message") - 1, 1);
	zend_declare_typed_property(class_entry, property_message_name, &property_message_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_message_name);

	return class_entry;
}

static zend_class_entry *register_class_RXmlAttributeInfo(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RXmlAttributeInfo", class_RXmlAttributeInfo_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_name_default_value;
	ZVAL_NULL(&property_name_default_value);
	zend_string *property_name_name = zend_string_init("name", sizeof("name") - 1, 1);
	zend_declare_typed_property(class_entry, property_name_name, &property_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_name_name);

	zval property_type_default_value;
	ZVAL_LONG(&property_type_default_value, 0);
	zend_string *property_type_name = zend_string_init("type", sizeof("type") - 1, 1);
	zend_declare_typed_property(class_entry, property_type_name, &property_type_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_type_name);

	zval property_choices_default_value;
	ZVAL_NULL(&property_choices_default_value);
	zend_string *property_choices_name = zend_string_init("choices", sizeof("choices") - 1, 1);
	zend_declare_typed_property(class_entry, property_choices_name, &property_choices_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_choices_name);

	zval property_group_default_value;
	ZVAL_NULL(&property_group_default_value);
	zend_string *property_group_name = zend_string_init("group", sizeof("group") - 1, 1);
	zend_declare_typed_property(class_entry, property_group_name, &property_group_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_group_name);

	zval property_description_default_value;
	ZVAL_NULL(&property_description_default_value);
	zend_string *property_description_name = zend_string_init("description", sizeof("description") - 1, 1);
	zend_declare_typed_property(class_entry, property_description_name, &property_description_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_description_name);

	return class_entry;
}
