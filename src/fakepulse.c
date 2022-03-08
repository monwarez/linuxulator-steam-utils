#include <assert.h>
#include <stdio.h>

#define FAKE(name) void name() { fprintf(stderr, "fakepulse: %s\n", #name); assert(0); }

//~ FAKE(pa_simple_drain);
//~ FAKE(pa_simple_flush);
//~ FAKE(pa_simple_free);
//~ FAKE(pa_simple_get_latency);
//~ FAKE(pa_simple_new);
//~ FAKE(pa_simple_read);
//~ FAKE(pa_simple_write);
//~ FAKE(pa_threaded_mainloop_start);
//~ FAKE(pa_threaded_mainloop_lock);
//~ FAKE(pa_threaded_mainloop_get_api);
//~ FAKE(pa_proplist_new);
//~ FAKE(pa_proplist_set);
//~ FAKE(pa_proplist_sets);
//~ FAKE(pa_context_new_with_proplist);
//~ FAKE(pa_proplist_free);
//~ FAKE(pa_context_set_state_callback);
//~ FAKE(pa_context_errno);
//~ FAKE(pa_threaded_mainloop_unlock);

FAKE(pa_apply_volume_multiplier);
FAKE(pa_ascii_filter);
FAKE(pa_ascii_valid);
FAKE(pa_bytes_per_second);
FAKE(pa_bytes_snprint);
FAKE(pa_bytes_to_usec);
FAKE(pa_channel_map_can_balance);
FAKE(pa_channel_map_can_fade);
FAKE(pa_channel_map_compatible);
FAKE(pa_channel_map_equal);
FAKE(pa_channel_map_has_position);
FAKE(pa_channel_map_init);
FAKE(pa_channel_map_init_auto);
FAKE(pa_channel_map_init_extend);
FAKE(pa_channel_map_init_mono);
FAKE(pa_channel_map_init_stereo);
FAKE(pa_channel_map_mask);
FAKE(pa_channel_map_parse);
FAKE(pa_channel_map_snprint);
FAKE(pa_channel_map_superset);
FAKE(pa_channel_map_to_name);
FAKE(pa_channel_map_to_pretty_name);
FAKE(pa_channel_map_valid);
FAKE(pa_channel_position_from_string);
FAKE(pa_channel_position_to_pretty_string);
FAKE(pa_channel_position_to_string);
FAKE(pa_channels_valid);
FAKE(pa_close);
FAKE(pa_context_add_autoload);
FAKE(pa_context_disconnect);
FAKE(pa_context_drain);
FAKE(pa_context_exit_daemon);
FAKE(pa_context_get_autoload_info_by_index);
FAKE(pa_context_get_autoload_info_by_name);
FAKE(pa_context_get_autoload_info_list);
FAKE(pa_context_get_card_info_by_index);
FAKE(pa_context_get_card_info_by_name);
FAKE(pa_context_get_card_info_list);
FAKE(pa_context_get_client_info);
FAKE(pa_context_get_client_info_list);
FAKE(pa_context_get_index);
FAKE(pa_context_get_module_info);
FAKE(pa_context_get_module_info_list);
FAKE(pa_context_get_protocol_version);
FAKE(pa_context_get_sample_info_by_index);
FAKE(pa_context_get_sample_info_by_name);
FAKE(pa_context_get_sample_info_list);
FAKE(pa_context_get_server);
FAKE(pa_context_get_server_info);
FAKE(pa_context_get_server_info_impl);
FAKE(pa_context_get_server_protocol_version);
FAKE(pa_context_get_sink_info_by_index);
FAKE(pa_context_get_sink_info_by_index_impl);
FAKE(pa_context_get_sink_info_by_name);
FAKE(pa_context_get_sink_info_by_name_impl);
FAKE(pa_context_get_sink_info_list);
FAKE(pa_context_get_sink_info_list_impl);
FAKE(pa_context_get_sink_input_info);
FAKE(pa_context_get_sink_input_info_impl);
FAKE(pa_context_get_sink_input_info_list);
FAKE(pa_context_get_source_info_by_index);
FAKE(pa_context_get_source_info_by_name);
FAKE(pa_context_get_source_info_by_name_impl);
FAKE(pa_context_get_source_info_list);
FAKE(pa_context_get_source_info_list_impl);
FAKE(pa_context_get_source_output_info);
FAKE(pa_context_get_source_output_info_list);
FAKE(pa_context_get_state);
FAKE(pa_context_get_tile_size);
FAKE(pa_context_is_local);
FAKE(pa_context_is_pending);
FAKE(pa_context_kill_client);
FAKE(pa_context_kill_sink_input);
FAKE(pa_context_kill_source_output);
FAKE(pa_context_load_cookie_from_file);
FAKE(pa_context_load_module);
FAKE(pa_context_move_sink_input_by_index);
FAKE(pa_context_move_sink_input_by_name);
FAKE(pa_context_move_source_output_by_index);
FAKE(pa_context_move_source_output_by_name);
FAKE(pa_context_play_sample);
FAKE(pa_context_play_sample_with_proplist);
FAKE(pa_context_proplist_remove);
FAKE(pa_context_proplist_update);
FAKE(pa_context_ref);
FAKE(pa_context_remove_autoload_by_index);
FAKE(pa_context_remove_autoload_by_name);
FAKE(pa_context_remove_sample);
FAKE(pa_context_rttime_new);
FAKE(pa_context_rttime_restart);
FAKE(pa_context_set_card_profile_by_index);
FAKE(pa_context_set_card_profile_by_name);
FAKE(pa_context_set_default_sink);
FAKE(pa_context_set_default_source);
FAKE(pa_context_set_event_callback);
FAKE(pa_context_set_name);
FAKE(pa_context_set_port_latency_offset);
FAKE(pa_context_set_sink_input_mute);
FAKE(pa_context_set_sink_input_volume);
FAKE(pa_context_set_sink_input_volume_impl);
FAKE(pa_context_set_sink_mute_by_index);
FAKE(pa_context_set_sink_mute_by_name);
FAKE(pa_context_set_sink_port_by_index);
FAKE(pa_context_set_sink_port_by_name);
FAKE(pa_context_set_sink_volume_by_index);
FAKE(pa_context_set_sink_volume_by_name);
FAKE(pa_context_set_source_mute_by_index);
FAKE(pa_context_set_source_mute_by_name);
FAKE(pa_context_set_source_output_mute);
FAKE(pa_context_set_source_output_volume);
FAKE(pa_context_set_source_port_by_index);
FAKE(pa_context_set_source_port_by_name);
FAKE(pa_context_set_source_volume_by_index);
FAKE(pa_context_set_source_volume_by_index_impl);
FAKE(pa_context_set_source_volume_by_name);
FAKE(pa_context_set_subscribe_callback);
FAKE(pa_context_stat);
FAKE(pa_context_subscribe);
FAKE(pa_context_suspend_sink_by_index);
FAKE(pa_context_suspend_sink_by_name);
FAKE(pa_context_suspend_source_by_index);
FAKE(pa_context_suspend_source_by_name);
FAKE(pa_context_unload_module);
FAKE(pa_cvolume_avg);
FAKE(pa_cvolume_avg_mask);
FAKE(pa_cvolume_channels_equal_to);
FAKE(pa_cvolume_compatible);
FAKE(pa_cvolume_compatible_with_channel_map);
FAKE(pa_cvolume_dec);
FAKE(pa_cvolume_equal);
FAKE(pa_cvolume_get_balance);
FAKE(pa_cvolume_get_fade);
FAKE(pa_cvolume_get_position);
FAKE(pa_cvolume_inc);
FAKE(pa_cvolume_inc_clamp);
FAKE(pa_cvolume_init);
FAKE(pa_cvolume_max);
FAKE(pa_cvolume_max_mask);
FAKE(pa_cvolume_merge);
FAKE(pa_cvolume_min);
FAKE(pa_cvolume_min_mask);
FAKE(pa_cvolume_remap);
FAKE(pa_cvolume_scale);
FAKE(pa_cvolume_scale_mask);
FAKE(pa_cvolume_set);
FAKE(pa_cvolume_set_balance);
FAKE(pa_cvolume_set_fade);
FAKE(pa_cvolume_set_position);
FAKE(pa_cvolume_snprint);
FAKE(pa_cvolume_snprint_verbose);
FAKE(pa_cvolume_valid);
FAKE(pa_disable_sigpipe);
FAKE(pa_encoding_from_string);
FAKE(pa_encoding_to_string);
FAKE(pa_ext_device_manager_delete);
FAKE(pa_ext_device_manager_enable_role_device_priority_routing);
FAKE(pa_ext_device_manager_read);
FAKE(pa_ext_device_manager_reorder_devices_for_role);
FAKE(pa_ext_device_manager_set_device_description);
FAKE(pa_ext_device_manager_set_subscribe_cb);
FAKE(pa_ext_device_manager_subscribe);
FAKE(pa_ext_device_manager_test);
FAKE(pa_ext_device_restore_read_formats);
FAKE(pa_ext_device_restore_read_formats_all);
FAKE(pa_ext_device_restore_save_formats);
FAKE(pa_ext_device_restore_set_subscribe_cb);
FAKE(pa_ext_device_restore_subscribe);
FAKE(pa_ext_device_restore_test);
FAKE(pa_ext_stream_restore_read);
FAKE(pa_ext_stream_restore_set_subscribe_cb);
FAKE(pa_ext_stream_restore_subscribe);
FAKE(pa_ext_stream_restore_test);
FAKE(pa_ext_stream_restore_write);
FAKE(pa_find_multiple_of);
FAKE(pa_format_info_copy);
FAKE(pa_format_info_free);
FAKE(pa_format_info_free_string_array);
FAKE(pa_format_info_from_sample_spec);
FAKE(pa_format_info_from_string);
FAKE(pa_format_info_get_prop_int);
FAKE(pa_format_info_get_prop_int_array);
FAKE(pa_format_info_get_prop_int_range);
FAKE(pa_format_info_get_prop_string);
FAKE(pa_format_info_get_prop_string_array);
FAKE(pa_format_info_get_prop_type);
FAKE(pa_format_info_is_compatible);
FAKE(pa_format_info_is_pcm);
FAKE(pa_format_info_new);
FAKE(pa_format_info_set_channel_map);
FAKE(pa_format_info_set_channels);
FAKE(pa_format_info_set_prop_int);
FAKE(pa_format_info_set_prop_int_array);
FAKE(pa_format_info_set_prop_int_range);
FAKE(pa_format_info_set_prop_string);
FAKE(pa_format_info_set_prop_string_array);
FAKE(pa_format_info_set_rate);
FAKE(pa_format_info_set_sample_format);
FAKE(pa_format_info_snprint);
FAKE(pa_format_info_to_sample_spec);
FAKE(pa_format_info_valid);
FAKE(pa_format_to_alsa);
FAKE(pa_frame_size);
FAKE(pa_get_binary_name);
FAKE(pa_get_fqdn);
FAKE(pa_get_home_dir);
FAKE(pa_get_host_name);
FAKE(pa_get_library_version);
FAKE(pa_get_user_name);
FAKE(pa_gettimeofday);
FAKE(pa_locale_to_utf8);
FAKE(pa_log_level_meta);
FAKE(pa_mainloop_api_once);
FAKE(pa_mainloop_api_once_impl);
FAKE(pa_mainloop_dispatch);
FAKE(pa_mainloop_get_retval);
FAKE(pa_mainloop_iterate);
FAKE(pa_mainloop_poll);
FAKE(pa_mainloop_prepare);
FAKE(pa_mainloop_quit);
FAKE(pa_mainloop_run);
FAKE(pa_mainloop_wakeup);
FAKE(pa_msleep);
FAKE(pa_open_cloexec);
FAKE(pa_operation_cancel);
FAKE(pa_operation_done);
FAKE(pa_operation_get_state);
FAKE(pa_operation_launch);
FAKE(pa_operation_new);
FAKE(pa_operation_ref);
FAKE(pa_operation_set_state_callback);
FAKE(pa_operation_unref);
FAKE(pa_parse_sample_format);
FAKE(pa_path_get_filename);
FAKE(pa_proplist_clear);
FAKE(pa_proplist_contains);
FAKE(pa_proplist_copy);
FAKE(pa_proplist_equal);
FAKE(pa_proplist_from_string);
FAKE(pa_proplist_get);
FAKE(pa_proplist_gets);
FAKE(pa_proplist_isempty);
FAKE(pa_proplist_iterate);
FAKE(pa_proplist_key_valid);
FAKE(pa_proplist_setf);
FAKE(pa_proplist_setp);
FAKE(pa_proplist_size);
FAKE(pa_proplist_to_string);
FAKE(pa_proplist_to_string_sep);
FAKE(pa_proplist_unset);
FAKE(pa_proplist_unset_many);
FAKE(pa_proplist_update);
FAKE(pa_rtclock_now);
FAKE(pa_sample_format_from_string);
FAKE(pa_sample_format_is_be);
FAKE(pa_sample_format_is_le);
FAKE(pa_sample_format_to_string);
FAKE(pa_sample_format_valid);
FAKE(pa_sample_rate_valid);
FAKE(pa_sample_size);
FAKE(pa_sample_size_of_format);
FAKE(pa_sample_spec_equal);
FAKE(pa_sample_spec_init);
FAKE(pa_sample_spec_snprint);
FAKE(pa_signal_done);
FAKE(pa_signal_free);
FAKE(pa_signal_init);
FAKE(pa_signal_new);
FAKE(pa_signal_set_destroy);
FAKE(pa_stream_begin_write);
FAKE(pa_stream_cancel_write);
FAKE(pa_stream_connect_playback);
FAKE(pa_stream_connect_record);
FAKE(pa_stream_connect_upload);
FAKE(pa_stream_cork);
FAKE(pa_stream_cork_impl);
FAKE(pa_stream_disconnect);
FAKE(pa_stream_drain);
FAKE(pa_stream_drain_impl);
FAKE(pa_stream_drop);
FAKE(pa_stream_finish_upload);
FAKE(pa_stream_flush);
FAKE(pa_stream_flush_impl);
FAKE(pa_stream_get_buffer_attr);
FAKE(pa_stream_get_channel_map);
FAKE(pa_stream_get_context);
FAKE(pa_stream_get_device_index);
FAKE(pa_stream_get_device_name);
FAKE(pa_stream_get_format_info);
FAKE(pa_stream_get_index);
FAKE(pa_stream_get_latency);
FAKE(pa_stream_get_monitor_stream);
FAKE(pa_stream_get_sample_spec);
FAKE(pa_stream_get_state);
FAKE(pa_stream_get_time);
FAKE(pa_stream_get_timing_info);
FAKE(pa_stream_get_underflow_index);
FAKE(pa_stream_is_corked);
FAKE(pa_stream_is_suspended);
FAKE(pa_stream_new);
FAKE(pa_stream_new_extended);
FAKE(pa_stream_new_with_proplist);
FAKE(pa_stream_peek);
FAKE(pa_stream_prebuf);
FAKE(pa_stream_proplist_remove);
FAKE(pa_stream_proplist_update);
FAKE(pa_stream_readable_size);
FAKE(pa_stream_ref);
FAKE(pa_stream_set_buffer_attr);
FAKE(pa_stream_set_buffer_attr_callback);
FAKE(pa_stream_set_event_callback);
FAKE(pa_stream_set_latency_update_callback);
FAKE(pa_stream_set_monitor_stream);
FAKE(pa_stream_set_moved_callback);
FAKE(pa_stream_set_name);
FAKE(pa_stream_set_name_impl);
FAKE(pa_stream_set_overflow_callback);
FAKE(pa_stream_set_read_callback);
FAKE(pa_stream_set_started_callback);
FAKE(pa_stream_set_state_callback);
FAKE(pa_stream_set_suspended_callback);
FAKE(pa_stream_set_underflow_callback);
FAKE(pa_stream_set_write_callback);
FAKE(pa_stream_trigger);
FAKE(pa_stream_trigger_impl);
FAKE(pa_stream_unref);
FAKE(pa_stream_update_sample_rate);
FAKE(pa_stream_update_timing_info);
FAKE(pa_stream_update_timing_info_impl);
FAKE(pa_stream_writable_size);
FAKE(pa_stream_write);
FAKE(pa_strerror);
FAKE(pa_sw_cvolume_divide);
FAKE(pa_sw_cvolume_divide_scalar);
FAKE(pa_sw_cvolume_multiply);
FAKE(pa_sw_cvolume_multiply_scalar);
FAKE(pa_sw_cvolume_snprint_dB);
FAKE(pa_sw_volume_divide);
FAKE(pa_sw_volume_from_dB);
FAKE(pa_sw_volume_from_linear);
FAKE(pa_sw_volume_multiply);
FAKE(pa_sw_volume_snprint_dB);
FAKE(pa_sw_volume_to_dB);
FAKE(pa_sw_volume_to_linear);
FAKE(pa_threaded_mainloop_accept);
FAKE(pa_threaded_mainloop_free);
FAKE(pa_threaded_mainloop_get_retval);
FAKE(pa_threaded_mainloop_in_thread);
FAKE(pa_threaded_mainloop_set_name);
FAKE(pa_threaded_mainloop_signal);
FAKE(pa_threaded_mainloop_stop);
FAKE(pa_threaded_mainloop_wait);
FAKE(pa_timeval_add);
FAKE(pa_timeval_age);
FAKE(pa_timeval_cmp);
FAKE(pa_timeval_diff);
FAKE(pa_timeval_load);
FAKE(pa_timeval_store);
FAKE(pa_timeval_sub);
FAKE(pa_usec_to_bytes);
FAKE(pa_utf8_filter);
FAKE(pa_utf8_to_locale);
FAKE(pa_utf8_valid);
FAKE(pa_volume_snprint);
FAKE(pa_volume_snprint_verbose);
FAKE(pa_xmalloc0);
FAKE(pa_xmemdup);
FAKE(pa_xrealloc);
FAKE(pa_xstrdup);
FAKE(pa_xstrndup);

