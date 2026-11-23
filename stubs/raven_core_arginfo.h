/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 5bcd483c8dac012c70fb487f72c51ca370ffa3c3 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Ris_initialized, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rget_version, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmemory_get_stats, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, stats, RMemoryStats, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rmemory_check arginfo_Ris_initialized

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rmemory_trim, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rdraw_frame arginfo_Ris_initialized

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwait_frame, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout_seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rquit, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, exit_code, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rget_exit_code arginfo_Ris_initialized

#define arginfo_Ris_running arginfo_Ris_initialized

#define arginfo_Rpoll_events arginfo_Rmemory_trim

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwait_events, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timeout_seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rset_frame_callback, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rget_delta_time, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rget_time arginfo_Rget_delta_time

#define arginfo_Rset_app_event_callback arginfo_Rset_frame_callback

#define arginfo_Ris_app_paused arginfo_Ris_initialized

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rinject_app_event, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rset_ui_scale, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, scale, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rset_vsync, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rget_vsync arginfo_Ris_initialized

#define arginfo_Rget_ui_scale arginfo_Rget_delta_time

#define arginfo_Rset_animations_enabled arginfo_Rset_vsync

#define arginfo_Rget_animations_enabled arginfo_Ris_initialized

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rset_animation_speed, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, speed, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rget_animation_speed arginfo_Rget_delta_time

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rset_animation_time_step, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, seconds, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtask_post, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, task, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rwake_up arginfo_Rmemory_trim

#define arginfo_Rget_worker_thread_count arginfo_Ris_initialized

#define arginfo_Ris_ui_thread arginfo_Ris_initialized

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimer_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, interval_seconds, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, repeat, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimer_destroy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rtimer_is_valid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_bind, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_unbind, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_fire, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Raction_set_default_handler arginfo_Rset_frame_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_bind_with_parameters, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO(0, user_data, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_get_sender, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_get_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
ZEND_END_ARG_INFO()

#define arginfo_Raction_get_argument_count arginfo_Raction_get_sender

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_get_number, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_get_string, 0, 2, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_get_bool, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_return_number, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_return_string, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_return_bool, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_fail, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, context, RActionContext, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Raction_set_builtins arginfo_Rset_vsync

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Raction_is_builtin, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Ropen_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rclipboard_set_text, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rclipboard_set_html, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, html, IS_STRING, 1)
ZEND_END_ARG_INFO()

#define arginfo_Rclipboard_get_text arginfo_Rget_version

