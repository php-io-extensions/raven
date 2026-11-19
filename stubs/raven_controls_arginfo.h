/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a331117f94c0e3a0514a633ccaeb9623fd358541 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_get_text, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_font, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_text_size, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_text_align, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, align, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_wrap, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wrap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_markdown, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_get_markdown, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_link_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rlabel_get_plain_text arginfo_Rlabel_get_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_set_selectable, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectable, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rlabel_get_selectable arginfo_Rlabel_get_markdown

#define arginfo_Rlabel_get_selected_text arginfo_Rlabel_get_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlabel_select_all, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rlabel_clear_selection arginfo_Rlabel_select_all

#define arginfo_Rbutton_create arginfo_Rlabel_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbutton_set_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbutton_set_style, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbutton_set_clicked_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcheckbox_create arginfo_Rlabel_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcheckbox_set_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checkbox, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcheckbox_get_text, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, checkbox, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcheckbox_set_checked, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checkbox, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checked, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcheckbox_is_checked, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checkbox, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcheckbox_set_style, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checkbox, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcheckbox_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checkbox, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslider_set_range, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslider_set_value, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslider_get_value, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslider_get_range, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, minimum, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, maximum, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, step, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslider_set_step, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslider_set_orientation, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rslider_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, slider, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rprogress_bar_set_value, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, progress_bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rprogress_bar_get_value, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, progress_bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_set_texture, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_set_tint_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_set_tint_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_set_stretch, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_set_region, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min_u, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, min_v, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max_u, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max_v, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rimage_set_corner_radius, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_set_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_get_text, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_input_set_placeholder arginfo_Rtext_input_set_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_set_password, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_is_password, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_input_is_read_only arginfo_Rtext_input_is_password

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_set_read_only, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, read_only, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_set_max_length, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_select_all, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_set_input_type, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_input_get_input_type arginfo_Rtext_input_is_password

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_set_return_key, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_input_get_return_key arginfo_Rtext_input_is_password

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_input_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text_input, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_input_set_committed_callback arginfo_Rtext_input_set_changed_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_set_range, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_set_value, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_get_value, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_get_range, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, minimum, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, maximum, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, step, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_set_step, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_set_decimals, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, decimals, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_set_buttons, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_get_buttons, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rspin_box_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spin_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcombo_box_add_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, combo_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcombo_box_clear_items, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, combo_box, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcombo_box_get_item_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, combo_box, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcombo_box_get_item_text, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, combo_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcombo_box_set_selected, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, combo_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcombo_box_get_selected arginfo_Rcombo_box_get_item_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcombo_box_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, combo_box, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rseparator_set_orientation, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, separator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlist_view_add_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlist_view_set_item_text, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, list_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlist_view_get_item_text, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, list_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlist_view_remove_item, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, list_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlist_view_clear_items, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, list_view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlist_view_get_item_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, list_view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlist_view_set_virtual_items, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, list_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlist_view_set_item_color_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, list_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rlist_view_set_selected arginfo_Rlist_view_remove_item

#define arginfo_Rlist_view_get_selected arginfo_Rlist_view_get_item_count

#define arginfo_Rlist_view_scroll_to_item arginfo_Rlist_view_remove_item

#define arginfo_Rlist_view_set_selection_changed_callback arginfo_Rlist_view_set_item_color_callback

#define arginfo_Rlist_view_set_activated_callback arginfo_Rlist_view_set_item_color_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_add_item, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_destroy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_clear_items, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_set_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_get_text, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_set_expanded, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expanded, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtree_item_is_expanded arginfo_Rtree_item_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_set_user_handle, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_get_user_handle, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_get_item_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_get_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtree_item_get_parent arginfo_Rtree_item_is_valid

#define arginfo_Rtree_item_get_child_count arginfo_Rtree_item_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_get_child, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_set_selected_item, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtree_view_get_selected_item arginfo_Rtree_view_get_item_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_set_selection_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtree_view_set_activated_callback arginfo_Rtree_view_set_selection_changed_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_set_icon, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, u0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, u1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_set_text_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_set_multi_select, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_item_set_selected, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtree_item_is_selected arginfo_Rtree_item_is_valid

#define arginfo_Rtree_view_clear_selection arginfo_Rtree_view_clear_items

#define arginfo_Rtree_view_get_selection_count arginfo_Rtree_view_get_item_count

#define arginfo_Rtree_view_get_selection arginfo_Rtree_view_get_item

#define arginfo_Rtree_view_scroll_to_item arginfo_Rtree_view_set_selected_item

#define arginfo_Rtree_view_set_context_callback arginfo_Rtree_view_set_selection_changed_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_set_drag_type, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_get_item_at, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, local_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, local_y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtree_view_set_drop_highlight, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tree_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, whole_tree, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_bar_set_native, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, menu_bar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, native, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_bar_is_native, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu_bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_add_menu, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu_bar_or_menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_set_title, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_add_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_add_separator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rmenu_add_header arginfo_Rmenu_add_item

#define arginfo_Rmenu_bar_add_divider arginfo_Rmenu_bar_is_native

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_set_title_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rmenu_item_set_text arginfo_Rtree_item_set_text

#define arginfo_Rmenu_item_get_text arginfo_Rtree_item_get_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_item_set_shortcut, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rmenu_item_set_shortcut_text arginfo_Rtree_item_set_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_item_set_checkable, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checkable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_item_set_checked, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checked, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_item_set_icon, 0, 7, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, u0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, u1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, tint, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rmenu_item_is_checked arginfo_Rtree_item_is_valid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_item_set_clicked_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmenu_open, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_close_popups, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_set_items, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_refresh, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_get_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_set_tile_size, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, icon_size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_set_empty_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_set_icon_width, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtile_view_set_sections arginfo_Rtile_view_set_items

#define arginfo_Rtile_view_get_section_count arginfo_Rtile_view_get_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_get_section_of, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_set_section_folded, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, folded, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_is_section_folded, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_get_section_at, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, local_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, local_y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_set_section_toggled_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_set_selected, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtile_view_is_selected arginfo_Rtile_view_get_section_of

#define arginfo_Rtile_view_clear_selection arginfo_Rtile_view_refresh

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_select_only, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtile_view_get_current arginfo_Rtile_view_get_count

#define arginfo_Rtile_view_get_selection_count arginfo_Rtile_view_get_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_get_selection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nth, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtile_view_scroll_to arginfo_Rtile_view_select_only

#define arginfo_Rtile_view_get_item_at arginfo_Rtile_view_get_section_at

#define arginfo_Rtile_view_set_drop_highlight arginfo_Rtile_view_select_only

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtile_view_set_drag_type, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tile_view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtile_view_set_drag_data_callback arginfo_Rtile_view_set_section_toggled_callback

#define arginfo_Rtile_view_set_selection_changed_callback arginfo_Rtile_view_set_section_toggled_callback

#define arginfo_Rtile_view_set_activated_callback arginfo_Rtile_view_set_section_toggled_callback

#define arginfo_Rtile_view_set_context_callback arginfo_Rtile_view_set_section_toggled_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_add_column, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_get_column_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_clear_columns, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_column_header, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_get_column_header, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_column_width, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_get_column_width, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_column_fill, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_column_sortable, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sortable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_column_align, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, align, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_add_row, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cells, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_cell, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_get_cell, 0, 3, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_remove_row, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtable_clear_rows arginfo_Rtable_clear_columns

#define arginfo_Rtable_get_row_count arginfo_Rtable_get_column_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_virtual_rows, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_cell_color_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_cell_text_color, 0, 7, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_multi_select, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_row_selected, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_is_row_selected, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtable_clear_selection arginfo_Rtable_clear_columns

#define arginfo_Rtable_get_selection_count arginfo_Rtable_get_column_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_get_selection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtable_set_selected arginfo_Rtable_remove_row

#define arginfo_Rtable_get_selected arginfo_Rtable_get_column_count

#define arginfo_Rtable_scroll_to_row arginfo_Rtable_remove_row

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_sort, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descending, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtable_get_sort_column arginfo_Rtable_get_column_count

#define arginfo_Rtable_is_sort_descending arginfo_Rtable_get_column_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_header_visible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtable_set_grid_lines arginfo_Rtable_set_header_visible

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtable_set_striped, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, table, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, striped, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtable_set_selection_changed_callback arginfo_Rtable_set_cell_color_callback

#define arginfo_Rtable_set_activated_callback arginfo_Rtable_set_cell_color_callback

#define arginfo_Rtable_set_sort_callback arginfo_Rtable_set_cell_color_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_set_date, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_get_date, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, year, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, month, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, day, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_set_range, 0, 7, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min_year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min_month, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min_day, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_month, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max_day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_set_first_day_of_week, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_set_format, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_get_text, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_set_open, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, open, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_is_open, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rdate_picker_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, date_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtime_picker_set_time, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, time_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hour, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minute, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, second, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtime_picker_get_time, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, time_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, hour, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, minute, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, second, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtime_picker_set_seconds_visible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, time_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtime_picker_set_minute_step, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, time_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtime_picker_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, time_picker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_show, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_show_kind, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_hide, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtoast_clear arginfo_Rtoast_hide

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_is_shown, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtoast_get_count arginfo_Rtoast_is_shown

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_get_text, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_set_queue, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, queue, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtoast_get_queue arginfo_Rtoast_is_shown

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_set_max_visible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_set_kind, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_set_action_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtoast_set_action_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbreadcrumb_set_items, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, breadcrumb, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, items, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbreadcrumb_add_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, breadcrumb, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbreadcrumb_truncate, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, breadcrumb, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbreadcrumb_get_item_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, breadcrumb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbreadcrumb_get_item_text, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, breadcrumb, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rbreadcrumb_set_clicked_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, breadcrumb, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rrating_set_value, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rating, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rrating_get_value, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rating, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rrating_set_max, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rating, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rrating_get_max, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rating, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rrating_set_allow_half, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rating, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rrating_set_read_only, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rating, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, read_only, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rrating_set_star_size, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rating, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rrating_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, rating, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpagination_set_page_count, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, pagination, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpagination_get_page_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pagination, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpagination_set_page, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, pagination, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rpagination_get_page arginfo_Rpagination_get_page_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpagination_set_siblings, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, pagination, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, siblings, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpagination_set_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, pagination, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_title, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_title, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_add_series, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_remove_series, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_clear, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_series_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_name, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_series_name, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_data, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rplot_append_series_data arginfo_Rplot_set_series_data

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_add_point, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rplot_clear_series_data arginfo_Rplot_remove_series

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_point_count, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_point, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_max_points, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_color, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_line, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_marker, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_marker_filled, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filled, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_step, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_fill, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opacity, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_axes, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x_axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y_axis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_series_visible, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, series, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rplot_is_series_visible arginfo_Rplot_get_point_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_label, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_axis_label, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_scale, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_axis_scale, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_linear_threshold, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, threshold, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_range, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_axis_range, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, min, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, max, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_auto_fit, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, auto_fit, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rplot_is_axis_auto_fit arginfo_Rplot_get_axis_scale

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_format, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_visible, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_grid, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grid, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_inverted, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, inverted, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_axis_locked, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locked, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rplot_fit arginfo_Rplot_clear

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_legend, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, legend, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_crosshair, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, crosshair, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_mouse_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shown, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rplot_set_tooltips arginfo_Rplot_set_mouse_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_mouse_position, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_data_to_point, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, point_x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, point_y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_point_to_data, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point_x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, point_y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_add_drag_line, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_remove_drag_line, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rplot_get_drag_line_count arginfo_Rplot_get_series_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_drag_line_value, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_get_drag_line_value, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_drag_line_color, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rplot_set_view_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, plot, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rplot_set_drag_line_callback arginfo_Rplot_set_view_changed_callback

#define arginfo_Rplot_set_series_toggled_callback arginfo_Rplot_set_view_changed_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_kind, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_kind, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_title, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_title, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_format, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_legend, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shown, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_clear, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_get_hovered arginfo_Rchart_get_kind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_add_slice, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_remove_slice, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slice, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_get_slice_count arginfo_Rchart_get_kind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_slice_value, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slice, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_slice_value, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slice, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_slice_label, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slice, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_slice_label, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slice, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_slice_color, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, slice, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_total, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_set_selected arginfo_Rchart_remove_slice

#define arginfo_Rchart_get_selected arginfo_Rchart_get_kind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_hole, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ratio, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_center_text, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, caption, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_slice_clicked_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_range, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_range, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, min, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, max, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_value, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_get_value arginfo_Rchart_get_total

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_add_band, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_clear_bands arginfo_Rchart_clear