void* pa_mainloop_new() {
  return NULL;
}

void* pa_threaded_mainloop_new() {
  return NULL;
}

void* pa_mainloop_get_api(void* m) {
  return NULL;
}

void pa_mainloop_set_poll_func(void* m, void* poll_func, void* userdata) {
  // do nothing
}

void pa_mainloop_free(void* m) {
  // do nothing
}

int pa_sample_spec_valid() {
  return 0;
}

void* pa_context_new(void* mainloop, const char* name) {
  return NULL;
}

int pa_context_connect(void* c, const char* server, int flags, const void* api) {
  return -1;
}

void pa_context_unref(void* c) {
  // do nothing
}

void* pa_xmalloc(size_t l) {
  return NULL;
}

void pa_xfree(void* p) {
  // do nothing
}

int pa_threaded_mainloop_start(void* mainloop)
{
    return -1;
}
void pa_threaded_mainloop_lock(void* mainloop)
{
    // do nothing
}
void* pa_threaded_mainloop_get_api()
{
    return NULL;
}
void* pa_proplist_new(void)
{
    return NULL;
}
int pa_proplist_set(void* proplist, const char* key,const void* data, size_t nbytes)
{
    return -1;
}
int pa_proplist_sets(void* proplist, const char* key, const char* value)
{
    return -1;
}
void* pa_context_new_with_proplist(void* mainloop,const char* name, const void* proplist)
{
    return NULL;
}
void pa_proplist_free(void* proplist)
{
    // do nothing
}
void pa_context_set_state_callback(void* c, void* cb, void* userdata)
{
    //do nothing
}
int pa_context_errno(const void* c)
{
    return -1;
}
void pa_threaded_mainloop_unlock (void* mainloop)
{
    // do nothing
}