#define arginfo_Rclipboard_has_text arginfo_Ris_initialized

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rclipboard_set_data, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, items, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rclipboard_has_data, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mime, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rclipboard_set_image, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stride, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rclipboard_has_image arginfo_Ris_initialized

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rerror_get_last, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, detail, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(1, severity, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rerror_to_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rseverity_to_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, severity, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_Rset_device_reset_callback arginfo_Rset_frame_callback

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_Rwindow_get_frame_stats, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, stats, RFrameStats, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RInitDesc___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, backend, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, app_name, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, worker_threads, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, disable_render_thread, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, disable_vsync, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enable_validation, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, headless, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ui_scale, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RMemoryStats___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, used_bytes, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, peak_bytes, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, reserved_bytes, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, allocation_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, total_allocations, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RFrameStats___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, layout_ms, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, paint_ms, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, render_ms, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, widget_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, instance_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, draw_call_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, backdrop_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, paint_job_count, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, frame_index, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RDataItem___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mime, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, data, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, size, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(Ris_initialized);
ZEND_FUNCTION(Rget_version);
ZEND_FUNCTION(Rmemory_get_stats);
ZEND_FUNCTION(Rmemory_check);
ZEND_FUNCTION(Rmemory_trim);
ZEND_FUNCTION(Rdraw_frame);
ZEND_FUNCTION(Rwait_frame);
ZEND_FUNCTION(Rquit);
ZEND_FUNCTION(Rget_exit_code);
ZEND_FUNCTION(Ris_running);
ZEND_FUNCTION(Rpoll_events);
ZEND_FUNCTION(Rwait_events);
ZEND_FUNCTION(Rset_frame_callback);
ZEND_FUNCTION(Rget_delta_time);
ZEND_FUNCTION(Rget_time);
ZEND_FUNCTION(Rset_app_event_callback);
ZEND_FUNCTION(Ris_app_paused);
ZEND_FUNCTION(Rinject_app_event);
ZEND_FUNCTION(Rset_ui_scale);
ZEND_FUNCTION(Rset_vsync);
ZEND_FUNCTION(Rget_vsync);
ZEND_FUNCTION(Rget_ui_scale);
ZEND_FUNCTION(Rset_animations_enabled);
ZEND_FUNCTION(Rget_animations_enabled);
ZEND_FUNCTION(Rset_animation_speed);
ZEND_FUNCTION(Rget_animation_speed);
ZEND_FUNCTION(Rset_animation_time_step);
ZEND_FUNCTION(Rtask_post);
ZEND_FUNCTION(Rwake_up);
ZEND_FUNCTION(Rget_worker_thread_count);
ZEND_FUNCTION(Ris_ui_thread);
ZEND_FUNCTION(Rtimer_create);
ZEND_FUNCTION(Rtimer_destroy);
ZEND_FUNCTION(Rtimer_is_valid);
ZEND_FUNCTION(Raction_bind);
ZEND_FUNCTION(Raction_unbind);
ZEND_FUNCTION(Raction_fire);
ZEND_FUNCTION(Raction_set_default_handler);
ZEND_FUNCTION(Raction_bind_with_parameters);
ZEND_FUNCTION(Raction_get_sender);
ZEND_FUNCTION(Raction_get_name);
ZEND_FUNCTION(Raction_get_argument_count);
ZEND_FUNCTION(Raction_get_number);
ZEND_FUNCTION(Raction_get_string);
ZEND_FUNCTION(Raction_get_bool);
ZEND_FUNCTION(Raction_return_number);
ZEND_FUNCTION(Raction_return_string);
ZEND_FUNCTION(Raction_return_bool);
ZEND_FUNCTION(Raction_fail);
ZEND_FUNCTION(Raction_set_builtins);
ZEND_FUNCTION(Raction_is_builtin);
ZEND_FUNCTION(Ropen_url);
ZEND_FUNCTION(Rclipboard_set_text);
ZEND_FUNCTION(Rclipboard_set_html);
ZEND_FUNCTION(Rclipboard_get_text);
ZEND_FUNCTION(Rclipboard_has_text);
ZEND_FUNCTION(Rclipboard_set_data);
ZEND_FUNCTION(Rclipboard_has_data);
ZEND_FUNCTION(Rclipboard_set_image);
ZEND_FUNCTION(Rclipboard_has_image);
ZEND_FUNCTION(Rerror_get_last);
ZEND_FUNCTION(Rerror_to_string);
ZEND_FUNCTION(Rseverity_to_string);
ZEND_FUNCTION(Rset_device_reset_callback);
ZEND_FUNCTION(Rwindow_get_frame_stats);
ZEND_METHOD(RInitDesc, __construct);
ZEND_METHOD(RMemoryStats, __construct);
ZEND_METHOD(RFrameStats, __construct);
ZEND_METHOD(RDataItem, __construct);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(Ris_initialized, arginfo_Ris_initialized)
	ZEND_FE(Rget_version, arginfo_Rget_version)
	ZEND_FE(Rmemory_get_stats, arginfo_Rmemory_get_stats)
	ZEND_FE(Rmemory_check, arginfo_Rmemory_check)
	ZEND_FE(Rmemory_trim, arginfo_Rmemory_trim)
	ZEND_FE(Rdraw_frame, arginfo_Rdraw_frame)
	ZEND_FE(Rwait_frame, arginfo_Rwait_frame)
	ZEND_FE(Rquit, arginfo_Rquit)
	ZEND_FE(Rget_exit_code, arginfo_Rget_exit_code)
	ZEND_FE(Ris_running, arginfo_Ris_running)
	ZEND_FE(Rpoll_events, arginfo_Rpoll_events)
	ZEND_FE(Rwait_events, arginfo_Rwait_events)
	ZEND_FE(Rset_frame_callback, arginfo_Rset_frame_callback)
	ZEND_FE(Rget_delta_time, arginfo_Rget_delta_time)
	ZEND_FE(Rget_time, arginfo_Rget_time)
	ZEND_FE(Rset_app_event_callback, arginfo_Rset_app_event_callback)
	ZEND_FE(Ris_app_paused, arginfo_Ris_app_paused)
	ZEND_FE(Rinject_app_event, arginfo_Rinject_app_event)
	ZEND_FE(Rset_ui_scale, arginfo_Rset_ui_scale)
	ZEND_FE(Rset_vsync, arginfo_Rset_vsync)
	ZEND_FE(Rget_vsync, arginfo_Rget_vsync)
	ZEND_FE(Rget_ui_scale, arginfo_Rget_ui_scale)
	ZEND_FE(Rset_animations_enabled, arginfo_Rset_animations_enabled)
	ZEND_FE(Rget_animations_enabled, arginfo_Rget_animations_enabled)
	ZEND_FE(Rset_animation_speed, arginfo_Rset_animation_speed)
	ZEND_FE(Rget_animation_speed, arginfo_Rget_animation_speed)
	ZEND_FE(Rset_animation_time_step, arginfo_Rset_animation_time_step)
	ZEND_FE(Rtask_post, arginfo_Rtask_post)
	ZEND_FE(Rwake_up, arginfo_Rwake_up)
	ZEND_FE(Rget_worker_thread_count, arginfo_Rget_worker_thread_count)
	ZEND_FE(Ris_ui_thread, arginfo_Ris_ui_thread)
	ZEND_FE(Rtimer_create, arginfo_Rtimer_create)
	ZEND_FE(Rtimer_destroy, arginfo_Rtimer_destroy)
	ZEND_FE(Rtimer_is_valid, arginfo_Rtimer_is_valid)
	ZEND_FE(Raction_bind, arginfo_Raction_bind)
	ZEND_FE(Raction_unbind, arginfo_Raction_unbind)
	ZEND_FE(Raction_fire, arginfo_Raction_fire)
	ZEND_FE(Raction_set_default_handler, arginfo_Raction_set_default_handler)
	ZEND_FE(Raction_bind_with_parameters, arginfo_Raction_bind_with_parameters)
	ZEND_FE(Raction_get_sender, arginfo_Raction_get_sender)
	ZEND_FE(Raction_get_name, arginfo_Raction_get_name)
	ZEND_FE(Raction_get_argument_count, arginfo_Raction_get_argument_count)
	ZEND_FE(Raction_get_number, arginfo_Raction_get_number)
	ZEND_FE(Raction_get_string, arginfo_Raction_get_string)
	ZEND_FE(Raction_get_bool, arginfo_Raction_get_bool)
	ZEND_FE(Raction_return_number, arginfo_Raction_return_number)
	ZEND_FE(Raction_return_string, arginfo_Raction_return_string)
	ZEND_FE(Raction_return_bool, arginfo_Raction_return_bool)
	ZEND_FE(Raction_fail, arginfo_Raction_fail)
	ZEND_FE(Raction_set_builtins, arginfo_Raction_set_builtins)
	ZEND_FE(Raction_is_builtin, arginfo_Raction_is_builtin)
	ZEND_FE(Ropen_url, arginfo_Ropen_url)
	ZEND_FE(Rclipboard_set_text, arginfo_Rclipboard_set_text)
	ZEND_FE(Rclipboard_set_html, arginfo_Rclipboard_set_html)
	ZEND_FE(Rclipboard_get_text, arginfo_Rclipboard_get_text)
	ZEND_FE(Rclipboard_has_text, arginfo_Rclipboard_has_text)
	ZEND_FE(Rclipboard_set_data, arginfo_Rclipboard_set_data)
	ZEND_FE(Rclipboard_has_data, arginfo_Rclipboard_has_data)
	ZEND_FE(Rclipboard_set_image, arginfo_Rclipboard_set_image)
	ZEND_FE(Rclipboard_has_image, arginfo_Rclipboard_has_image)
	ZEND_FE(Rerror_get_last, arginfo_Rerror_get_last)
	ZEND_FE(Rerror_to_string, arginfo_Rerror_to_string)
	ZEND_FE(Rseverity_to_string, arginfo_Rseverity_to_string)
	ZEND_FE(Rset_device_reset_callback, arginfo_Rset_device_reset_callback)
	ZEND_FE(Rwindow_get_frame_stats, arginfo_Rwindow_get_frame_stats)
	ZEND_FE_END
};

