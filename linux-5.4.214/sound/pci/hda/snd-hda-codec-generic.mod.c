#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd5fa2366, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8feefff2, "snd_hda_codec_get_pin_target" },
	{ 0x349cba85, "strchr" },
	{ 0x6ae19d29, "snd_hda_multi_out_dig_prepare" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0x4855a34c, "snd_hda_mixer_amp_volume_put" },
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x8517a79d, "snd_hda_get_default_vref" },
	{ 0x25784f57, "snd_hda_enum_helper_info" },
	{ 0x56787db5, "snd_hda_apply_fixup" },
	{ 0x23c2a09c, "snd_hda_sync_vmaster_hook" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbf05f6de, "snd_hda_codec_amp_stereo" },
	{ 0xdf7b11d1, "__snd_hda_add_vmaster" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xdf69306b, "snd_hda_mixer_amp_tlv" },
	{ 0xdced41f, "snd_hda_jack_add_kctls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x2515e7a2, "snd_hda_check_amp_list_power" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe118de5d, "snd_pcm_2_1_chmaps" },
	{ 0x64acec2c, "snd_hda_mixer_amp_switch_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4b03e00c, "snd_hda_jack_detect_enable_callback" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4210a9c2, "snd_hda_check_amp_caps" },
	{ 0x57e3579e, "snd_hda_mixer_amp_volume_get" },
	{ 0x7002e851, "snd_hdac_regmap_write_raw" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe9b383ed, "_snd_hda_set_pin_ctl" },
	{ 0x816e5e48, "snd_hda_attach_beep_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xed0118aa, "snd_hda_codec_set_pin_target" },
	{ 0x7b1a18fe, "snd_hda_mixer_amp_switch_get" },
	{ 0x144a4b, "snd_hda_codec_set_power_to_all" },
	{ 0xd6444b53, "snd_hda_get_conn_list" },
	{ 0x3433a111, "snd_ctl_boolean_stereo_info" },
	{ 0xdd4b9149, "snd_hda_multi_out_analog_prepare" },
	{ 0x5cdbc244, "snd_hda_multi_out_analog_cleanup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x19d728be, "is_jack_detectable" },
	{ 0x4a755966, "snd_hda_create_spdif_in_ctls" },
	{ 0xb40a9b50, "snd_hda_codec_amp_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xe3a53f4c, "sort" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x55bf6f0a, "snd_hda_get_int_hint" },
	{ 0xa5eff077, "snd_hda_jack_detect_state" },
	{ 0xbf2fd44e, "snd_hda_jack_tbl_get" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xf89f16df, "snd_hda_find_mixer_ctl" },
	{ 0x4aa01f97, "snd_hda_create_spdif_share_sw" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x90a4eb07, "snd_hda_get_bool_hint" },
	{ 0x7da7b947, "snd_hda_multi_out_analog_open" },
	{ 0xa6e424a2, "snd_hda_get_conn_index" },
	{ 0x3345f3c3, "snd_hda_multi_out_dig_close" },
	{ 0x219fbb32, "snd_hda_create_dig_out_ctls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0xad3bb81d, "snd_hda_correct_pin_ctl" },
	{ 0x935ea4d9, "snd_hda_add_imux_item" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8bef1f9a, "snd_hda_get_pin_label" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc7ef5f67, "snd_hda_multi_out_dig_cleanup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe51a2f2a, "snd_ctl_sync_vmaster" },
	{ 0xf401a50e, "__snd_hda_codec_cleanup_stream" },
	{ 0x79800ff6, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d8ba337, "snd_hda_add_vmaster_hook" },
	{ 0x69acdf38, "memcpy" },
	{ 0x167a1bf6, "snd_hda_multi_out_dig_open" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x96848186, "scnprintf" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x9c821b4e, "snd_hda_codec_get_pincfg" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0x58c3e115, "snd_hda_mixer_amp_switch_info" },
	{ 0xd99efd37, "snd_hda_codec_setup_stream" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x743aae75, "snd_hda_mixer_amp_volume_info" },
	{ 0x998f0b05, "query_amp_caps" },
	{ 0xe1fa7947, "hda_get_autocfg_input_label" },
	{ 0x93b7261c, "snd_hda_set_vmaster_tlv" },
	{ 0xc85085fa, "snd_hda_codec_amp_init_stereo" },
	{ 0xf57b1971, "snd_hda_get_connections" },
	{ 0xd2e718d2, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x35f887f, "snd_hda_codec_amp_update" },
	{ 0x50b92fee, "snd_hda_apply_verbs" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v00000201r*a01*");

MODULE_INFO(srcversion, "325D706A03C13DAB44263E1");