#define arginfo_Rchart_get_band_count arginfo_Rchart_get_kind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_grid, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, values, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_get_row_count arginfo_Rchart_get_kind

#define arginfo_Rchart_get_column_count arginfo_Rchart_get_kind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_cell, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_cell, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_row_labels, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, labels, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_set_column_labels arginfo_Rchart_set_row_labels

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_row_label, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_column_label, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_color_scale, 0, 9, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, low_r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, low_g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, low_b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, low_a, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, high_r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, high_g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, high_b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, high_a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_set_cell_clicked_callback arginfo_Rchart_set_slice_clicked_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_values, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, values, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_push_value, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max_count, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_get_value_count arginfo_Rchart_get_kind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_get_value_at, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rchart_set_fill, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, chart, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rchart_set_marker arginfo_Rchart_set_legend

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_is_available, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_load_file, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_load_memory, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, data_size, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_close, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_get_status, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rpdf_view_get_page_count arginfo_Rpdf_view_get_status

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_get_page_size, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, width, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, height, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_set_page, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rpdf_view_get_page arginfo_Rpdf_view_get_status

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_set_zoom, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zoom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_get_zoom, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_set_fit, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fit, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rpdf_view_get_fit arginfo_Rpdf_view_get_status

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_get_title, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_get_page_text, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_set_page_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcarousel_create arginfo_Rpdf_is_available

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_set_page, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animated, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_get_page, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcarousel_get_page_count arginfo_Rcarousel_get_page

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_next, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcarousel_prev arginfo_Rcarousel_next

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_set_loop, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loop, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcarousel_get_loop arginfo_Rcarousel_get_page

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_set_autoplay, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_get_autoplay, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_set_indicators_visible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcarousel_get_indicators_visible arginfo_Rcarousel_get_page

#define arginfo_Rcarousel_set_arrows_visible arginfo_Rcarousel_set_indicators_visible

#define arginfo_Rcarousel_get_arrows_visible arginfo_Rcarousel_get_page

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_set_orientation, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rcarousel_get_orientation arginfo_Rcarousel_get_page

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rcarousel_set_page_changed_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, carousel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_view_print, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RPdfPrintDesc, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rmap_view_create arginfo_Rpdf_is_available

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_center, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, latitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, longitude, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_get_center, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, latitude, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, longitude, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_zoom, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zoom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_get_zoom, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_zoom_range, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min_zoom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max_zoom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_get_zoom_range, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, min_zoom, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, max_zoom, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_animate_to, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, latitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, longitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, zoom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_screen_to_latlon, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, latitude, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, longitude, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_latlon_to_screen, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, latitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, longitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, y, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_tile_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rmap_view_set_tile_cancel_callback arginfo_Rmap_view_set_tile_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_tile, 0, 7, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_tile_data, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data_size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_tile_failed, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_tile_path, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path_template, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_get_tile_path, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_tile_size, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_get_tile_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_cache_size, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rmap_view_get_cache_usage arginfo_Rmap_view_get_tile_size

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_clear_tiles, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_get_tile_state, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_add_marker, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, latitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, longitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_remove_marker, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rmap_view_clear_markers arginfo_Rmap_view_clear_tiles

#define arginfo_Rmap_view_get_marker_count arginfo_Rmap_view_get_tile_size

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_marker_position, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, latitude, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, longitude, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_marker_label, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_marker_color, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rmap_view_set_marker_clicked_callback arginfo_Rmap_view_set_tile_callback

#define arginfo_Rmap_view_set_view_changed_callback arginfo_Rmap_view_set_tile_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmap_view_set_attribution, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rmap_view_get_attribution arginfo_Rmap_view_get_tile_path