static const zend_function_entry class_RInitDesc_methods[] = {
	ZEND_ME(RInitDesc, __construct, arginfo_class_RInitDesc___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RMemoryStats_methods[] = {
	ZEND_ME(RMemoryStats, __construct, arginfo_class_RMemoryStats___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RFrameStats_methods[] = {
	ZEND_ME(RFrameStats, __construct, arginfo_class_RFrameStats___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_RDataItem_methods[] = {
	ZEND_ME(RDataItem, __construct, arginfo_class_RDataItem___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_raven_core_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("R_BACKEND_DEFAULT", R_BACKEND_DEFAULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKEND_VULKAN", R_BACKEND_VULKAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKEND_NULL", R_BACKEND_NULL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKEND_CUSTOM", R_BACKEND_CUSTOM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKEND_WEBGL", R_BACKEND_WEBGL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_BACKEND_METAL", R_BACKEND_METAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_NO_ERROR", R_NO_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_INVALID_ID", R_ERROR_INVALID_ID, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_INVALID_ENUM", R_ERROR_INVALID_ENUM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_INVALID_VALUE", R_ERROR_INVALID_VALUE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_INVALID_OPERATION", R_ERROR_INVALID_OPERATION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_BACKEND", R_ERROR_BACKEND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_PLATFORM", R_ERROR_PLATFORM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_OUT_OF_MEMORY", R_ERROR_OUT_OF_MEMORY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_INVALID_FILE_FORMAT", R_ERROR_INVALID_FILE_FORMAT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_FILE_NOT_FOUND", R_ERROR_FILE_NOT_FOUND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_XML", R_ERROR_XML, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_WRONG_THREAD", R_ERROR_WRONG_THREAD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_ERROR_SCRIPT", R_ERROR_SCRIPT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_SEVERITY_WEAK_WARNING", R_SEVERITY_WEAK_WARNING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_SEVERITY_WARNING", R_SEVERITY_WARNING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_SEVERITY_ERROR", R_SEVERITY_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_SEVERITY_FATAL", R_SEVERITY_FATAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_APP_WILL_PAUSE", R_APP_WILL_PAUSE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_APP_DID_PAUSE", R_APP_DID_PAUSE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_APP_WILL_RESUME", R_APP_WILL_RESUME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_APP_DID_RESUME", R_APP_DID_RESUME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_APP_LOW_MEMORY", R_APP_LOW_MEMORY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_APP_WILL_TERMINATE", R_APP_WILL_TERMINATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RAVEN_VERSION_MAJOR", RAVEN_VERSION_MAJOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RAVEN_VERSION_MINOR", RAVEN_VERSION_MINOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RAVEN_VERSION_PATCH", RAVEN_VERSION_PATCH, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("RAVEN_API_VERSION", RAVEN_API_VERSION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_FALSE", R_FALSE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_TRUE", R_TRUE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("R_INVALID_ID", R_INVALID_ID, CONST_PERSISTENT);
}

static zend_class_entry *register_class_RInitDesc(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RInitDesc", class_RInitDesc_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_backend_default_value;
	ZVAL_LONG(&property_backend_default_value, 0);
	zend_string *property_backend_name = zend_string_init("backend", sizeof("backend") - 1, 1);
	zend_declare_typed_property(class_entry, property_backend_name, &property_backend_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_backend_name);

	zval property_app_name_default_value;
	ZVAL_NULL(&property_app_name_default_value);
	zend_string *property_app_name_name = zend_string_init("app_name", sizeof("app_name") - 1, 1);
	zend_declare_typed_property(class_entry, property_app_name_name, &property_app_name_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_app_name_name);

	zval property_worker_threads_default_value;
	ZVAL_LONG(&property_worker_threads_default_value, 0);
	zend_string *property_worker_threads_name = zend_string_init("worker_threads", sizeof("worker_threads") - 1, 1);
	zend_declare_typed_property(class_entry, property_worker_threads_name, &property_worker_threads_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_worker_threads_name);

	zval property_disable_render_thread_default_value;
	ZVAL_LONG(&property_disable_render_thread_default_value, 0);
	zend_string *property_disable_render_thread_name = zend_string_init("disable_render_thread", sizeof("disable_render_thread") - 1, 1);
	zend_declare_typed_property(class_entry, property_disable_render_thread_name, &property_disable_render_thread_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_disable_render_thread_name);

	zval property_disable_vsync_default_value;
	ZVAL_LONG(&property_disable_vsync_default_value, 0);
	zend_string *property_disable_vsync_name = zend_string_init("disable_vsync", sizeof("disable_vsync") - 1, 1);
	zend_declare_typed_property(class_entry, property_disable_vsync_name, &property_disable_vsync_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_disable_vsync_name);

	zval property_enable_validation_default_value;
	ZVAL_LONG(&property_enable_validation_default_value, 0);
	zend_string *property_enable_validation_name = zend_string_init("enable_validation", sizeof("enable_validation") - 1, 1);
	zend_declare_typed_property(class_entry, property_enable_validation_name, &property_enable_validation_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_enable_validation_name);

	zval property_headless_default_value;
	ZVAL_LONG(&property_headless_default_value, 0);
	zend_string *property_headless_name = zend_string_init("headless", sizeof("headless") - 1, 1);
	zend_declare_typed_property(class_entry, property_headless_name, &property_headless_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_headless_name);

	zval property_ui_scale_default_value;
	ZVAL_DOUBLE(&property_ui_scale_default_value, 0.0);
	zend_string *property_ui_scale_name = zend_string_init("ui_scale", sizeof("ui_scale") - 1, 1);
	zend_declare_typed_property(class_entry, property_ui_scale_name, &property_ui_scale_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_ui_scale_name);

	return class_entry;
}

static zend_class_entry *register_class_RMemoryStats(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RMemoryStats", class_RMemoryStats_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_used_bytes_default_value;
	ZVAL_LONG(&property_used_bytes_default_value, 0);
	zend_string *property_used_bytes_name = zend_string_init("used_bytes", sizeof("used_bytes") - 1, 1);
	zend_declare_typed_property(class_entry, property_used_bytes_name, &property_used_bytes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_used_bytes_name);

	zval property_peak_bytes_default_value;
	ZVAL_LONG(&property_peak_bytes_default_value, 0);
	zend_string *property_peak_bytes_name = zend_string_init("peak_bytes", sizeof("peak_bytes") - 1, 1);
	zend_declare_typed_property(class_entry, property_peak_bytes_name, &property_peak_bytes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_peak_bytes_name);

	zval property_reserved_bytes_default_value;
	ZVAL_LONG(&property_reserved_bytes_default_value, 0);
	zend_string *property_reserved_bytes_name = zend_string_init("reserved_bytes", sizeof("reserved_bytes") - 1, 1);
	zend_declare_typed_property(class_entry, property_reserved_bytes_name, &property_reserved_bytes_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_reserved_bytes_name);

	zval property_allocation_count_default_value;
	ZVAL_LONG(&property_allocation_count_default_value, 0);
	zend_string *property_allocation_count_name = zend_string_init("allocation_count", sizeof("allocation_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_allocation_count_name, &property_allocation_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_allocation_count_name);

	zval property_total_allocations_default_value;
	ZVAL_LONG(&property_total_allocations_default_value, 0);
	zend_string *property_total_allocations_name = zend_string_init("total_allocations", sizeof("total_allocations") - 1, 1);
	zend_declare_typed_property(class_entry, property_total_allocations_name, &property_total_allocations_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_total_allocations_name);

	return class_entry;
}

static zend_class_entry *register_class_RFrameStats(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RFrameStats", class_RFrameStats_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_layout_ms_default_value;
	ZVAL_DOUBLE(&property_layout_ms_default_value, 0.0);
	zend_string *property_layout_ms_name = zend_string_init("layout_ms", sizeof("layout_ms") - 1, 1);
	zend_declare_typed_property(class_entry, property_layout_ms_name, &property_layout_ms_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_layout_ms_name);

	zval property_paint_ms_default_value;
	ZVAL_DOUBLE(&property_paint_ms_default_value, 0.0);
	zend_string *property_paint_ms_name = zend_string_init("paint_ms", sizeof("paint_ms") - 1, 1);
	zend_declare_typed_property(class_entry, property_paint_ms_name, &property_paint_ms_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_paint_ms_name);

	zval property_render_ms_default_value;
	ZVAL_DOUBLE(&property_render_ms_default_value, 0.0);
	zend_string *property_render_ms_name = zend_string_init("render_ms", sizeof("render_ms") - 1, 1);
	zend_declare_typed_property(class_entry, property_render_ms_name, &property_render_ms_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_render_ms_name);

	zval property_widget_count_default_value;
	ZVAL_LONG(&property_widget_count_default_value, 0);
	zend_string *property_widget_count_name = zend_string_init("widget_count", sizeof("widget_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_widget_count_name, &property_widget_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_widget_count_name);

	zval property_instance_count_default_value;
	ZVAL_LONG(&property_instance_count_default_value, 0);
	zend_string *property_instance_count_name = zend_string_init("instance_count", sizeof("instance_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_instance_count_name, &property_instance_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_instance_count_name);

	zval property_draw_call_count_default_value;
	ZVAL_LONG(&property_draw_call_count_default_value, 0);
	zend_string *property_draw_call_count_name = zend_string_init("draw_call_count", sizeof("draw_call_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_draw_call_count_name, &property_draw_call_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_draw_call_count_name);

	zval property_backdrop_count_default_value;
	ZVAL_LONG(&property_backdrop_count_default_value, 0);
	zend_string *property_backdrop_count_name = zend_string_init("backdrop_count", sizeof("backdrop_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_backdrop_count_name, &property_backdrop_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_backdrop_count_name);

	zval property_paint_job_count_default_value;
	ZVAL_LONG(&property_paint_job_count_default_value, 0);
	zend_string *property_paint_job_count_name = zend_string_init("paint_job_count", sizeof("paint_job_count") - 1, 1);
	zend_declare_typed_property(class_entry, property_paint_job_count_name, &property_paint_job_count_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_paint_job_count_name);

	zval property_frame_index_default_value;
	ZVAL_LONG(&property_frame_index_default_value, 0);
	zend_string *property_frame_index_name = zend_string_init("frame_index", sizeof("frame_index") - 1, 1);
	zend_declare_typed_property(class_entry, property_frame_index_name, &property_frame_index_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_frame_index_name);

	return class_entry;
}

static zend_class_entry *register_class_RDataItem(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "RDataItem", class_RDataItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_mime_default_value;
	ZVAL_NULL(&property_mime_default_value);
	zend_string *property_mime_name = zend_string_init("mime", sizeof("mime") - 1, 1);
	zend_declare_typed_property(class_entry, property_mime_name, &property_mime_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_mime_name);

	zval property_data_default_value;
	ZVAL_NULL(&property_data_default_value);
	zend_string *property_data_name = zend_string_init("data", sizeof("data") - 1, 1);
	zend_declare_typed_property(class_entry, property_data_name, &property_data_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING|MAY_BE_NULL));
	zend_string_release(property_data_name);

	zval property_size_default_value;
	ZVAL_LONG(&property_size_default_value, 0);
	zend_string *property_size_name = zend_string_init("size", sizeof("size") - 1, 1);
	zend_declare_typed_property(class_entry, property_size_name, &property_size_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_size_name);

	return class_entry;
}
