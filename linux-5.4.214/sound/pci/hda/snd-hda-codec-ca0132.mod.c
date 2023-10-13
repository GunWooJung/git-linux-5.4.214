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
	{ 0x7b14d3b3, "snd_hdac_power_up" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5ff62b47, "snd_hda_codec_load_dsp_prepare" },
	{ 0x6ae19d29, "snd_hda_multi_out_dig_prepare" },
	{ 0x4855a34c, "snd_hda_mixer_amp_volume_put" },
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbf05f6de, "snd_hda_codec_amp_stereo" },
	{ 0x7880264c, "snd_hda_codec_load_dsp_trigger" },
	{ 0xdf7b11d1, "__snd_hda_add_vmaster" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x470c8d8, "snd_pci_quirk_lookup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdf69306b, "snd_hda_mixer_amp_tlv" },
	{ 0xdced41f, "snd_hda_jack_add_kctls" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x64acec2c, "snd_hda_mixer_amp_switch_put" },
	{ 0x4b03e00c, "snd_hda_jack_detect_enable_callback" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x57e3579e, "snd_hda_mixer_amp_volume_get" },
	{ 0x2fb65903, "snd_hda_codec_set_name" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xe9b383ed, "_snd_hda_set_pin_ctl" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7b1a18fe, "snd_hda_mixer_amp_switch_get" },
	{ 0xc2939333, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a755966, "snd_hda_create_spdif_in_ctls" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6e138455, "snd_hda_override_amp_caps" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xa5eff077, "snd_hda_jack_detect_state" },
	{ 0xbf2fd44e, "snd_hda_jack_tbl_get" },
	{ 0xcb975990, "snd_hda_sequence_write" },
	{ 0x4aa01f97, "snd_hda_create_spdif_share_sw" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe7785653, "snd_hda_ctl_add" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3345f3c3, "snd_hda_multi_out_dig_close" },
	{ 0x219fbb32, "snd_hda_create_dig_out_ctls" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x66f02131, "snd_hda_codec_update_widgets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc7ef5f67, "snd_hda_multi_out_dig_cleanup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf401a50e, "__snd_hda_codec_cleanup_stream" },
	{ 0x79800ff6, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x167a1bf6, "snd_hda_multi_out_dig_open" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x80500894, "request_firmware" },
	{ 0xa0398c54, "snd_hda_apply_pincfgs" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0x58c3e115, "snd_hda_mixer_amp_switch_info" },
	{ 0x72455018, "snd_pcm_add_chmap_ctls" },
	{ 0x910f5995, "snd_hdac_power_down" },
	{ 0xd99efd37, "snd_hda_codec_setup_stream" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xa7ef6a94, "snd_hda_codec_load_dsp_cleanup" },
	{ 0x743aae75, "snd_hda_mixer_amp_volume_info" },
	{ 0x7ca8138c, "snd_hda_jack_report_sync" },
	{ 0x93b7261c, "snd_hda_set_vmaster_tlv" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xb55a10a6, "snd_hdac_power_up_pm" },
	{ 0xd2e718d2, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x35f887f, "snd_hda_codec_amp_update" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,snd-pcm");

MODULE_ALIAS("hdaudio:v11020011r*a01*");

MODULE_INFO(srcversion, "BDF44BA86198378805B2659");
