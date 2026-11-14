/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: afd1b5ebee79e92d7e55184d8eab99e487c206aa */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_text, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_get_text, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_get_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_get_line_count arginfo_Rtext_editor_get_length

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_get_line, 0, 2, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_insert_text arginfo_Rtext_editor_set_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_cursor, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_get_cursor, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, line, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, column, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_select, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from_line, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from_column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to_line, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to_column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_select_all, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_get_selection, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, from_line, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, from_column, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, to_line, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(1, to_column, IS_LONG, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_get_selected_text arginfo_Rtext_editor_get_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_scroll_to_line, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_undo arginfo_Rtext_editor_select_all

#define arginfo_Rtext_editor_redo arginfo_Rtext_editor_select_all

#define arginfo_Rtext_editor_can_undo arginfo_Rtext_editor_get_length

#define arginfo_Rtext_editor_can_redo arginfo_Rtext_editor_get_length

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_read_only, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, read_only, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_word_wrap, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_set_line_numbers arginfo_Rtext_editor_set_word_wrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_tab_size, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spaces, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_set_tab_inserts_spaces arginfo_Rtext_editor_set_word_wrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_syntax, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, syntax, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_font, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_set_placeholder arginfo_Rtext_editor_set_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_zoom, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zoom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_get_zoom, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_zoomable, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zoomable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_zoom_callback, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlanguage_register, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, desc, RLanguageDesc, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlanguage_get, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, desc, RLanguageDesc, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlanguage_get_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlanguage_get_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rlanguage_for_file, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_set_language, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_get_language arginfo_Rtext_editor_get_text

#define arginfo_Rtext_editor_set_markdown arginfo_Rtext_editor_set_word_wrap

#define arginfo_Rtext_editor_get_markdown arginfo_Rtext_editor_get_length

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_get_token, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_set_completion arginfo_Rtext_editor_set_word_wrap

#define arginfo_Rtext_editor_show_completions arginfo_Rtext_editor_select_all

#define arginfo_Rtext_editor_is_completing arginfo_Rtext_editor_get_length

#define arginfo_Rtext_editor_set_completion_callback arginfo_Rtext_editor_set_zoom_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_add_completion, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, detail, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_add_completion_insert, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, detail, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, insert, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_set_completion_words arginfo_Rtext_editor_set_word_wrap

#define arginfo_Rtext_editor_set_auto_pairs arginfo_Rtext_editor_set_word_wrap

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtext_editor_add_marker, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from_column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to_column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_clear_markers arginfo_Rtext_editor_select_all

#define arginfo_Rtext_editor_get_marker_count arginfo_Rtext_editor_get_length

#define arginfo_Rtext_editor_set_hover_callback arginfo_Rtext_editor_set_zoom_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtheme_set_token_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, token, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtheme_get_token_color, 0, 5, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, token, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, r, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, g, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, b, IS_DOUBLE, 1)
	ZEND_ARG_TYPE_INFO(1, a, IS_DOUBLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtheme_clear_token_colors, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rtext_editor_set_changed_callback arginfo_Rtext_editor_set_zoom_callback

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RLanguageDesc___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, extensions, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, keywords, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, types, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, constants, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, line_comment, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, block_comment_start, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, block_comment_end, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, string_quotes, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, multiline_strings, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, directive, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, annotation, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, script_language, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Rtext_editor_create);
ZEND_FUNCTION(Rtext_editor_set_text);
ZEND_FUNCTION(Rtext_editor_get_text);
ZEND_FUNCTION(Rtext_editor_get_length);
ZEND_FUNCTION(Rtext_editor_get_line_count);
ZEND_FUNCTION(Rtext_editor_get_line);
ZEND_FUNCTION(Rtext_editor_insert_text);
ZEND_FUNCTION(Rtext_editor_set_cursor);
ZEND_FUNCTION(Rtext_editor_get_cursor);
ZEND_FUNCTION(Rtext_editor_select);
ZEND_FUNCTION(Rtext_editor_select_all);
ZEND_FUNCTION(Rtext_editor_get_selection);
ZEND_FUNCTION(Rtext_editor_get_selected_text);
ZEND_FUNCTION(Rtext_editor_scroll_to_line);
ZEND_FUNCTION(Rtext_editor_undo);
ZEND_FUNCTION(Rtext_editor_redo);
ZEND_FUNCTION(Rtext_editor_can_undo);
ZEND_FUNCTION(Rtext_editor_can_redo);
ZEND_FUNCTION(Rtext_editor_set_read_only);
ZEND_FUNCTION(Rtext_editor_set_word_wrap);
ZEND_FUNCTION(Rtext_editor_set_line_numbers);
ZEND_FUNCTION(Rtext_editor_set_tab_size);
ZEND_FUNCTION(Rtext_editor_set_tab_inserts_spaces);
ZEND_FUNCTION(Rtext_editor_set_syntax);
ZEND_FUNCTION(Rtext_editor_set_font);
ZEND_FUNCTION(Rtext_editor_set_placeholder);
ZEND_FUNCTION(Rtext_editor_set_zoom);
ZEND_FUNCTION(Rtext_editor_get_zoom);
ZEND_FUNCTION(Rtext_editor_set_zoomable);
ZEND_FUNCTION(Rtext_editor_set_zoom_callback);
ZEND_FUNCTION(Rlanguage_register);
ZEND_FUNCTION(Rlanguage_get);
ZEND_FUNCTION(Rlanguage_get_count);
ZEND_FUNCTION(Rlanguage_get_name);
ZEND_FUNCTION(Rlanguage_for_file);
ZEND_FUNCTION(Rtext_editor_set_language);
ZEND_FUNCTION(Rtext_editor_get_language);
ZEND_FUNCTION(Rtext_editor_set_markdown);
ZEND_FUNCTION(Rtext_editor_get_markdown);
ZEND_FUNCTION(Rtext_editor_get_token);
ZEND_FUNCTION(Rtext_editor_set_completion);
ZEND_FUNCTION(Rtext_editor_show_completions);
ZEND_FUNCTION(Rtext_editor_is_completing);
ZEND_FUNCTION(Rtext_editor_set_completion_callback);
ZEND_FUNCTION(Rtext_editor_add_completion);
ZEND_FUNCTION(Rtext_editor_add_completion_insert);
ZEND_FUNCTION(Rtext_editor_set_completion_words);
ZEND_FUNCTION(Rtext_editor_set_auto_pairs);
ZEND_FUNCTION(Rtext_editor_add_marker);
ZEND_FUNCTION(Rtext_editor_clear_markers);
ZEND_FUNCTION(Rtext_editor_get_marker_count);
ZEND_FUNCTION(Rtext_editor_set_hover_callback);
ZEND_FUNCTION(Rtheme_set_token_color);
ZEND_FUNCTION(Rtheme_get_token_color);
ZEND_FUNCTION(Rtheme_clear_token_colors);
ZEND_FUNCTION(Rtext_editor_set_changed_callback);
ZEND_METHOD(RLanguageDesc, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Rtext_editor_create, arginfo_Rtext_editor_create)
	ZEND_FE(Rtext_editor_set_text, arginfo_Rtext_editor_set_text)
	ZEND_FE(Rtext_editor_get_text, arginfo_Rtext_editor_get_text)
	ZEND_FE(Rtext_editor_get_length, arginfo_Rtext_editor_get_length)
	ZEND_FE(Rtext_editor_get_line_count, arginfo_Rtext_editor_get_line_count)
	ZEND_FE(Rtext_editor_get_line, arginfo_Rtext_editor_get_line)
	ZEND_FE(Rtext_editor_insert_text, arginfo_Rtext_editor_insert_text)
	ZEND_FE(Rtext_editor_set_cursor, arginfo_Rtext_editor_set_cursor)
	ZEND_FE(Rtext_editor_get_cursor, arginfo_Rtext_editor_get_cursor)
	ZEND_FE(Rtext_editor_select, arginfo_Rtext_editor_select)
	ZEND_FE(Rtext_editor_select_all, arginfo_Rtext_editor_select_all)
	ZEND_FE(Rtext_editor_get_selection, arginfo_Rtext_editor_get_selection)
	ZEND_FE(Rtext_editor_get_selected_text, arginfo_Rtext_editor_get_selected_text)
	ZEND_FE(Rtext_editor_scroll_to_line, arginfo_Rtext_editor_scroll_to_line)
	ZEND_FE(Rtext_editor_undo, arginfo_Rtext_editor_undo)
	ZEND_FE(Rtext_editor_redo, arginfo_Rtext_editor_redo)
	ZEND_FE(Rtext_editor_can_undo, arginfo_Rtext_editor_can_undo)
	ZEND_FE(Rtext_editor_can_redo, arginfo_Rtext_editor_can_redo)
	ZEND_FE(Rtext_editor_set_read_only, arginfo_Rtext_editor_set_read_only)
	ZEND_FE(Rtext_editor_set_word_wrap, arginfo_Rtext_editor_set_word_wrap)
	ZEND_FE(Rtext_editor_set_line_numbers, arginfo_Rtext_editor_set_line_numbers)
	ZEND_FE(Rtext_editor_set_tab_size, arginfo_Rtext_editor_set_tab_size)
	ZEND_FE(Rtext_editor_set_tab_inserts_spaces, arginfo_Rtext_editor_set_tab_inserts_spaces)
	ZEND_FE(Rtext_editor_set_syntax, arginfo_Rtext_editor_set_syntax)
	ZEND_FE(Rtext_editor_set_font, arginfo_Rtext_editor_set_font)
	ZEND_FE(Rtext_editor_set_placeholder, arginfo_Rtext_editor_set_placeholder)
	ZEND_FE(Rtext_editor_set_zoom, arginfo_Rtext_editor_set_zoom)
	ZEND_FE(Rtext_editor_get_zoom, arginfo_Rtext_editor_get_zoom)
	ZEND_FE(Rtext_editor_set_zoomable, arginfo_Rtext_editor_set_zoomable)
	ZEND_FE(Rtext_editor_set_zoom_callback, arginfo_Rtext_editor_set_zoom_callback)
	ZEND_FE(Rlanguage_register, arginfo_Rlanguage_register)
	ZEND_FE(Rlanguage_get, arginfo_Rlanguage_get)
	ZEND_FE(Rlanguage_get_count, arginfo_Rlanguage_get_count)
	ZEND_FE(Rlanguage_get_name, arginfo_Rlanguage_get_name)
	ZEND_FE(Rlanguage_for_file, arginfo_Rlanguage_for_file)
	ZEND_FE(Rtext_editor_set_language, arginfo_Rtext_editor_set_language)
	ZEND_FE(Rtext_editor_get_language, arginfo_Rtext_editor_get_language)
	ZEND_FE(Rtext_editor_set_markdown, arginfo_Rtext_editor_set_markdown)
	ZEND_FE(Rtext_editor_get_markdown, arginfo_Rtext_editor_get_markdown)
	ZEND_FE(Rtext_editor_get_token, arginfo_Rtext_editor_get_token)
	ZEND_FE(Rtext_editor_set_completion, arginfo_Rtext_editor_set_completion)
	ZEND_FE(Rtext_editor_show_completions, arginfo_Rtext_editor_show_completions)
	ZEND_FE(Rtext_editor_is_completing, arginfo_Rtext_editor_is_completing)
	ZEND_FE(Rtext_editor_set_completion_callback, arginfo_Rtext_editor_set_completion_callback)
	ZEND_FE(Rtext_editor_add_completion, arginfo_Rtext_editor_add_completion)
	ZEND_FE(Rtext_editor_add_completion_insert, arginfo_Rtext_editor_add_completion_insert)
	ZEND_FE(Rtext_editor_set_completion_words, arginfo_Rtext_editor_set_completion_words)
	ZEND_FE(Rtext_editor_set_auto_pairs, arginfo_Rtext_editor_set_auto_pairs)
	ZEND_FE(Rtext_editor_add_marker, arginfo_Rtext_editor_add_marker)
	ZEND_FE(Rtext_editor_clear_markers, arginfo_Rtext_editor_clear_markers)
	ZEND_FE(Rtext_editor_get_marker_count, arginfo_Rtext_editor_get_marker_count)
	ZEND_FE(Rtext_editor_set_hover_callback, arginfo_Rtext_editor_set_hover_callback)
	ZEND_FE(Rtheme_set_token_color, arginfo_Rtheme_set_token_color)
	ZEND_FE(Rtheme_get_token_color, arginfo_Rtheme_get_token_color)
	ZEND_FE(Rtheme_clear_token_colors, arginfo_Rtheme_clear_token_colors)
	ZEND_FE(Rtext_editor_set_changed_callback, arginfo_Rtext_editor_set_changed_callback)
	ZEND_FE_END
};

