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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbf6adbab, "snd_hda_gen_free" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0x4855a34c, "snd_hda_mixer_amp_volume_put" },
	{ 0x90d44c62, "snd_hda_codec_eapd_power_filter" },
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x5b225d80, "snd_hda_gen_parse_auto_config" },
	{ 0x294496fe, "snd_hda_add_verbs" },
	{ 0x56787db5, "snd_hda_apply_fixup" },
	{ 0xd1ef8e7c, "snd_hda_pick_fixup" },
	{ 0x41da8306, "snd_hda_input_mux_put" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xdf69306b, "snd_hda_mixer_amp_tlv" },
	{ 0x3e2490f6, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x220573de, "snd_hda_codec_set_pincfg" },
	{ 0x64acec2c, "snd_hda_mixer_amp_switch_put" },
	{ 0x92db27df, "snd_hda_gen_update_outputs" },
	{ 0x4b03e00c, "snd_hda_jack_detect_enable_callback" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x57e3579e, "snd_hda_mixer_amp_volume_get" },
	{ 0x7002e851, "snd_hdac_regmap_write_raw" },
	{ 0xe9b383ed, "_snd_hda_set_pin_ctl" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa8fbc281, "snd_hda_gen_fix_pin_power" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x7b1a18fe, "snd_hda_mixer_amp_switch_get" },
	{ 0x9e003a68, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xf222cdf9, "snd_hda_gen_add_micmute_led" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x1d8901ae, "snd_hda_gen_path_power_filter" },
	{ 0x19d728be, "is_jack_detectable" },
	{ 0x37fd3f71, "snd_hda_gen_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x6e138455, "snd_hda_override_amp_caps" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x55bf6f0a, "snd_hda_get_int_hint" },
	{ 0xa5eff077, "snd_hda_jack_detect_state" },
	{ 0xbf2fd44e, "snd_hda_jack_tbl_get" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x90a4eb07, "snd_hda_get_bool_hint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0x935ea4d9, "snd_hda_add_imux_item" },
	{ 0xba974a25, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x695eade0, "snd_hda_enable_beep_device" },
	{ 0xd32025b9, "snd_hda_gen_add_kctl" },
	{ 0x3638257c, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x9c821b4e, "snd_hda_codec_get_pincfg" },
	{ 0xa0398c54, "snd_hda_apply_pincfgs" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0x58c3e115, "snd_hda_mixer_amp_switch_info" },
	{ 0x910f5995, "snd_hdac_power_down" },
	{ 0xd93c4e58, "snd_hda_gen_spec_init" },
	{ 0x743aae75, "snd_hda_mixer_amp_volume_info" },
	{ 0x998f0b05, "query_amp_caps" },
	{ 0xc85085fa, "snd_hda_codec_amp_init_stereo" },
	{ 0x6db41cd4, "snd_hda_gen_build_controls" },
	{ 0xf57b1971, "snd_hda_get_connections" },
	{ 0xe2efa06d, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v83847690r*a01*");
MODULE_ALIAS("hdaudio:v83847882r*a01*");
MODULE_ALIAS("hdaudio:v83847680r*a01*");
MODULE_ALIAS("hdaudio:v83847880r*a01*");
MODULE_ALIAS("hdaudio:v83847681r*a01*");
MODULE_ALIAS("hdaudio:v83847682r*a01*");
MODULE_ALIAS("hdaudio:v83847683r*a01*");
MODULE_ALIAS("hdaudio:v83847618r*a01*");
MODULE_ALIAS("hdaudio:v83847619r*a01*");
MODULE_ALIAS("hdaudio:v83847638r*a01*");
MODULE_ALIAS("hdaudio:v83847616r*a01*");
MODULE_ALIAS("hdaudio:v83847617r*a01*");
MODULE_ALIAS("hdaudio:v83847614r*a01*");
MODULE_ALIAS("hdaudio:v83847615r*a01*");
MODULE_ALIAS("hdaudio:v83847620r*a01*");
MODULE_ALIAS("hdaudio:v83847621r*a01*");
MODULE_ALIAS("hdaudio:v83847622r*a01*");
MODULE_ALIAS("hdaudio:v83847623r*a01*");
MODULE_ALIAS("hdaudio:v83847624r*a01*");
MODULE_ALIAS("hdaudio:v83847625r*a01*");
MODULE_ALIAS("hdaudio:v83847626r*a01*");
MODULE_ALIAS("hdaudio:v83847627r*a01*");
MODULE_ALIAS("hdaudio:v83847628r*a01*");
MODULE_ALIAS("hdaudio:v83847629r*a01*");
MODULE_ALIAS("hdaudio:v83847632r*a01*");
MODULE_ALIAS("hdaudio:v83847633r*a01*");
MODULE_ALIAS("hdaudio:v83847634r*a01*");
MODULE_ALIAS("hdaudio:v83847635r*a01*");
MODULE_ALIAS("hdaudio:v83847636r*a01*");
MODULE_ALIAS("hdaudio:v83847637r*a01*");
MODULE_ALIAS("hdaudio:v83847645r*a01*");
MODULE_ALIAS("hdaudio:v83847646r*a01*");
MODULE_ALIAS("hdaudio:v83847661r*a01*");
MODULE_ALIAS("hdaudio:v83847662r*a01*");
MODULE_ALIAS("hdaudio:v83847664r*a01*");
MODULE_ALIAS("hdaudio:v83847698r*a01*");
MODULE_ALIAS("hdaudio:v838476A0r*a01*");
MODULE_ALIAS("hdaudio:v838476A1r*a01*");
MODULE_ALIAS("hdaudio:v838476A2r*a01*");
MODULE_ALIAS("hdaudio:v838476A3r*a01*");
MODULE_ALIAS("hdaudio:v838476A4r*a01*");
MODULE_ALIAS("hdaudio:v838476A5r*a01*");
MODULE_ALIAS("hdaudio:v838476A6r*a01*");
MODULE_ALIAS("hdaudio:v838476A7r*a01*");
MODULE_ALIAS("hdaudio:v111D7603r*a01*");
MODULE_ALIAS("hdaudio:v111D7604r*a01*");
MODULE_ALIAS("hdaudio:v111D76D4r*a01*");
MODULE_ALIAS("hdaudio:v111D7605r*a01*");
MODULE_ALIAS("hdaudio:v111D76D5r*a01*");
MODULE_ALIAS("hdaudio:v111D76D1r*a01*");
MODULE_ALIAS("hdaudio:v111D76D9r*a01*");
MODULE_ALIAS("hdaudio:v111D7666r*a01*");
MODULE_ALIAS("hdaudio:v111D7667r*a01*");
MODULE_ALIAS("hdaudio:v111D7668r*a01*");
MODULE_ALIAS("hdaudio:v111D7669r*a01*");
MODULE_ALIAS("hdaudio:v111D7608r*a01*");
MODULE_ALIAS("hdaudio:v111D7674r*a01*");
MODULE_ALIAS("hdaudio:v111D7675r*a01*");
MODULE_ALIAS("hdaudio:v111D7676r*a01*");
MODULE_ALIAS("hdaudio:v111D7695r*a01*");
MODULE_ALIAS("hdaudio:v111D76B0r*a01*");
MODULE_ALIAS("hdaudio:v111D76B1r*a01*");
MODULE_ALIAS("hdaudio:v111D76B2r*a01*");
MODULE_ALIAS("hdaudio:v111D76B3r*a01*");
MODULE_ALIAS("hdaudio:v111D76B4r*a01*");
MODULE_ALIAS("hdaudio:v111D76B5r*a01*");
MODULE_ALIAS("hdaudio:v111D76B6r*a01*");
MODULE_ALIAS("hdaudio:v111D76B7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C0r*a01*");
MODULE_ALIAS("hdaudio:v111D76C1r*a01*");
MODULE_ALIAS("hdaudio:v111D76C2r*a01*");
MODULE_ALIAS("hdaudio:v111D76C3r*a01*");
MODULE_ALIAS("hdaudio:v111D76C4r*a01*");
MODULE_ALIAS("hdaudio:v111D76C5r*a01*");
MODULE_ALIAS("hdaudio:v111D76C6r*a01*");
MODULE_ALIAS("hdaudio:v111D76C7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C8r*a01*");
MODULE_ALIAS("hdaudio:v111D76C9r*a01*");
MODULE_ALIAS("hdaudio:v111D76CAr*a01*");
MODULE_ALIAS("hdaudio:v111D76CBr*a01*");
MODULE_ALIAS("hdaudio:v111D76CCr*a01*");
MODULE_ALIAS("hdaudio:v111D76CDr*a01*");
MODULE_ALIAS("hdaudio:v111D76CEr*a01*");
MODULE_ALIAS("hdaudio:v111D76DFr*a01*");
MODULE_ALIAS("hdaudio:v111D76E0r*a01*");
MODULE_ALIAS("hdaudio:v111D76E3r*a01*");
MODULE_ALIAS("hdaudio:v111D76E5r*a01*");
MODULE_ALIAS("hdaudio:v111D76E7r*a01*");
MODULE_ALIAS("hdaudio:v111D76E8r*a01*");
MODULE_ALIAS("hdaudio:v111D76E9r*a01*");
MODULE_ALIAS("hdaudio:v111D76EAr*a01*");
MODULE_ALIAS("hdaudio:v111D76EBr*a01*");
MODULE_ALIAS("hdaudio:v111D76ECr*a01*");
MODULE_ALIAS("hdaudio:v111D76EDr*a01*");
MODULE_ALIAS("hdaudio:v111D76EEr*a01*");
MODULE_ALIAS("hdaudio:v111D76EFr*a01*");
MODULE_ALIAS("hdaudio:v111D76F0r*a01*");
MODULE_ALIAS("hdaudio:v111D76F1r*a01*");
MODULE_ALIAS("hdaudio:v111D76F2r*a01*");
MODULE_ALIAS("hdaudio:v111D76F3r*a01*");

MODULE_INFO(srcversion, "1C7B7217C2BBB25AC6456DE");