#define arginfo_Rpdf_document_create arginfo_Rpdf_is_available

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_delete, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_set_title, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_set_author, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, author, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_set_subject, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subject, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_add_page, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_get_page_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_set_fill_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rpdf_document_set_stroke_color arginfo_Rpdf_document_set_fill_color

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_set_line_width, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_draw_rect, 0, 7, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, paint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_draw_ellipse, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, paint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_draw_line, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_add_font, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, data_size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_add_font_from_file, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_set_font, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_get_line_height, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_measure_text, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_draw_text, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_draw_paragraph, 0, 6, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, align, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_draw_image, 0, 8, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pixels_width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixels_height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_draw_window, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rpdf_document_save arginfo_Rpdf_document_add_font_from_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_print, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RPdfPrintDesc, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, data_size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_print_file, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RPdfPrintDesc, 1)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rpdf_document_print, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RPdfPrintDesc, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RPdfPrintDesc___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, window, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, title, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, printer, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, copies, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, output, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, password, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RTileItem___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, detail, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, badge, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, icon, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, uv, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, tint, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, icon_radius, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text_color, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, note, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, detail_color, IS_ARRAY, 0, "[0.0, 0.0, 0.0, 0.0]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RTileSection___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, first, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, detail, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rlabel_create);
ZEND_FUNCTION(Rlabel_set_text);
ZEND_FUNCTION(Rlabel_get_text);
ZEND_FUNCTION(Rlabel_set_font);
ZEND_FUNCTION(Rlabel_set_text_size);
ZEND_FUNCTION(Rlabel_set_text_align);
ZEND_FUNCTION(Rlabel_set_wrap);
ZEND_FUNCTION(Rlabel_set_color);
ZEND_FUNCTION(Rlabel_set_markdown);
ZEND_FUNCTION(Rlabel_get_markdown);
ZEND_FUNCTION(Rlabel_set_link_callback);
ZEND_FUNCTION(Rlabel_get_plain_text);
ZEND_FUNCTION(Rlabel_set_selectable);
ZEND_FUNCTION(Rlabel_get_selectable);
ZEND_FUNCTION(Rlabel_get_selected_text);
ZEND_FUNCTION(Rlabel_select_all);
ZEND_FUNCTION(Rlabel_clear_selection);
ZEND_FUNCTION(Rbutton_create);
ZEND_FUNCTION(Rbutton_set_text);
ZEND_FUNCTION(Rbutton_set_style);
ZEND_FUNCTION(Rbutton_set_clicked_callback);
ZEND_FUNCTION(Rcheckbox_create);
ZEND_FUNCTION(Rcheckbox_set_text);
ZEND_FUNCTION(Rcheckbox_get_text);
ZEND_FUNCTION(Rcheckbox_set_checked);
ZEND_FUNCTION(Rcheckbox_is_checked);
ZEND_FUNCTION(Rcheckbox_set_style);
ZEND_FUNCTION(Rcheckbox_set_changed_callback);
ZEND_FUNCTION(Rslider_set_range);
ZEND_FUNCTION(Rslider_set_value);
ZEND_FUNCTION(Rslider_get_value);
ZEND_FUNCTION(Rslider_get_range);
ZEND_FUNCTION(Rslider_set_step);
ZEND_FUNCTION(Rslider_set_orientation);
ZEND_FUNCTION(Rslider_set_changed_callback);
ZEND_FUNCTION(Rprogress_bar_set_value);
ZEND_FUNCTION(Rprogress_bar_get_value);
ZEND_FUNCTION(Rimage_set_texture);
ZEND_FUNCTION(Rimage_set_tint_color);
ZEND_FUNCTION(Rimage_set_tint_text);
ZEND_FUNCTION(Rimage_set_stretch);
ZEND_FUNCTION(Rimage_set_region);
ZEND_FUNCTION(Rimage_set_corner_radius);
ZEND_FUNCTION(Rtext_input_set_text);
ZEND_FUNCTION(Rtext_input_get_text);
ZEND_FUNCTION(Rtext_input_set_placeholder);
ZEND_FUNCTION(Rtext_input_set_password);
ZEND_FUNCTION(Rtext_input_is_password);
ZEND_FUNCTION(Rtext_input_is_read_only);
ZEND_FUNCTION(Rtext_input_set_read_only);
ZEND_FUNCTION(Rtext_input_set_max_length);
ZEND_FUNCTION(Rtext_input_select_all);
ZEND_FUNCTION(Rtext_input_set_input_type);
ZEND_FUNCTION(Rtext_input_get_input_type);
ZEND_FUNCTION(Rtext_input_set_return_key);
ZEND_FUNCTION(Rtext_input_get_return_key);
ZEND_FUNCTION(Rtext_input_set_changed_callback);
ZEND_FUNCTION(Rtext_input_set_committed_callback);
ZEND_FUNCTION(Rspin_box_set_range);
ZEND_FUNCTION(Rspin_box_set_value);
ZEND_FUNCTION(Rspin_box_get_value);
ZEND_FUNCTION(Rspin_box_get_range);
ZEND_FUNCTION(Rspin_box_set_step);
ZEND_FUNCTION(Rspin_box_set_decimals);
ZEND_FUNCTION(Rspin_box_set_buttons);
ZEND_FUNCTION(Rspin_box_get_buttons);
ZEND_FUNCTION(Rspin_box_set_changed_callback);
ZEND_FUNCTION(Rcombo_box_add_item);
ZEND_FUNCTION(Rcombo_box_clear_items);
ZEND_FUNCTION(Rcombo_box_get_item_count);
ZEND_FUNCTION(Rcombo_box_get_item_text);
ZEND_FUNCTION(Rcombo_box_set_selected);
ZEND_FUNCTION(Rcombo_box_get_selected);
ZEND_FUNCTION(Rcombo_box_set_changed_callback);
ZEND_FUNCTION(Rseparator_set_orientation);
ZEND_FUNCTION(Rlist_view_add_item);
ZEND_FUNCTION(Rlist_view_set_item_text);
ZEND_FUNCTION(Rlist_view_get_item_text);
ZEND_FUNCTION(Rlist_view_remove_item);
ZEND_FUNCTION(Rlist_view_clear_items);
ZEND_FUNCTION(Rlist_view_get_item_count);
ZEND_FUNCTION(Rlist_view_set_virtual_items);
ZEND_FUNCTION(Rlist_view_set_item_color_callback);
ZEND_FUNCTION(Rlist_view_set_selected);
ZEND_FUNCTION(Rlist_view_get_selected);
ZEND_FUNCTION(Rlist_view_scroll_to_item);
ZEND_FUNCTION(Rlist_view_set_selection_changed_callback);
ZEND_FUNCTION(Rlist_view_set_activated_callback);
ZEND_FUNCTION(Rtree_view_add_item);
ZEND_FUNCTION(Rtree_item_destroy);
ZEND_FUNCTION(Rtree_view_clear_items);
ZEND_FUNCTION(Rtree_item_is_valid);
ZEND_FUNCTION(Rtree_item_set_text);
ZEND_FUNCTION(Rtree_item_get_text);
ZEND_FUNCTION(Rtree_item_set_expanded);
ZEND_FUNCTION(Rtree_item_is_expanded);
ZEND_FUNCTION(Rtree_item_set_user_handle);
ZEND_FUNCTION(Rtree_item_get_user_handle);
ZEND_FUNCTION(Rtree_view_get_item_count);
ZEND_FUNCTION(Rtree_view_get_item);
ZEND_FUNCTION(Rtree_item_get_parent);
ZEND_FUNCTION(Rtree_item_get_child_count);
ZEND_FUNCTION(Rtree_item_get_child);
ZEND_FUNCTION(Rtree_view_set_selected_item);
ZEND_FUNCTION(Rtree_view_get_selected_item);
ZEND_FUNCTION(Rtree_view_set_selection_changed_callback);
ZEND_FUNCTION(Rtree_view_set_activated_callback);
ZEND_FUNCTION(Rtree_item_set_icon);
ZEND_FUNCTION(Rtree_item_set_text_color);
ZEND_FUNCTION(Rtree_view_set_multi_select);
ZEND_FUNCTION(Rtree_item_set_selected);
ZEND_FUNCTION(Rtree_item_is_selected);
ZEND_FUNCTION(Rtree_view_clear_selection);
ZEND_FUNCTION(Rtree_view_get_selection_count);
ZEND_FUNCTION(Rtree_view_get_selection);
ZEND_FUNCTION(Rtree_view_scroll_to_item);
ZEND_FUNCTION(Rtree_view_set_context_callback);
ZEND_FUNCTION(Rtree_view_set_drag_type);
ZEND_FUNCTION(Rtree_view_get_item_at);
ZEND_FUNCTION(Rtree_view_set_drop_highlight);
ZEND_FUNCTION(Rmenu_bar_set_native);
ZEND_FUNCTION(Rmenu_bar_is_native);
ZEND_FUNCTION(Rmenu_add_menu);
ZEND_FUNCTION(Rmenu_set_title);
ZEND_FUNCTION(Rmenu_add_item);
ZEND_FUNCTION(Rmenu_add_separator);
ZEND_FUNCTION(Rmenu_add_header);
ZEND_FUNCTION(Rmenu_bar_add_divider);
ZEND_FUNCTION(Rmenu_set_title_color);
ZEND_FUNCTION(Rmenu_item_set_text);
ZEND_FUNCTION(Rmenu_item_get_text);
ZEND_FUNCTION(Rmenu_item_set_shortcut);
ZEND_FUNCTION(Rmenu_item_set_shortcut_text);
ZEND_FUNCTION(Rmenu_item_set_checkable);
ZEND_FUNCTION(Rmenu_item_set_checked);
ZEND_FUNCTION(Rmenu_item_set_icon);
ZEND_FUNCTION(Rmenu_item_is_checked);
ZEND_FUNCTION(Rmenu_item_set_clicked_callback);
ZEND_FUNCTION(Rmenu_open);
ZEND_FUNCTION(Rwindow_close_popups);
ZEND_FUNCTION(Rtile_view_set_items);
ZEND_FUNCTION(Rtile_view_refresh);
ZEND_FUNCTION(Rtile_view_get_count);
ZEND_FUNCTION(Rtile_view_set_tile_size);
ZEND_FUNCTION(Rtile_view_set_empty_text);
ZEND_FUNCTION(Rtile_view_set_icon_width);
ZEND_FUNCTION(Rtile_view_set_sections);
ZEND_FUNCTION(Rtile_view_get_section_count);
ZEND_FUNCTION(Rtile_view_get_section_of);
ZEND_FUNCTION(Rtile_view_set_section_folded);
ZEND_FUNCTION(Rtile_view_is_section_folded);
ZEND_FUNCTION(Rtile_view_get_section_at);
ZEND_FUNCTION(Rtile_view_set_section_toggled_callback);
ZEND_FUNCTION(Rtile_view_set_selected);
ZEND_FUNCTION(Rtile_view_is_selected);
ZEND_FUNCTION(Rtile_view_clear_selection);
ZEND_FUNCTION(Rtile_view_select_only);
ZEND_FUNCTION(Rtile_view_get_current);
ZEND_FUNCTION(Rtile_view_get_selection_count);
ZEND_FUNCTION(Rtile_view_get_selection);
ZEND_FUNCTION(Rtile_view_scroll_to);
ZEND_FUNCTION(Rtile_view_get_item_at);
ZEND_FUNCTION(Rtile_view_set_drop_highlight);
ZEND_FUNCTION(Rtile_view_set_drag_type);
ZEND_FUNCTION(Rtile_view_set_drag_data_callback);
ZEND_FUNCTION(Rtile_view_set_selection_changed_callback);
ZEND_FUNCTION(Rtile_view_set_activated_callback);
ZEND_FUNCTION(Rtile_view_set_context_callback);
ZEND_FUNCTION(Rtable_add_column);
ZEND_FUNCTION(Rtable_get_column_count);
ZEND_FUNCTION(Rtable_clear_columns);
ZEND_FUNCTION(Rtable_set_column_header);
ZEND_FUNCTION(Rtable_get_column_header);
ZEND_FUNCTION(Rtable_set_column_width);
ZEND_FUNCTION(Rtable_get_column_width);
ZEND_FUNCTION(Rtable_set_column_fill);
ZEND_FUNCTION(Rtable_set_column_sortable);
ZEND_FUNCTION(Rtable_set_column_align);
ZEND_FUNCTION(Rtable_add_row);
ZEND_FUNCTION(Rtable_set_cell);
ZEND_FUNCTION(Rtable_get_cell);
ZEND_FUNCTION(Rtable_remove_row);
ZEND_FUNCTION(Rtable_clear_rows);
ZEND_FUNCTION(Rtable_get_row_count);
ZEND_FUNCTION(Rtable_set_virtual_rows);
ZEND_FUNCTION(Rtable_set_cell_color_callback);
ZEND_FUNCTION(Rtable_set_cell_text_color);
ZEND_FUNCTION(Rtable_set_multi_select);
ZEND_FUNCTION(Rtable_set_row_selected);
ZEND_FUNCTION(Rtable_is_row_selected);
ZEND_FUNCTION(Rtable_clear_selection);
ZEND_FUNCTION(Rtable_get_selection_count);
ZEND_FUNCTION(Rtable_get_selection);
ZEND_FUNCTION(Rtable_set_selected);
ZEND_FUNCTION(Rtable_get_selected);
ZEND_FUNCTION(Rtable_scroll_to_row);
ZEND_FUNCTION(Rtable_sort);
ZEND_FUNCTION(Rtable_get_sort_column);
ZEND_FUNCTION(Rtable_is_sort_descending);
ZEND_FUNCTION(Rtable_set_header_visible);
ZEND_FUNCTION(Rtable_set_grid_lines);
ZEND_FUNCTION(Rtable_set_striped);
ZEND_FUNCTION(Rtable_set_selection_changed_callback);
ZEND_FUNCTION(Rtable_set_activated_callback);
ZEND_FUNCTION(Rtable_set_sort_callback);
ZEND_FUNCTION(Rdate_picker_set_date);
ZEND_FUNCTION(Rdate_picker_get_date);
ZEND_FUNCTION(Rdate_picker_set_range);
ZEND_FUNCTION(Rdate_picker_set_first_day_of_week);
ZEND_FUNCTION(Rdate_picker_set_format);
ZEND_FUNCTION(Rdate_picker_get_text);
ZEND_FUNCTION(Rdate_picker_set_open);
ZEND_FUNCTION(Rdate_picker_is_open);
ZEND_FUNCTION(Rdate_picker_set_changed_callback);
ZEND_FUNCTION(Rtime_picker_set_time);
ZEND_FUNCTION(Rtime_picker_get_time);
ZEND_FUNCTION(Rtime_picker_set_seconds_visible);
ZEND_FUNCTION(Rtime_picker_set_minute_step);
ZEND_FUNCTION(Rtime_picker_set_changed_callback);
ZEND_FUNCTION(Rtoast_show);
ZEND_FUNCTION(Rtoast_show_kind);
ZEND_FUNCTION(Rtoast_hide);
ZEND_FUNCTION(Rtoast_clear);
ZEND_FUNCTION(Rtoast_is_shown);
ZEND_FUNCTION(Rtoast_get_count);
ZEND_FUNCTION(Rtoast_get_text);
ZEND_FUNCTION(Rtoast_set_queue);
ZEND_FUNCTION(Rtoast_get_queue);
ZEND_FUNCTION(Rtoast_set_max_visible);
ZEND_FUNCTION(Rtoast_set_kind);
ZEND_FUNCTION(Rtoast_set_action_text);
ZEND_FUNCTION(Rtoast_set_action_callback);
ZEND_FUNCTION(Rbreadcrumb_set_items);
ZEND_FUNCTION(Rbreadcrumb_add_item);
ZEND_FUNCTION(Rbreadcrumb_truncate);
ZEND_FUNCTION(Rbreadcrumb_get_item_count);
ZEND_FUNCTION(Rbreadcrumb_get_item_text);
ZEND_FUNCTION(Rbreadcrumb_set_clicked_callback);
ZEND_FUNCTION(Rrating_set_value);
ZEND_FUNCTION(Rrating_get_value);
ZEND_FUNCTION(Rrating_set_max);
ZEND_FUNCTION(Rrating_get_max);
ZEND_FUNCTION(Rrating_set_allow_half);
ZEND_FUNCTION(Rrating_set_read_only);
ZEND_FUNCTION(Rrating_set_star_size);
ZEND_FUNCTION(Rrating_set_changed_callback);
ZEND_FUNCTION(Rpagination_set_page_count);
ZEND_FUNCTION(Rpagination_get_page_count);
ZEND_FUNCTION(Rpagination_set_page);
ZEND_FUNCTION(Rpagination_get_page);
ZEND_FUNCTION(Rpagination_set_siblings);
ZEND_FUNCTION(Rpagination_set_changed_callback);
ZEND_FUNCTION(Rplot_set_title);
ZEND_FUNCTION(Rplot_get_title);
ZEND_FUNCTION(Rplot_add_series);
ZEND_FUNCTION(Rplot_remove_series);
ZEND_FUNCTION(Rplot_clear);
ZEND_FUNCTION(Rplot_get_series_count);
ZEND_FUNCTION(Rplot_set_series_name);
ZEND_FUNCTION(Rplot_get_series_name);
ZEND_FUNCTION(Rplot_set_series_data);
ZEND_FUNCTION(Rplot_append_series_data);
ZEND_FUNCTION(Rplot_add_point);
ZEND_FUNCTION(Rplot_clear_series_data);
ZEND_FUNCTION(Rplot_get_point_count);
ZEND_FUNCTION(Rplot_get_point);
ZEND_FUNCTION(Rplot_set_series_max_points);
ZEND_FUNCTION(Rplot_set_series_color);
ZEND_FUNCTION(Rplot_set_series_line);
ZEND_FUNCTION(Rplot_set_series_marker);
ZEND_FUNCTION(Rplot_set_series_marker_filled);
ZEND_FUNCTION(Rplot_set_series_step);
ZEND_FUNCTION(Rplot_set_series_fill);
ZEND_FUNCTION(Rplot_set_series_axes);
ZEND_FUNCTION(Rplot_set_series_visible);
ZEND_FUNCTION(Rplot_is_series_visible);
ZEND_FUNCTION(Rplot_set_axis_label);
ZEND_FUNCTION(Rplot_get_axis_label);
ZEND_FUNCTION(Rplot_set_axis_scale);
ZEND_FUNCTION(Rplot_get_axis_scale);
ZEND_FUNCTION(Rplot_set_axis_linear_threshold);
ZEND_FUNCTION(Rplot_set_axis_range);
ZEND_FUNCTION(Rplot_get_axis_range);
ZEND_FUNCTION(Rplot_set_axis_auto_fit);
ZEND_FUNCTION(Rplot_is_axis_auto_fit);
ZEND_FUNCTION(Rplot_set_axis_format);
ZEND_FUNCTION(Rplot_set_axis_visible);
ZEND_FUNCTION(Rplot_set_axis_grid);
ZEND_FUNCTION(Rplot_set_axis_inverted);
ZEND_FUNCTION(Rplot_set_axis_locked);
ZEND_FUNCTION(Rplot_fit);
ZEND_FUNCTION(Rplot_set_legend);
ZEND_FUNCTION(Rplot_set_crosshair);
ZEND_FUNCTION(Rplot_set_mouse_text);
ZEND_FUNCTION(Rplot_set_tooltips);
ZEND_FUNCTION(Rplot_get_mouse_position);
ZEND_FUNCTION(Rplot_data_to_point);
ZEND_FUNCTION(Rplot_point_to_data);
ZEND_FUNCTION(Rplot_add_drag_line);
ZEND_FUNCTION(Rplot_remove_drag_line);
ZEND_FUNCTION(Rplot_get_drag_line_count);
ZEND_FUNCTION(Rplot_set_drag_line_value);
ZEND_FUNCTION(Rplot_get_drag_line_value);
ZEND_FUNCTION(Rplot_set_drag_line_color);
ZEND_FUNCTION(Rplot_set_view_changed_callback);
ZEND_FUNCTION(Rplot_set_drag_line_callback);
ZEND_FUNCTION(Rplot_set_series_toggled_callback);
ZEND_FUNCTION(Rchart_create);
ZEND_FUNCTION(Rchart_set_kind);
ZEND_FUNCTION(Rchart_get_kind);
ZEND_FUNCTION(Rchart_set_title);
ZEND_FUNCTION(Rchart_get_title);
ZEND_FUNCTION(Rchart_set_format);
ZEND_FUNCTION(Rchart_set_color);
ZEND_FUNCTION(Rchart_set_legend);
ZEND_FUNCTION(Rchart_clear);
ZEND_FUNCTION(Rchart_get_hovered);
ZEND_FUNCTION(Rchart_add_slice);
ZEND_FUNCTION(Rchart_remove_slice);
ZEND_FUNCTION(Rchart_get_slice_count);
ZEND_FUNCTION(Rchart_set_slice_value);
ZEND_FUNCTION(Rchart_get_slice_value);
ZEND_FUNCTION(Rchart_set_slice_label);
ZEND_FUNCTION(Rchart_get_slice_label);
ZEND_FUNCTION(Rchart_set_slice_color);
ZEND_FUNCTION(Rchart_get_total);
ZEND_FUNCTION(Rchart_set_selected);
ZEND_FUNCTION(Rchart_get_selected);
ZEND_FUNCTION(Rchart_set_hole);
ZEND_FUNCTION(Rchart_set_center_text);
ZEND_FUNCTION(Rchart_set_slice_clicked_callback);
ZEND_FUNCTION(Rchart_set_range);
ZEND_FUNCTION(Rchart_get_range);
ZEND_FUNCTION(Rchart_set_value);
ZEND_FUNCTION(Rchart_get_value);
ZEND_FUNCTION(Rchart_add_band);
ZEND_FUNCTION(Rchart_clear_bands);
ZEND_FUNCTION(Rchart_get_band_count);
ZEND_FUNCTION(Rchart_set_grid);
ZEND_FUNCTION(Rchart_get_row_count);
ZEND_FUNCTION(Rchart_get_column_count);
ZEND_FUNCTION(Rchart_set_cell);
ZEND_FUNCTION(Rchart_get_cell);
ZEND_FUNCTION(Rchart_set_row_labels);
ZEND_FUNCTION(Rchart_set_column_labels);
ZEND_FUNCTION(Rchart_get_row_label);
ZEND_FUNCTION(Rchart_get_column_label);
ZEND_FUNCTION(Rchart_set_color_scale);
ZEND_FUNCTION(Rchart_set_cell_clicked_callback);
ZEND_FUNCTION(Rchart_set_values);
ZEND_FUNCTION(Rchart_push_value);
ZEND_FUNCTION(Rchart_get_value_count);
ZEND_FUNCTION(Rchart_get_value_at);
ZEND_FUNCTION(Rchart_set_fill);
ZEND_FUNCTION(Rchart_set_marker);
ZEND_FUNCTION(Rpdf_is_available);
ZEND_FUNCTION(Rpdf_view_load_file);
ZEND_FUNCTION(Rpdf_view_load_memory);
ZEND_FUNCTION(Rpdf_view_close);
ZEND_FUNCTION(Rpdf_view_get_status);
ZEND_FUNCTION(Rpdf_view_get_page_count);
ZEND_FUNCTION(Rpdf_view_get_page_size);
ZEND_FUNCTION(Rpdf_view_set_page);
ZEND_FUNCTION(Rpdf_view_get_page);
ZEND_FUNCTION(Rpdf_view_set_zoom);
ZEND_FUNCTION(Rpdf_view_get_zoom);
ZEND_FUNCTION(Rpdf_view_set_fit);
ZEND_FUNCTION(Rpdf_view_get_fit);
ZEND_FUNCTION(Rpdf_view_get_title);
ZEND_FUNCTION(Rpdf_view_get_page_text);
ZEND_FUNCTION(Rpdf_view_set_page_changed_callback);
ZEND_FUNCTION(Rcarousel_create);
ZEND_FUNCTION(Rcarousel_set_page);
ZEND_FUNCTION(Rcarousel_get_page);
ZEND_FUNCTION(Rcarousel_get_page_count);
ZEND_FUNCTION(Rcarousel_next);
ZEND_FUNCTION(Rcarousel_prev);
ZEND_FUNCTION(Rcarousel_set_loop);
ZEND_FUNCTION(Rcarousel_get_loop);
ZEND_FUNCTION(Rcarousel_set_autoplay);
ZEND_FUNCTION(Rcarousel_get_autoplay);
ZEND_FUNCTION(Rcarousel_set_indicators_visible);
ZEND_FUNCTION(Rcarousel_get_indicators_visible);
ZEND_FUNCTION(Rcarousel_set_arrows_visible);
ZEND_FUNCTION(Rcarousel_get_arrows_visible);
ZEND_FUNCTION(Rcarousel_set_orientation);
ZEND_FUNCTION(Rcarousel_get_orientation);
ZEND_FUNCTION(Rcarousel_set_page_changed_callback);
ZEND_FUNCTION(Rpdf_view_print);
ZEND_FUNCTION(Rmap_view_create);
ZEND_FUNCTION(Rmap_view_set_center);
ZEND_FUNCTION(Rmap_view_get_center);
ZEND_FUNCTION(Rmap_view_set_zoom);
ZEND_FUNCTION(Rmap_view_get_zoom);
ZEND_FUNCTION(Rmap_view_set_zoom_range);
ZEND_FUNCTION(Rmap_view_get_zoom_range);
ZEND_FUNCTION(Rmap_view_animate_to);
ZEND_FUNCTION(Rmap_view_screen_to_latlon);
ZEND_FUNCTION(Rmap_view_latlon_to_screen);
ZEND_FUNCTION(Rmap_view_set_tile_callback);
ZEND_FUNCTION(Rmap_view_set_tile_cancel_callback);
ZEND_FUNCTION(Rmap_view_set_tile);
ZEND_FUNCTION(Rmap_view_set_tile_data);
ZEND_FUNCTION(Rmap_view_set_tile_failed);
ZEND_FUNCTION(Rmap_view_set_tile_path);
ZEND_FUNCTION(Rmap_view_get_tile_path);
ZEND_FUNCTION(Rmap_view_set_tile_size);
ZEND_FUNCTION(Rmap_view_get_tile_size);
ZEND_FUNCTION(Rmap_view_set_cache_size);
ZEND_FUNCTION(Rmap_view_get_cache_usage);
ZEND_FUNCTION(Rmap_view_clear_tiles);
ZEND_FUNCTION(Rmap_view_get_tile_state);
ZEND_FUNCTION(Rmap_view_add_marker);
ZEND_FUNCTION(Rmap_view_remove_marker);
ZEND_FUNCTION(Rmap_view_clear_markers);
ZEND_FUNCTION(Rmap_view_get_marker_count);
ZEND_FUNCTION(Rmap_view_set_marker_position);
ZEND_FUNCTION(Rmap_view_set_marker_label);
ZEND_FUNCTION(Rmap_view_set_marker_color);
ZEND_FUNCTION(Rmap_view_set_marker_clicked_callback);
ZEND_FUNCTION(Rmap_view_set_view_changed_callback);
ZEND_FUNCTION(Rmap_view_set_attribution);
ZEND_FUNCTION(Rmap_view_get_attribution);
ZEND_FUNCTION(Rpdf_document_create);
ZEND_FUNCTION(Rpdf_document_delete);
ZEND_FUNCTION(Rpdf_document_set_title);
ZEND_FUNCTION(Rpdf_document_set_author);
ZEND_FUNCTION(Rpdf_document_set_subject);
ZEND_FUNCTION(Rpdf_document_add_page);
ZEND_FUNCTION(Rpdf_document_get_page_count);
ZEND_FUNCTION(Rpdf_document_set_fill_color);
ZEND_FUNCTION(Rpdf_document_set_stroke_color);
ZEND_FUNCTION(Rpdf_document_set_line_width);
ZEND_FUNCTION(Rpdf_document_draw_rect);
ZEND_FUNCTION(Rpdf_document_draw_ellipse);
ZEND_FUNCTION(Rpdf_document_draw_line);
ZEND_FUNCTION(Rpdf_document_add_font);
ZEND_FUNCTION(Rpdf_document_add_font_from_file);
ZEND_FUNCTION(Rpdf_document_set_font);
ZEND_FUNCTION(Rpdf_document_get_line_height);
ZEND_FUNCTION(Rpdf_document_measure_text);
ZEND_FUNCTION(Rpdf_document_draw_text);
ZEND_FUNCTION(Rpdf_document_draw_paragraph);
ZEND_FUNCTION(Rpdf_document_draw_image);
ZEND_FUNCTION(Rpdf_document_draw_window);
ZEND_FUNCTION(Rpdf_document_save);
ZEND_FUNCTION(Rpdf_print);
ZEND_FUNCTION(Rpdf_print_file);
ZEND_FUNCTION(Rpdf_document_print);
ZEND_METHOD(RPdfPrintDesc, __construct);
ZEND_METHOD(RTileItem, __construct);
ZEND_METHOD(RTileSection, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rlabel_create, arginfo_Rlabel_create)
	ZEND_FE(Rlabel_set_text, arginfo_Rlabel_set_text)
	ZEND_FE(Rlabel_get_text, arginfo_Rlabel_get_text)
	ZEND_FE(Rlabel_set_font, arginfo_Rlabel_set_font)
	ZEND_FE(Rlabel_set_text_size, arginfo_Rlabel_set_text_size)
	ZEND_FE(Rlabel_set_text_align, arginfo_Rlabel_set_text_align)
	ZEND_FE(Rlabel_set_wrap, arginfo_Rlabel_set_wrap)
	ZEND_FE(Rlabel_set_color, arginfo_Rlabel_set_color)
	ZEND_FE(Rlabel_set_markdown, arginfo_Rlabel_set_markdown)
	ZEND_FE(Rlabel_get_markdown, arginfo_Rlabel_get_markdown)
	ZEND_FE(Rlabel_set_link_callback, arginfo_Rlabel_set_link_callback)
	ZEND_FE(Rlabel_get_plain_text, arginfo_Rlabel_get_plain_text)
	ZEND_FE(Rlabel_set_selectable, arginfo_Rlabel_set_selectable)
	ZEND_FE(Rlabel_get_selectable, arginfo_Rlabel_get_selectable)
	ZEND_FE(Rlabel_get_selected_text, arginfo_Rlabel_get_selected_text)
	ZEND_FE(Rlabel_select_all, arginfo_Rlabel_select_all)
	ZEND_FE(Rlabel_clear_selection, arginfo_Rlabel_clear_selection)
	ZEND_FE(Rbutton_create, arginfo_Rbutton_create)
	ZEND_FE(Rbutton_set_text, arginfo_Rbutton_set_text)
	ZEND_FE(Rbutton_set_style, arginfo_Rbutton_set_style)
	ZEND_FE(Rbutton_set_clicked_callback, arginfo_Rbutton_set_clicked_callback)
	ZEND_FE(Rcheckbox_create, arginfo_Rcheckbox_create)
	ZEND_FE(Rcheckbox_set_text, arginfo_Rcheckbox_set_text)
	ZEND_FE(Rcheckbox_get_text, arginfo_Rcheckbox_get_text)
	ZEND_FE(Rcheckbox_set_checked, arginfo_Rcheckbox_set_checked)
	ZEND_FE(Rcheckbox_is_checked, arginfo_Rcheckbox_is_checked)
	ZEND_FE(Rcheckbox_set_style, arginfo_Rcheckbox_set_style)
	ZEND_FE(Rcheckbox_set_changed_callback, arginfo_Rcheckbox_set_changed_callback)
	ZEND_FE(Rslider_set_range, arginfo_Rslider_set_range)
	ZEND_FE(Rslider_set_value, arginfo_Rslider_set_value)
	ZEND_FE(Rslider_get_value, arginfo_Rslider_get_value)
	ZEND_FE(Rslider_get_range, arginfo_Rslider_get_range)
	ZEND_FE(Rslider_set_step, arginfo_Rslider_set_step)
	ZEND_FE(Rslider_set_orientation, arginfo_Rslider_set_orientation)
	ZEND_FE(Rslider_set_changed_callback, arginfo_Rslider_set_changed_callback)
	ZEND_FE(Rprogress_bar_set_value, arginfo_Rprogress_bar_set_value)
	ZEND_FE(Rprogress_bar_get_value, arginfo_Rprogress_bar_get_value)
	ZEND_FE(Rimage_set_texture, arginfo_Rimage_set_texture)
	ZEND_FE(Rimage_set_tint_color, arginfo_Rimage_set_tint_color)
	ZEND_FE(Rimage_set_tint_text, arginfo_Rimage_set_tint_text)
	ZEND_FE(Rimage_set_stretch, arginfo_Rimage_set_stretch)
	ZEND_FE(Rimage_set_region, arginfo_Rimage_set_region)
	ZEND_FE(Rimage_set_corner_radius, arginfo_Rimage_set_corner_radius)
	ZEND_FE(Rtext_input_set_text, arginfo_Rtext_input_set_text)
	ZEND_FE(Rtext_input_get_text, arginfo_Rtext_input_get_text)
	ZEND_FE(Rtext_input_set_placeholder, arginfo_Rtext_input_set_placeholder)
	ZEND_FE(Rtext_input_set_password, arginfo_Rtext_input_set_password)
	ZEND_FE(Rtext_input_is_password, arginfo_Rtext_input_is_password)
	ZEND_FE(Rtext_input_is_read_only, arginfo_Rtext_input_is_read_only)
	ZEND_FE(Rtext_input_set_read_only, arginfo_Rtext_input_set_read_only)
	ZEND_FE(Rtext_input_set_max_length, arginfo_Rtext_input_set_max_length)
	ZEND_FE(Rtext_input_select_all, arginfo_Rtext_input_select_all)
	ZEND_FE(Rtext_input_set_input_type, arginfo_Rtext_input_set_input_type)
	ZEND_FE(Rtext_input_get_input_type, arginfo_Rtext_input_get_input_type)
	ZEND_FE(Rtext_input_set_return_key, arginfo_Rtext_input_set_return_key)
	ZEND_FE(Rtext_input_get_return_key, arginfo_Rtext_input_get_return_key)
	ZEND_FE(Rtext_input_set_changed_callback, arginfo_Rtext_input_set_changed_callback)
	ZEND_FE(Rtext_input_set_committed_callback, arginfo_Rtext_input_set_committed_callback)
	ZEND_FE(Rspin_box_set_range, arginfo_Rspin_box_set_range)
	ZEND_FE(Rspin_box_set_value, arginfo_Rspin_box_set_value)
	ZEND_FE(Rspin_box_get_value, arginfo_Rspin_box_get_value)
	ZEND_FE(Rspin_box_get_range, arginfo_Rspin_box_get_range)
	ZEND_FE(Rspin_box_set_step, arginfo_Rspin_box_set_step)
	ZEND_FE(Rspin_box_set_decimals, arginfo_Rspin_box_set_decimals)
	ZEND_FE(Rspin_box_set_buttons, arginfo_Rspin_box_set_buttons)
	ZEND_FE(Rspin_box_get_buttons, arginfo_Rspin_box_get_buttons)
	ZEND_FE(Rspin_box_set_changed_callback, arginfo_Rspin_box_set_changed_callback)
	ZEND_FE(Rcombo_box_add_item, arginfo_Rcombo_box_add_item)
	ZEND_FE(Rcombo_box_clear_items, arginfo_Rcombo_box_clear_items)
	ZEND_FE(Rcombo_box_get_item_count, arginfo_Rcombo_box_get_item_count)
	ZEND_FE(Rcombo_box_get_item_text, arginfo_Rcombo_box_get_item_text)
	ZEND_FE(Rcombo_box_set_selected, arginfo_Rcombo_box_set_selected)
	ZEND_FE(Rcombo_box_get_selected, arginfo_Rcombo_box_get_selected)
	ZEND_FE(Rcombo_box_set_changed_callback, arginfo_Rcombo_box_set_changed_callback)
	ZEND_FE(Rseparator_set_orientation, arginfo_Rseparator_set_orientation)
	ZEND_FE(Rlist_view_add_item, arginfo_Rlist_view_add_item)
	ZEND_FE(Rlist_view_set_item_text, arginfo_Rlist_view_set_item_text)
	ZEND_FE(Rlist_view_get_item_text, arginfo_Rlist_view_get_item_text)
	ZEND_FE(Rlist_view_remove_item, arginfo_Rlist_view_remove_item)
	ZEND_FE(Rlist_view_clear_items, arginfo_Rlist_view_clear_items)
	ZEND_FE(Rlist_view_get_item_count, arginfo_Rlist_view_get_item_count)
	ZEND_FE(Rlist_view_set_virtual_items, arginfo_Rlist_view_set_virtual_items)
	ZEND_FE(Rlist_view_set_item_color_callback, arginfo_Rlist_view_set_item_color_callback)
	ZEND_FE(Rlist_view_set_selected, arginfo_Rlist_view_set_selected)
	ZEND_FE(Rlist_view_get_selected, arginfo_Rlist_view_get_selected)
	ZEND_FE(Rlist_view_scroll_to_item, arginfo_Rlist_view_scroll_to_item)
	ZEND_FE(Rlist_view_set_selection_changed_callback, arginfo_Rlist_view_set_selection_changed_callback)
	ZEND_FE(Rlist_view_set_activated_callback, arginfo_Rlist_view_set_activated_callback)
	ZEND_FE(Rtree_view_add_item, arginfo_Rtree_view_add_item)
	ZEND_FE(Rtree_item_destroy, arginfo_Rtree_item_destroy)
	ZEND_FE(Rtree_view_clear_items, arginfo_Rtree_view_clear_items)
	ZEND_FE(Rtree_item_is_valid, arginfo_Rtree_item_is_valid)
	ZEND_FE(Rtree_item_set_text, arginfo_Rtree_item_set_text)
	ZEND_FE(Rtree_item_get_text, arginfo_Rtree_item_get_text)
	ZEND_FE(Rtree_item_set_expanded, arginfo_Rtree_item_set_expanded)
	ZEND_FE(Rtree_item_is_expanded, arginfo_Rtree_item_is_expanded)
	ZEND_FE(Rtree_item_set_user_handle, arginfo_Rtree_item_set_user_handle)
	ZEND_FE(Rtree_item_get_user_handle, arginfo_Rtree_item_get_user_handle)
	ZEND_FE(Rtree_view_get_item_count, arginfo_Rtree_view_get_item_count)
	ZEND_FE(Rtree_view_get_item, arginfo_Rtree_view_get_item)
	ZEND_FE(Rtree_item_get_parent, arginfo_Rtree_item_get_parent)
	ZEND_FE(Rtree_item_get_child_count, arginfo_Rtree_item_get_child_count)
	ZEND_FE(Rtree_item_get_child, arginfo_Rtree_item_get_child)
	ZEND_FE(Rtree_view_set_selected_item, arginfo_Rtree_view_set_selected_item)
	ZEND_FE(Rtree_view_get_selected_item, arginfo_Rtree_view_get_selected_item)
	ZEND_FE(Rtree_view_set_selection_changed_callback, arginfo_Rtree_view_set_selection_changed_callback)
	ZEND_FE(Rtree_view_set_activated_callback, arginfo_Rtree_view_set_activated_callback)
	ZEND_FE(Rtree_item_set_icon, arginfo_Rtree_item_set_icon)
	ZEND_FE(Rtree_item_set_text_color, arginfo_Rtree_item_set_text_color)
	ZEND_FE(Rtree_view_set_multi_select, arginfo_Rtree_view_set_multi_select)
	ZEND_FE(Rtree_item_set_selected, arginfo_Rtree_item_set_selected)
	ZEND_FE(Rtree_item_is_selected, arginfo_Rtree_item_is_selected)
	ZEND_FE(Rtree_view_clear_selection, arginfo_Rtree_view_clear_selection)
	ZEND_FE(Rtree_view_get_selection_count, arginfo_Rtree_view_get_selection_count)
	ZEND_FE(Rtree_view_get_selection, arginfo_Rtree_view_get_selection)
	ZEND_FE(Rtree_view_scroll_to_item, arginfo_Rtree_view_scroll_to_item)
	ZEND_FE(Rtree_view_set_context_callback, arginfo_Rtree_view_set_context_callback)
	ZEND_FE(Rtree_view_set_drag_type, arginfo_Rtree_view_set_drag_type)
	ZEND_FE(Rtree_view_get_item_at, arginfo_Rtree_view_get_item_at)
	ZEND_FE(Rtree_view_set_drop_highlight, arginfo_Rtree_view_set_drop_highlight)
	ZEND_FE(Rmenu_bar_set_native, arginfo_Rmenu_bar_set_native)
	ZEND_FE(Rmenu_bar_is_native, arginfo_Rmenu_bar_is_native)
	ZEND_FE(Rmenu_add_menu, arginfo_Rmenu_add_menu)
	ZEND_FE(Rmenu_set_title, arginfo_Rmenu_set_title)
	ZEND_FE(Rmenu_add_item, arginfo_Rmenu_add_item)
	ZEND_FE(Rmenu_add_separator, arginfo_Rmenu_add_separator)
	ZEND_FE(Rmenu_add_header, arginfo_Rmenu_add_header)
	ZEND_FE(Rmenu_bar_add_divider, arginfo_Rmenu_bar_add_divider)
	ZEND_FE(Rmenu_set_title_color, arginfo_Rmenu_set_title_color)
	ZEND_FE(Rmenu_item_set_text, arginfo_Rmenu_item_set_text)
	ZEND_FE(Rmenu_item_get_text, arginfo_Rmenu_item_get_text)
	ZEND_FE(Rmenu_item_set_shortcut, arginfo_Rmenu_item_set_shortcut)
	ZEND_FE(Rmenu_item_set_shortcut_text, arginfo_Rmenu_item_set_shortcut_text)
	ZEND_FE(Rmenu_item_set_checkable, arginfo_Rmenu_item_set_checkable)
	ZEND_FE(Rmenu_item_set_checked, arginfo_Rmenu_item_set_checked)
	ZEND_FE(Rmenu_item_set_icon, arginfo_Rmenu_item_set_icon)
	ZEND_FE(Rmenu_item_is_checked, arginfo_Rmenu_item_is_checked)
	ZEND_FE(Rmenu_item_set_clicked_callback, arginfo_Rmenu_item_set_clicked_callback)
	ZEND_FE(Rmenu_open, arginfo_Rmenu_open)
	ZEND_FE(Rwindow_close_popups, arginfo_Rwindow_close_popups)
	ZEND_FE(Rtile_view_set_items, arginfo_Rtile_view_set_items)
	ZEND_FE(Rtile_view_refresh, arginfo_Rtile_view_refresh)
	ZEND_FE(Rtile_view_get_count, arginfo_Rtile_view_get_count)
	ZEND_FE(Rtile_view_set_tile_size, arginfo_Rtile_view_set_tile_size)
	ZEND_FE(Rtile_view_set_empty_text, arginfo_Rtile_view_set_empty_text)
	ZEND_FE(Rtile_view_set_icon_width, arginfo_Rtile_view_set_icon_width)
	ZEND_FE(Rtile_view_set_sections, arginfo_Rtile_view_set_sections)
	ZEND_FE(Rtile_view_get_section_count, arginfo_Rtile_view_get_section_count)
	ZEND_FE(Rtile_view_get_section_of, arginfo_Rtile_view_get_section_of)
	ZEND_FE(Rtile_view_set_section_folded, arginfo_Rtile_view_set_section_folded)
	ZEND_FE(Rtile_view_is_section_folded, arginfo_Rtile_view_is_section_folded)
	ZEND_FE(Rtile_view_get_section_at, arginfo_Rtile_view_get_section_at)
	ZEND_FE(Rtile_view_set_section_toggled_callback, arginfo_Rtile_view_set_section_toggled_callback)
	ZEND_FE(Rtile_view_set_selected, arginfo_Rtile_view_set_selected)
	ZEND_FE(Rtile_view_is_selected, arginfo_Rtile_view_is_selected)
	ZEND_FE(Rtile_view_clear_selection, arginfo_Rtile_view_clear_selection)
	ZEND_FE(Rtile_view_select_only, arginfo_Rtile_view_select_only)
	ZEND_FE(Rtile_view_get_current, arginfo_Rtile_view_get_current)
	ZEND_FE(Rtile_view_get_selection_count, arginfo_Rtile_view_get_selection_count)
	ZEND_FE(Rtile_view_get_selection, arginfo_Rtile_view_get_selection)
	ZEND_FE(Rtile_view_scroll_to, arginfo_Rtile_view_scroll_to)
	ZEND_FE(Rtile_view_get_item_at, arginfo_Rtile_view_get_item_at)
	ZEND_FE(Rtile_view_set_drop_highlight, arginfo_Rtile_view_set_drop_highlight)
	ZEND_FE(Rtile_view_set_drag_type, arginfo_Rtile_view_set_drag_type)
	ZEND_FE(Rtile_view_set_drag_data_callback, arginfo_Rtile_view_set_drag_data_callback)
	ZEND_FE(Rtile_view_set_selection_changed_callback, arginfo_Rtile_view_set_selection_changed_callback)
	ZEND_FE(Rtile_view_set_activated_callback, arginfo_Rtile_view_set_activated_callback)
	ZEND_FE(Rtile_view_set_context_callback, arginfo_Rtile_view_set_context_callback)
	ZEND_FE(Rtable_add_column, arginfo_Rtable_add_column)
	ZEND_FE(Rtable_get_column_count, arginfo_Rtable_get_column_count)
	ZEND_FE(Rtable_clear_columns, arginfo_Rtable_clear_columns)
	ZEND_FE(Rtable_set_column_header, arginfo_Rtable_set_column_header)
	ZEND_FE(Rtable_get_column_header, arginfo_Rtable_get_column_header)
	ZEND_FE(Rtable_set_column_width, arginfo_Rtable_set_column_width)
	ZEND_FE(Rtable_get_column_width, arginfo_Rtable_get_column_width)
	ZEND_FE(Rtable_set_column_fill, arginfo_Rtable_set_column_fill)
	ZEND_FE(Rtable_set_column_sortable, arginfo_Rtable_set_column_sortable)
	ZEND_FE(Rtable_set_column_align, arginfo_Rtable_set_column_align)
	ZEND_FE(Rtable_add_row, arginfo_Rtable_add_row)
	ZEND_FE(Rtable_set_cell, arginfo_Rtable_set_cell)
	ZEND_FE(Rtable_get_cell, arginfo_Rtable_get_cell)
	ZEND_FE(Rtable_remove_row, arginfo_Rtable_remove_row)
	ZEND_FE(Rtable_clear_rows, arginfo_Rtable_clear_rows)
	ZEND_FE(Rtable_get_row_count, arginfo_Rtable_get_row_count)
	ZEND_FE(Rtable_set_virtual_rows, arginfo_Rtable_set_virtual_rows)
	ZEND_FE(Rtable_set_cell_color_callback, arginfo_Rtable_set_cell_color_callback)
	ZEND_FE(Rtable_set_cell_text_color, arginfo_Rtable_set_cell_text_color)
	ZEND_FE(Rtable_set_multi_select, arginfo_Rtable_set_multi_select)
	ZEND_FE(Rtable_set_row_selected, arginfo_Rtable_set_row_selected)
	ZEND_FE(Rtable_is_row_selected, arginfo_Rtable_is_row_selected)
	ZEND_FE(Rtable_clear_selection, arginfo_Rtable_clear_selection)
	ZEND_FE(Rtable_get_selection_count, arginfo_Rtable_get_selection_count)
	ZEND_FE(Rtable_get_selection, arginfo_Rtable_get_selection)
	ZEND_FE(Rtable_set_selected, arginfo_Rtable_set_selected)
	ZEND_FE(Rtable_get_selected, arginfo_Rtable_get_selected)
	ZEND_FE(Rtable_scroll_to_row, arginfo_Rtable_scroll_to_row)
	ZEND_FE(Rtable_sort, arginfo_Rtable_sort)
	ZEND_FE(Rtable_get_sort_column, arginfo_Rtable_get_sort_column)
	ZEND_FE(Rtable_is_sort_descending, arginfo_Rtable_is_sort_descending)
	ZEND_FE(Rtable_set_header_visible, arginfo_Rtable_set_header_visible)
	ZEND_FE(Rtable_set_grid_lines, arginfo_Rtable_set_grid_lines)
	ZEND_FE(Rtable_set_striped, arginfo_Rtable_set_striped)
	ZEND_FE(Rtable_set_selection_changed_callback, arginfo_Rtable_set_selection_changed_callback)
	ZEND_FE(Rtable_set_activated_callback, arginfo_Rtable_set_activated_callback)
	ZEND_FE(Rtable_set_sort_callback, arginfo_Rtable_set_sort_callback)
	ZEND_FE(Rdate_picker_set_date, arginfo_Rdate_picker_set_date)
	ZEND_FE(Rdate_picker_get_date, arginfo_Rdate_picker_get_date)
	ZEND_FE(Rdate_picker_set_range, arginfo_Rdate_picker_set_range)
	ZEND_FE(Rdate_picker_set_first_day_of_week, arginfo_Rdate_picker_set_first_day_of_week)
	ZEND_FE(Rdate_picker_set_format, arginfo_Rdate_picker_set_format)
	ZEND_FE(Rdate_picker_get_text, arginfo_Rdate_picker_get_text)
	ZEND_FE(Rdate_picker_set_open, arginfo_Rdate_picker_set_open)
	ZEND_FE(Rdate_picker_is_open, arginfo_Rdate_picker_is_open)
	ZEND_FE(Rdate_picker_set_changed_callback, arginfo_Rdate_picker_set_changed_callback)
	ZEND_FE(Rtime_picker_set_time, arginfo_Rtime_picker_set_time)
	ZEND_FE(Rtime_picker_get_time, arginfo_Rtime_picker_get_time)
	ZEND_FE(Rtime_picker_set_seconds_visible, arginfo_Rtime_picker_set_seconds_visible)
	ZEND_FE(Rtime_picker_set_minute_step, arginfo_Rtime_picker_set_minute_step)
	ZEND_FE(Rtime_picker_set_changed_callback, arginfo_Rtime_picker_set_changed_callback)
	ZEND_FE(Rtoast_show, arginfo_Rtoast_show)
	ZEND_FE(Rtoast_show_kind, arginfo_Rtoast_show_kind)
	ZEND_FE(Rtoast_hide, arginfo_Rtoast_hide)
	ZEND_FE(Rtoast_clear, arginfo_Rtoast_clear)
	ZEND_FE(Rtoast_is_shown, arginfo_Rtoast_is_shown)
	ZEND_FE(Rtoast_get_count, arginfo_Rtoast_get_count)
	ZEND_FE(Rtoast_get_text, arginfo_Rtoast_get_text)
	ZEND_FE(Rtoast_set_queue, arginfo_Rtoast_set_queue)
	ZEND_FE(Rtoast_get_queue, arginfo_Rtoast_get_queue)
	ZEND_FE(Rtoast_set_max_visible, arginfo_Rtoast_set_max_visible)
	ZEND_FE(Rtoast_set_kind, arginfo_Rtoast_set_kind)
	ZEND_FE(Rtoast_set_action_text, arginfo_Rtoast_set_action_text)
	ZEND_FE(Rtoast_set_action_callback, arginfo_Rtoast_set_action_callback)
	ZEND_FE(Rbreadcrumb_set_items, arginfo_Rbreadcrumb_set_items)
	ZEND_FE(Rbreadcrumb_add_item, arginfo_Rbreadcrumb_add_item)
	ZEND_FE(Rbreadcrumb_truncate, arginfo_Rbreadcrumb_truncate)
	ZEND_FE(Rbreadcrumb_get_item_count, arginfo_Rbreadcrumb_get_item_count)
	ZEND_FE(Rbreadcrumb_get_item_text, arginfo_Rbreadcrumb_get_item_text)
	ZEND_FE(Rbreadcrumb_set_clicked_callback, arginfo_Rbreadcrumb_set_clicked_callback)
	ZEND_FE(Rrating_set_value, arginfo_Rrating_set_value)
	ZEND_FE(Rrating_get_value, arginfo_Rrating_get_value)
	ZEND_FE(Rrating_set_max, arginfo_Rrating_set_max)
	ZEND_FE(Rrating_get_max, arginfo_Rrating_get_max)
	ZEND_FE(Rrating_set_allow_half, arginfo_Rrating_set_allow_half)
	ZEND_FE(Rrating_set_read_only, arginfo_Rrating_set_read_only)
	ZEND_FE(Rrating_set_star_size, arginfo_Rrating_set_star_size)
	ZEND_FE(Rrating_set_changed_callback, arginfo_Rrating_set_changed_callback)
	ZEND_FE(Rpagination_set_page_count, arginfo_Rpagination_set_page_count)
	ZEND_FE(Rpagination_get_page_count, arginfo_Rpagination_get_page_count)
	ZEND_FE(Rpagination_set_page, arginfo_Rpagination_set_page)
	ZEND_FE(Rpagination_get_page, arginfo_Rpagination_get_page)
	ZEND_FE(Rpagination_set_siblings, arginfo_Rpagination_set_siblings)
	ZEND_FE(Rpagination_set_changed_callback, arginfo_Rpagination_set_changed_callback)
	ZEND_FE(Rplot_set_title, arginfo_Rplot_set_title)
	ZEND_FE(Rplot_get_title, arginfo_Rplot_get_title)
	ZEND_FE(Rplot_add_series, arginfo_Rplot_add_series)
	ZEND_FE(Rplot_remove_series, arginfo_Rplot_remove_series)
	ZEND_FE(Rplot_clear, arginfo_Rplot_clear)
	ZEND_FE(Rplot_get_series_count, arginfo_Rplot_get_series_count)
	ZEND_FE(Rplot_set_series_name, arginfo_Rplot_set_series_name)
	ZEND_FE(Rplot_get_series_name, arginfo_Rplot_get_series_name)
	ZEND_FE(Rplot_set_series_data, arginfo_Rplot_set_series_data)
	ZEND_FE(Rplot_append_series_data, arginfo_Rplot_append_series_data)
	ZEND_FE(Rplot_add_point, arginfo_Rplot_add_point)
	ZEND_FE(Rplot_clear_series_data, arginfo_Rplot_clear_series_data)
	ZEND_FE(Rplot_get_point_count, arginfo_Rplot_get_point_count)
	ZEND_FE(Rplot_get_point, arginfo_Rplot_get_point)
	ZEND_FE(Rplot_set_series_max_points, arginfo_Rplot_set_series_max_points)
	ZEND_FE(Rplot_set_series_color, arginfo_Rplot_set_series_color)
	ZEND_FE(Rplot_set_series_line, arginfo_Rplot_set_series_line)
	ZEND_FE(Rplot_set_series_marker, arginfo_Rplot_set_series_marker)
	ZEND_FE(Rplot_set_series_marker_filled, arginfo_Rplot_set_series_marker_filled)
	ZEND_FE(Rplot_set_series_step, arginfo_Rplot_set_series_step)
	ZEND_FE(Rplot_set_series_fill, arginfo_Rplot_set_series_fill)
	ZEND_FE(Rplot_set_series_axes, arginfo_Rplot_set_series_axes)
	ZEND_FE(Rplot_set_series_visible, arginfo_Rplot_set_series_visible)
	ZEND_FE(Rplot_is_series_visible, arginfo_Rplot_is_series_visible)
	ZEND_FE(Rplot_set_axis_label, arginfo_Rplot_set_axis_label)
	ZEND_FE(Rplot_get_axis_label, arginfo_Rplot_get_axis_label)
	ZEND_FE(Rplot_set_axis_scale, arginfo_Rplot_set_axis_scale)
	ZEND_FE(Rplot_get_axis_scale, arginfo_Rplot_get_axis_scale)
	ZEND_FE(Rplot_set_axis_linear_threshold, arginfo_Rplot_set_axis_linear_threshold)
	ZEND_FE(Rplot_set_axis_range, arginfo_Rplot_set_axis_range)
	ZEND_FE(Rplot_get_axis_range, arginfo_Rplot_get_axis_range)
	ZEND_FE(Rplot_set_axis_auto_fit, arginfo_Rplot_set_axis_auto_fit)
	ZEND_FE(Rplot_is_axis_auto_fit, arginfo_Rplot_is_axis_auto_fit)
	ZEND_FE(Rplot_set_axis_format, arginfo_Rplot_set_axis_format)
	ZEND_FE(Rplot_set_axis_visible, arginfo_Rplot_set_axis_visible)
	ZEND_FE(Rplot_set_axis_grid, arginfo_Rplot_set_axis_grid)
	ZEND_FE(Rplot_set_axis_inverted, arginfo_Rplot_set_axis_inverted)
	ZEND_FE(Rplot_set_axis_locked, arginfo_Rplot_set_axis_locked)
	ZEND_FE(Rplot_fit, arginfo_Rplot_fit)
	ZEND_FE(Rplot_set_legend, arginfo_Rplot_set_legend)
	ZEND_FE(Rplot_set_crosshair, arginfo_Rplot_set_crosshair)
	ZEND_FE(Rplot_set_mouse_text, arginfo_Rplot_set_mouse_text)
	ZEND_FE(Rplot_set_tooltips, arginfo_Rplot_set_tooltips)
	ZEND_FE(Rplot_get_mouse_position, arginfo_Rplot_get_mouse_position)
	ZEND_FE(Rplot_data_to_point, arginfo_Rplot_data_to_point)
	ZEND_FE(Rplot_point_to_data, arginfo_Rplot_point_to_data)
	ZEND_FE(Rplot_add_drag_line, arginfo_Rplot_add_drag_line)
	ZEND_FE(Rplot_remove_drag_line, arginfo_Rplot_remove_drag_line)
	ZEND_FE(Rplot_get_drag_line_count, arginfo_Rplot_get_drag_line_count)
	ZEND_FE(Rplot_set_drag_line_value, arginfo_Rplot_set_drag_line_value)
	ZEND_FE(Rplot_get_drag_line_value, arginfo_Rplot_get_drag_line_value)
	ZEND_FE(Rplot_set_drag_line_color, arginfo_Rplot_set_drag_line_color)
	ZEND_FE(Rplot_set_view_changed_callback, arginfo_Rplot_set_view_changed_callback)
	ZEND_FE(Rplot_set_drag_line_callback, arginfo_Rplot_set_drag_line_callback)
	ZEND_FE(Rplot_set_series_toggled_callback, arginfo_Rplot_set_series_toggled_callback)
	ZEND_FE(Rchart_create, arginfo_Rchart_create)
	ZEND_FE(Rchart_set_kind, arginfo_Rchart_set_kind)
	ZEND_FE(Rchart_get_kind, arginfo_Rchart_get_kind)
	ZEND_FE(Rchart_set_title, arginfo_Rchart_set_title)
	ZEND_FE(Rchart_get_title, arginfo_Rchart_get_title)
	ZEND_FE(Rchart_set_format, arginfo_Rchart_set_format)
	ZEND_FE(Rchart_set_color, arginfo_Rchart_set_color)
	ZEND_FE(Rchart_set_legend, arginfo_Rchart_set_legend)
	ZEND_FE(Rchart_clear, arginfo_Rchart_clear)
	ZEND_FE(Rchart_get_hovered, arginfo_Rchart_get_hovered)
	ZEND_FE(Rchart_add_slice, arginfo_Rchart_add_slice)
	ZEND_FE(Rchart_remove_slice, arginfo_Rchart_remove_slice)
	ZEND_FE(Rchart_get_slice_count, arginfo_Rchart_get_slice_count)
	ZEND_FE(Rchart_set_slice_value, arginfo_Rchart_set_slice_value)
	ZEND_FE(Rchart_get_slice_value, arginfo_Rchart_get_slice_value)
	ZEND_FE(Rchart_set_slice_label, arginfo_Rchart_set_slice_label)
	ZEND_FE(Rchart_get_slice_label, arginfo_Rchart_get_slice_label)
	ZEND_FE(Rchart_set_slice_color, arginfo_Rchart_set_slice_color)
	ZEND_FE(Rchart_get_total, arginfo_Rchart_get_total)
	ZEND_FE(Rchart_set_selected, arginfo_Rchart_set_selected)
	ZEND_FE(Rchart_get_selected, arginfo_Rchart_get_selected)
	ZEND_FE(Rchart_set_hole, arginfo_Rchart_set_hole)
	ZEND_FE(Rchart_set_center_text, arginfo_Rchart_set_center_text)
	ZEND_FE(Rchart_set_slice_clicked_callback, arginfo_Rchart_set_slice_clicked_callback)
	ZEND_FE(Rchart_set_range, arginfo_Rchart_set_range)
	ZEND_FE(Rchart_get_range, arginfo_Rchart_get_range)
	ZEND_FE(Rchart_set_value, arginfo_Rchart_set_value)
	ZEND_FE(Rchart_get_value, arginfo_Rchart_get_value)
	ZEND_FE(Rchart_add_band, arginfo_Rchart_add_band)
	ZEND_FE(Rchart_clear_bands, arginfo_Rchart_clear_bands)
	ZEND_FE(Rchart_get_band_count, arginfo_Rchart_get_band_count)
	ZEND_FE(Rchart_set_grid, arginfo_Rchart_set_grid)
	ZEND_FE(Rchart_get_row_count, arginfo_Rchart_get_row_count)
	ZEND_FE(Rchart_get_column_count, arginfo_Rchart_get_column_count)
	ZEND_FE(Rchart_set_cell, arginfo_Rchart_set_cell)
	ZEND_FE(Rchart_get_cell, arginfo_Rchart_get_cell)
	ZEND_FE(Rchart_set_row_labels, arginfo_Rchart_set_row_labels)
	ZEND_FE(Rchart_set_column_labels, arginfo_Rchart_set_column_labels)
	ZEND_FE(Rchart_get_row_label, arginfo_Rchart_get_row_label)
	ZEND_FE(Rchart_get_column_label, arginfo_Rchart_get_column_label)
	ZEND_FE(Rchart_set_color_scale, arginfo_Rchart_set_color_scale)
	ZEND_FE(Rchart_set_cell_clicked_callback, arginfo_Rchart_set_cell_clicked_callback)
	ZEND_FE(Rchart_set_values, arginfo_Rchart_set_values)
	ZEND_FE(Rchart_push_value, arginfo_Rchart_push_value)
	ZEND_FE(Rchart_get_value_count, arginfo_Rchart_get_value_count)
	ZEND_FE(Rchart_get_value_at, arginfo_Rchart_get_value_at)
	ZEND_FE(Rchart_set_fill, arginfo_Rchart_set_fill)
	ZEND_FE(Rchart_set_marker, arginfo_Rchart_set_marker)
	ZEND_FE(Rpdf_is_available, arginfo_Rpdf_is_available)
	ZEND_FE(Rpdf_view_load_file, arginfo_Rpdf_view_load_file)
	ZEND_FE(Rpdf_view_load_memory, arginfo_Rpdf_view_load_memory)
	ZEND_FE(Rpdf_view_close, arginfo_Rpdf_view_close)
	ZEND_FE(Rpdf_view_get_status, arginfo_Rpdf_view_get_status)
	ZEND_FE(Rpdf_view_get_page_count, arginfo_Rpdf_view_get_page_count)
	ZEND_FE(Rpdf_view_get_page_size, arginfo_Rpdf_view_get_page_size)
	ZEND_FE(Rpdf_view_set_page, arginfo_Rpdf_view_set_page)
	ZEND_FE(Rpdf_view_get_page, arginfo_Rpdf_view_get_page)
	ZEND_FE(Rpdf_view_set_zoom, arginfo_Rpdf_view_set_zoom)
	ZEND_FE(Rpdf_view_get_zoom, arginfo_Rpdf_view_get_zoom)
	ZEND_FE(Rpdf_view_set_fit, arginfo_Rpdf_view_set_fit)
	ZEND_FE(Rpdf_view_get_fit, arginfo_Rpdf_view_get_fit)
	ZEND_FE(Rpdf_view_get_title, arginfo_Rpdf_view_get_title)
	ZEND_FE(Rpdf_view_get_page_text, arginfo_Rpdf_view_get_page_text)
	ZEND_FE(Rpdf_view_set_page_changed_callback, arginfo_Rpdf_view_set_page_changed_callback)
	ZEND_FE(Rcarousel_create, arginfo_Rcarousel_create)
	ZEND_FE(Rcarousel_set_page, arginfo_Rcarousel_set_page)
	ZEND_FE(Rcarousel_get_page, arginfo_Rcarousel_get_page)
	ZEND_FE(Rcarousel_get_page_count, arginfo_Rcarousel_get_page_count)
	ZEND_FE(Rcarousel_next, arginfo_Rcarousel_next)
	ZEND_FE(Rcarousel_prev, arginfo_Rcarousel_prev)
	ZEND_FE(Rcarousel_set_loop, arginfo_Rcarousel_set_loop)
	ZEND_FE(Rcarousel_get_loop, arginfo_Rcarousel_get_loop)
	ZEND_FE(Rcarousel_set_autoplay, arginfo_Rcarousel_set_autoplay)
	ZEND_FE(Rcarousel_get_autoplay, arginfo_Rcarousel_get_autoplay)
	ZEND_FE(Rcarousel_set_indicators_visible, arginfo_Rcarousel_set_indicators_visible)
	ZEND_FE(Rcarousel_get_indicators_visible, arginfo_Rcarousel_get_indicators_visible)
	ZEND_FE(Rcarousel_set_arrows_visible, arginfo_Rcarousel_set_arrows_visible)
	ZEND_FE(Rcarousel_get_arrows_visible, arginfo_Rcarousel_get_arrows_visible)
	ZEND_FE(Rcarousel_set_orientation, arginfo_Rcarousel_set_orientation)
	ZEND_FE(Rcarousel_get_orientation, arginfo_Rcarousel_get_orientation)
	ZEND_FE(Rcarousel_set_page_changed_callback, arginfo_Rcarousel_set_page_changed_callback)
	ZEND_FE(Rpdf_view_print, arginfo_Rpdf_view_print)
	ZEND_FE(Rmap_view_create, arginfo_Rmap_view_create)
	ZEND_FE(Rmap_view_set_center, arginfo_Rmap_view_set_center)
	ZEND_FE(Rmap_view_get_center, arginfo_Rmap_view_get_center)
	ZEND_FE(Rmap_view_set_zoom, arginfo_Rmap_view_set_zoom)
	ZEND_FE(Rmap_view_get_zoom, arginfo_Rmap_view_get_zoom)
	ZEND_FE(Rmap_view_set_zoom_range, arginfo_Rmap_view_set_zoom_range)
	ZEND_FE(Rmap_view_get_zoom_range, arginfo_Rmap_view_get_zoom_range)
	ZEND_FE(Rmap_view_animate_to, arginfo_Rmap_view_animate_to)
	ZEND_FE(Rmap_view_screen_to_latlon, arginfo_Rmap_view_screen_to_latlon)
	ZEND_FE(Rmap_view_latlon_to_screen, arginfo_Rmap_view_latlon_to_screen)
	ZEND_FE(Rmap_view_set_tile_callback, arginfo_Rmap_view_set_tile_callback)
	ZEND_FE(Rmap_view_set_tile_cancel_callback, arginfo_Rmap_view_set_tile_cancel_callback)
	ZEND_FE(Rmap_view_set_tile, arginfo_Rmap_view_set_tile)
	ZEND_FE(Rmap_view_set_tile_data, arginfo_Rmap_view_set_tile_data)
	ZEND_FE(Rmap_view_set_tile_failed, arginfo_Rmap_view_set_tile_failed)
	ZEND_FE(Rmap_view_set_tile_path, arginfo_Rmap_view_set_tile_path)
	ZEND_FE(Rmap_view_get_tile_path, arginfo_Rmap_view_get_tile_path)
	ZEND_FE(Rmap_view_set_tile_size, arginfo_Rmap_view_set_tile_size)
	ZEND_FE(Rmap_view_get_tile_size, arginfo_Rmap_view_get_tile_size)
	ZEND_FE(Rmap_view_set_cache_size, arginfo_Rmap_view_set_cache_size)
	ZEND_FE(Rmap_view_get_cache_usage, arginfo_Rmap_view_get_cache_usage)
	ZEND_FE(Rmap_view_clear_tiles, arginfo_Rmap_view_clear_tiles)
	ZEND_FE(Rmap_view_get_tile_state, arginfo_Rmap_view_get_tile_state)
	ZEND_FE(Rmap_view_add_marker, arginfo_Rmap_view_add_marker)
	ZEND_FE(Rmap_view_remove_marker, arginfo_Rmap_view_remove_marker)
	ZEND_FE(Rmap_view_clear_markers, arginfo_Rmap_view_clear_markers)
	ZEND_FE(Rmap_view_get_marker_count, arginfo_Rmap_view_get_marker_count)
	ZEND_FE(Rmap_view_set_marker_position, arginfo_Rmap_view_set_marker_position)
	ZEND_FE(Rmap_view_set_marker_label, arginfo_Rmap_view_set_marker_label)
	ZEND_FE(Rmap_view_set_marker_color, arginfo_Rmap_view_set_marker_color)
	ZEND_FE(Rmap_view_set_marker_clicked_callback, arginfo_Rmap_view_set_marker_clicked_callback)
	ZEND_FE(Rmap_view_set_view_changed_callback, arginfo_Rmap_view_set_view_changed_callback)
	ZEND_FE(Rmap_view_set_attribution, arginfo_Rmap_view_set_attribution)
	ZEND_FE(Rmap_view_get_attribution, arginfo_Rmap_view_get_attribution)
	ZEND_FE(Rpdf_document_create, arginfo_Rpdf_document_create)
	ZEND_FE(Rpdf_document_delete, arginfo_Rpdf_document_delete)
	ZEND_FE(Rpdf_document_set_title, arginfo_Rpdf_document_set_title)
	ZEND_FE(Rpdf_document_set_author, arginfo_Rpdf_document_set_author)
	ZEND_FE(Rpdf_document_set_subject, arginfo_Rpdf_document_set_subject)
	ZEND_FE(Rpdf_document_add_page, arginfo_Rpdf_document_add_page)
	ZEND_FE(Rpdf_document_get_page_count, arginfo_Rpdf_document_get_page_count)
	ZEND_FE(Rpdf_document_set_fill_color, arginfo_Rpdf_document_set_fill_color)
	ZEND_FE(Rpdf_document_set_stroke_color, arginfo_Rpdf_document_set_stroke_color)
	ZEND_FE(Rpdf_document_set_line_width, arginfo_Rpdf_document_set_line_width)
	ZEND_FE(Rpdf_document_draw_rect, arginfo_Rpdf_document_draw_rect)
	ZEND_FE(Rpdf_document_draw_ellipse, arginfo_Rpdf_document_draw_ellipse)
	ZEND_FE(Rpdf_document_draw_line, arginfo_Rpdf_document_draw_line)
	ZEND_FE(Rpdf_document_add_font, arginfo_Rpdf_document_add_font)
	ZEND_FE(Rpdf_document_add_font_from_file, arginfo_Rpdf_document_add_font_from_file)
	ZEND_FE(Rpdf_document_set_font, arginfo_Rpdf_document_set_font)
	ZEND_FE(Rpdf_document_get_line_height, arginfo_Rpdf_document_get_line_height)
	ZEND_FE(Rpdf_document_measure_text, arginfo_Rpdf_document_measure_text)
	ZEND_FE(Rpdf_document_draw_text, arginfo_Rpdf_document_draw_text)
	ZEND_FE(Rpdf_document_draw_paragraph, arginfo_Rpdf_document_draw_paragraph)
	ZEND_FE(Rpdf_document_draw_image, arginfo_Rpdf_document_draw_image)
	ZEND_FE(Rpdf_document_draw_window, arginfo_Rpdf_document_draw_window)
	ZEND_FE(Rpdf_document_save, arginfo_Rpdf_document_save)
	ZEND_FE(Rpdf_print, arginfo_Rpdf_print)
	ZEND_FE(Rpdf_print_file, arginfo_Rpdf_print_file)
	ZEND_FE(Rpdf_document_print, arginfo_Rpdf_document_print)
	ZEND_FE_END
};