static const zend_function_entry class_RLanguageDesc_methods[] = {
	ZEND_ME(RLanguageDesc, __construct, arginfo_class_RLanguageDesc___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_text_editor_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_SYNTAX_NONE", R_SYNTAX_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_SYNTAX_XML", R_SYNTAX_XML, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_SYNTAX_C", R_SYNTAX_C, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_LANGUAGE_MARKUP", R_LANGUAGE_MARKUP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_LANGUAGE_STYLE_SHEET", R_LANGUAGE_STYLE_SHEET, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_LANGUAGE_NESTED_COMMENTS", R_LANGUAGE_NESTED_COMMENTS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_LANGUAGE_CHAR_LITERALS", R_LANGUAGE_CHAR_LITERALS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_LANGUAGE_INDENT_ON_COLON", R_LANGUAGE_INDENT_ON_COLON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_LANGUAGE_IGNORE_CASE", R_LANGUAGE_IGNORE_CASE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_LANGUAGE_EMBEDS", R_LANGUAGE_EMBEDS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_LANGUAGE_FORMATTED_TEXT", R_LANGUAGE_FORMATTED_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_TEXT", R_TOKEN_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_COMMENT", R_TOKEN_COMMENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_STRING", R_TOKEN_STRING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_NUMBER", R_TOKEN_NUMBER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_KEYWORD", R_TOKEN_KEYWORD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_TYPE", R_TOKEN_TYPE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_FUNCTION", R_TOKEN_FUNCTION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_TAG", R_TOKEN_TAG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_ATTRIBUTE", R_TOKEN_ATTRIBUTE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_PUNCTUATION", R_TOKEN_PUNCTUATION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_DIRECTIVE", R_TOKEN_DIRECTIVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_HEADING", R_TOKEN_HEADING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_STRONG", R_TOKEN_STRONG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_EMPHASIS", R_TOKEN_EMPHASIS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TOKEN_LINK", R_TOKEN_LINK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MARKER_ERROR", R_MARKER_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MARKER_WARNING", R_MARKER_WARNING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_MARKER_INFO", R_MARKER_INFO, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RLanguageDesc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RLanguageDesc", class_RLanguageDesc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_name_default_value;
	ZVAL_NULL(&property_name_default_value);
	zend_string *property_name_name = zend_string_init("name", sizeof("name") - 1, 1);
	zend_declare_typed_property(class_entry, property_name_name, &property_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_name_name);

	zval property_extensions_default_value;
	ZVAL_NULL(&property_extensions_default_value);
	zend_string *property_extensions_name = zend_string_init("extensions", sizeof("extensions") - 1, 1);
	zend_declare_typed_property(class_entry, property_extensions_name, &property_extensions_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_extensions_name);

	zval property_keywords_default_value;
	ZVAL_NULL(&property_keywords_default_value);
	zend_string *property_keywords_name = zend_string_init("keywords", sizeof("keywords") - 1, 1);
	zend_declare_typed_property(class_entry, property_keywords_name, &property_keywords_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_keywords_name);

	zval property_types_default_value;
	ZVAL_NULL(&property_types_default_value);
	zend_string *property_types_name = zend_string_init("types", sizeof("types") - 1, 1);
	zend_declare_typed_property(class_entry, property_types_name, &property_types_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_types_name);

	zval property_constants_default_value;
	ZVAL_NULL(&property_constants_default_value);
	zend_string *property_constants_name = zend_string_init("constants", sizeof("constants") - 1, 1);
	zend_declare_typed_property(class_entry, property_constants_name, &property_constants_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_constants_name);

	zval property_line_comment_default_value;
	ZVAL_NULL(&property_line_comment_default_value);
	zend_string *property_line_comment_name = zend_string_init("line_comment", sizeof("line_comment") - 1, 1);
	zend_declare_typed_property(class_entry, property_line_comment_name, &property_line_comment_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_line_comment_name);

	zval property_block_comment_start_default_value;
	ZVAL_NULL(&property_block_comment_start_default_value);
	zend_string *property_block_comment_start_name = zend_string_init("block_comment_start", sizeof("block_comment_start") - 1, 1);
	zend_declare_typed_property(class_entry, property_block_comment_start_name, &property_block_comment_start_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_block_comment_start_name);

	zval property_block_comment_end_default_value;
	ZVAL_NULL(&property_block_comment_end_default_value);
	zend_string *property_block_comment_end_name = zend_string_init("block_comment_end", sizeof("block_comment_end") - 1, 1);
	zend_declare_typed_property(class_entry, property_block_comment_end_name, &property_block_comment_end_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_block_comment_end_name);

	zval property_string_quotes_default_value;
	ZVAL_NULL(&property_string_quotes_default_value);
	zend_string *property_string_quotes_name = zend_string_init("string_quotes", sizeof("string_quotes") - 1, 1);
	zend_declare_typed_property(class_entry, property_string_quotes_name, &property_string_quotes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_string_quotes_name);

	zval property_multiline_strings_default_value;
	ZVAL_NULL(&property_multiline_strings_default_value);
	zend_string *property_multiline_strings_name = zend_string_init("multiline_strings", sizeof("multiline_strings") - 1, 1);
	zend_declare_typed_property(class_entry, property_multiline_strings_name, &property_multiline_strings_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_multiline_strings_name);

	zval property_directive_default_value;
	ZVAL_NULL(&property_directive_default_value);
	zend_string *property_directive_name = zend_string_init("directive", sizeof("directive") - 1, 1);
	zend_declare_typed_property(class_entry, property_directive_name, &property_directive_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_directive_name);

	zval property_annotation_default_value;
	ZVAL_NULL(&property_annotation_default_value);
	zend_string *property_annotation_name = zend_string_init("annotation", sizeof("annotation") - 1, 1);
	zend_declare_typed_property(class_entry, property_annotation_name, &property_annotation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_annotation_name);

	zval property_flags_default_value;
	ZVAL_LONG(&property_flags_default_value, 0);
	zend_string *property_flags_name = zend_string_init("flags", sizeof("flags") - 1, 1);
	zend_declare_typed_property(class_entry, property_flags_name, &property_flags_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_flags_name);

	zval property_script_language_default_value;
	ZVAL_NULL(&property_script_language_default_value);
	zend_string *property_script_language_name = zend_string_init("script_language", sizeof("script_language") - 1, 1);
	zend_declare_typed_property(class_entry, property_script_language_name, &property_script_language_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_script_language_name);

	return class_entry;
}