static const zend_function_entry class_RPdfPrintDesc_methods[] = {
	ZEND_ME(RPdfPrintDesc, __construct, arginfo_class_RPdfPrintDesc___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RTileItem_methods[] = {
	ZEND_ME(RTileItem, __construct, arginfo_class_RTileItem___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RTileSection_methods[] = {
	ZEND_ME(RTileSection, __construct, arginfo_class_RTileSection___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_controls_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_TEXT_ALIGN_LEFT", R_TEXT_ALIGN_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_ALIGN_CENTER", R_TEXT_ALIGN_CENTER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TEXT_ALIGN_RIGHT", R_TEXT_ALIGN_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOAST_INFO", R_TOAST_INFO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOAST_SUCCESS", R_TOAST_SUCCESS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOAST_WARNING", R_TOAST_WARNING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOAST_ERROR", R_TOAST_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOAST_REPLACE", R_TOAST_REPLACE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOAST_SEQUENCE", R_TOAST_SEQUENCE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOAST_STACK", R_TOAST_STACK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BUTTON_DEFAULT", R_BUTTON_DEFAULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BUTTON_PRIMARY", R_BUTTON_PRIMARY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BUTTON_FLAT", R_BUTTON_FLAT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CHECKBOX_CHECK", R_CHECKBOX_CHECK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CHECKBOX_RADIO", R_CHECKBOX_RADIO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CHECKBOX_SWITCH", R_CHECKBOX_SWITCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_STRETCH_FILL", R_STRETCH_FILL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_STRETCH_FIT", R_STRETCH_FIT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_STRETCH_COVER", R_STRETCH_COVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_STRETCH_NONE", R_STRETCH_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_X", R_PLOT_X, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_Y", R_PLOT_Y, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_X2", R_PLOT_X2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_Y2", R_PLOT_Y2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_FIT_WIDTH", R_PDF_FIT_WIDTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_FIT_PAGE", R_PDF_FIT_PAGE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_FIT_NONE", R_PDF_FIT_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_EMPTY", R_PDF_EMPTY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_LOADED", R_PDF_LOADED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_NEEDS_PASSWORD", R_PDF_NEEDS_PASSWORD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_ERROR", R_PDF_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_UNAVAILABLE", R_PDF_UNAVAILABLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_FONT_SANS", R_PDF_FONT_SANS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_FONT_MONO", R_PDF_FONT_MONO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_FILL", R_PDF_FILL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_STROKE", R_PDF_STROKE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_TEXT_BOLD", R_PDF_TEXT_BOLD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_TEXT_ITALIC", R_PDF_TEXT_ITALIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_TEXT_UNDERLINE", R_PDF_TEXT_UNDERLINE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PDF_PRINT_NO_DIALOG", R_PDF_PRINT_NO_DIALOG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MAP_TILE_NONE", R_MAP_TILE_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MAP_TILE_PENDING", R_MAP_TILE_PENDING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MAP_TILE_LOADED", R_MAP_TILE_LOADED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MAP_TILE_FAILED", R_MAP_TILE_FAILED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_SCALE_LINEAR", R_PLOT_SCALE_LINEAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_SCALE_LOG", R_PLOT_SCALE_LOG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_SCALE_SYMLOG", R_PLOT_SCALE_SYMLOG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LINE_SOLID", R_PLOT_LINE_SOLID, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LINE_DASHED", R_PLOT_LINE_DASHED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LINE_DOTTED", R_PLOT_LINE_DOTTED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LINE_DASH_DOT", R_PLOT_LINE_DASH_DOT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LINE_NONE", R_PLOT_LINE_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_NONE", R_PLOT_MARKER_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_CIRCLE", R_PLOT_MARKER_CIRCLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_SQUARE", R_PLOT_MARKER_SQUARE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_DIAMOND", R_PLOT_MARKER_DIAMOND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_TRIANGLE_UP", R_PLOT_MARKER_TRIANGLE_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_TRIANGLE_DOWN", R_PLOT_MARKER_TRIANGLE_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_CROSS", R_PLOT_MARKER_CROSS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_PLUS", R_PLOT_MARKER_PLUS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_MARKER_ASTERISK", R_PLOT_MARKER_ASTERISK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_HIDDEN", R_PLOT_LEGEND_HIDDEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_TOP_LEFT", R_PLOT_LEGEND_TOP_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_TOP", R_PLOT_LEGEND_TOP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_TOP_RIGHT", R_PLOT_LEGEND_TOP_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_RIGHT", R_PLOT_LEGEND_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_BOTTOM_RIGHT", R_PLOT_LEGEND_BOTTOM_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_BOTTOM", R_PLOT_LEGEND_BOTTOM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_BOTTOM_LEFT", R_PLOT_LEGEND_BOTTOM_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_LEFT", R_PLOT_LEGEND_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_PLOT_LEGEND_OUTSIDE", R_PLOT_LEGEND_OUTSIDE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CHART_PIE", R_CHART_PIE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CHART_DONUT", R_CHART_DONUT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CHART_GAUGE", R_CHART_GAUGE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CHART_HEATMAP", R_CHART_HEATMAP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_CHART_SPARKLINE", R_CHART_SPARKLINE, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RPdfPrintDesc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RPdfPrintDesc", class_RPdfPrintDesc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_window_default_value;
	ZVAL_LONG(&property_window_default_value, 0);
	zend_string *property_window_name = zend_string_init("window", sizeof("window") - 1, 1);
	zend_declare_typed_property(class_entry, property_window_name, &property_window_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_window_name);

	zval property_title_default_value;
	ZVAL_NULL(&property_title_default_value);
	zend_string *property_title_name = zend_string_init("title", sizeof("title") - 1, 1);
	zend_declare_typed_property(class_entry, property_title_name, &property_title_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_title_name);

	zval property_printer_default_value;
	ZVAL_NULL(&property_printer_default_value);
	zend_string *property_printer_name = zend_string_init("printer", sizeof("printer") - 1, 1);
	zend_declare_typed_property(class_entry, property_printer_name, &property_printer_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_printer_name);

	zval property_copies_default_value;
	ZVAL_LONG(&property_copies_default_value, 0);
	zend_string *property_copies_name = zend_string_init("copies", sizeof("copies") - 1, 1);
	zend_declare_typed_property(class_entry, property_copies_name, &property_copies_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_copies_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_output_default_value;
	ZVAL_NULL(&property_output_default_value);
	zend_string *property_output_name = zend_string_init("output", sizeof("output") - 1, 1);
	zend_declare_typed_property(class_entry, property_output_name, &property_output_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_output_name);

	zval property_password_default_value;
	ZVAL_NULL(&property_password_default_value);
	zend_string *property_password_name = zend_string_init("password", sizeof("password") - 1, 1);
	zend_declare_typed_property(class_entry, property_password_name, &property_password_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_password_name);

	return class_entry;
}

static zend_class_entry *register_class_RTileItem(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RTileItem", class_RTileItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_text_default_value;
	ZVAL_NULL(&property_text_default_value);
	zend_string *property_text_name = zend_string_init("text", sizeof("text") - 1, 1);
	zend_declare_typed_property(class_entry, property_text_name, &property_text_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_text_name);

	zval property_detail_default_value;
	ZVAL_NULL(&property_detail_default_value);
	zend_string *property_detail_name = zend_string_init("detail", sizeof("detail") - 1, 1);
	zend_declare_typed_property(class_entry, property_detail_name, &property_detail_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_detail_name);

	zval property_badge_default_value;
	ZVAL_NULL(&property_badge_default_value);
	zend_string *property_badge_name = zend_string_init("badge", sizeof("badge") - 1, 1);
	zend_declare_typed_property(class_entry, property_badge_name, &property_badge_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_badge_name);

	zval property_icon_default_value;
	ZVAL_LONG(&property_icon_default_value, 0);
	zend_string *property_icon_name = zend_string_init("icon", sizeof("icon") - 1, 1);
	zend_declare_typed_property(class_entry, property_icon_name, &property_icon_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_icon_name);

	zval property_uv_default_value;
	ZVAL_EMPTY_ARRAY(&property_uv_default_value);
	zend_string *property_uv_name = zend_string_init("uv", sizeof("uv") - 1, 1);
	zend_declare_typed_property(class_entry, property_uv_name, &property_uv_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_uv_name);

	zval property_tint_default_value;
	ZVAL_EMPTY_ARRAY(&property_tint_default_value);
	zend_string *property_tint_name = zend_string_init("tint", sizeof("tint") - 1, 1);
	zend_declare_typed_property(class_entry, property_tint_name, &property_tint_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_tint_name);

	zval property_icon_radius_default_value;
	ZVAL_DOUBLE(&property_icon_radius_default_value, 0.0);
	zend_string *property_icon_radius_name = zend_string_init("icon_radius", sizeof("icon_radius") - 1, 1);
	zend_declare_typed_property(class_entry, property_icon_radius_name, &property_icon_radius_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_icon_radius_name);

	zval property_text_color_default_value;
	ZVAL_EMPTY_ARRAY(&property_text_color_default_value);
	zend_string *property_text_color_name = zend_string_init("text_color", sizeof("text_color") - 1, 1);
	zend_declare_typed_property(class_entry, property_text_color_name, &property_text_color_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_text_color_name);

	zval property_note_default_value;
	ZVAL_NULL(&property_note_default_value);
	zend_string *property_note_name = zend_string_init("note", sizeof("note") - 1, 1);
	zend_declare_typed_property(class_entry, property_note_name, &property_note_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_note_name);

	zval property_detail_color_default_value;
	ZVAL_EMPTY_ARRAY(&property_detail_color_default_value);
	zend_string *property_detail_color_name = zend_string_init("detail_color", sizeof("detail_color") - 1, 1);
	zend_declare_typed_property(class_entry, property_detail_color_name, &property_detail_color_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_ARRAY));
	zend_string_release(property_detail_color_name);

	return class_entry;
}

static zend_class_entry *register_class_RTileSection(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RTileSection", class_RTileSection_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_first_default_value;
	ZVAL_LONG(&property_first_default_value, 0);
	zend_string *property_first_name = zend_string_init("first", sizeof("first") - 1, 1);
	zend_declare_typed_property(class_entry, property_first_name, &property_first_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_first_name);

	zval property_text_default_value;
	ZVAL_NULL(&property_text_default_value);
	zend_string *property_text_name = zend_string_init("text", sizeof("text") - 1, 1);
	zend_declare_typed_property(class_entry, property_text_name, &property_text_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_text_name);

	zval property_detail_default_value;
	ZVAL_NULL(&property_detail_default_value);
	zend_string *property_detail_name = zend_string_init("detail", sizeof("detail") - 1, 1);
	zend_declare_typed_property(class_entry, property_detail_name, &property_detail_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_detail_name);

	return class_entry;
}
