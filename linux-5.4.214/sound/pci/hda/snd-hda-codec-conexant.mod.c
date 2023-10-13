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
	{ 0x3124fd69, "snd_hda_gen_fixup_micmute_led" },
	{ 0xbf6adbab, "snd_hda_gen_free" },
	{ 0x8feefff2, "snd_hda_codec_get_pin_target" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0x4855a34c, "snd_hda_mixer_amp_volume_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5b225d80, "snd_hda_gen_parse_auto_config" },
	{ 0x294496fe, "snd_hda_add_verbs" },
	{ 0x56787db5, "snd_hda_apply_fixup" },
	{ 0xd1ef8e7c, "snd_hda_pick_fixup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdf69306b, "snd_hda_mixer_amp_tlv" },
	{ 0x3e2490f6, "snd_hda_gen_build_pcms" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x92db27df, "snd_hda_gen_update_outputs" },
	{ 0xaa0fb9d1, "snd_hda_get_path_from_idx" },
	{ 0x57e3579e, "snd_hda_mixer_amp_volume_get" },
	{ 0x7002e851, "snd_hdac_regmap_write_raw" },
	{ 0x97287397, "snd_hda_gen_check_power_status" },
	{ 0xed0118aa, "snd_hda_codec_set_pin_target" },
	{ 0x9e003a68, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xf222cdf9, "snd_hda_gen_add_micmute_led" },
	{ 0x4253fb42, "snd_hda_activate_path" },
	{ 0x37fd3f71, "snd_hda_gen_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xd0644dea, "snd_hda_jack_set_gating_jack" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x6e138455, "snd_hda_override_amp_caps" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0xa5eff077, "snd_hda_jack_detect_state" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0xba974a25, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x50696adb, "snd_hda_gen_reboot_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd32025b9, "snd_hda_gen_add_kctl" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x3638257c, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0xe48d1742, "snd_hda_add_new_path" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0x58c3e115, "snd_hda_mixer_amp_switch_info" },
	{ 0xd93c4e58, "snd_hda_gen_spec_init" },
	{ 0xeed3403f, "snd_hdac_regmap_read_raw" },
	{ 0x743aae75, "snd_hda_mixer_amp_volume_info" },
	{ 0x998f0b05, "query_amp_caps" },
	{ 0x737efe07, "snd_hda_gen_mic_autoswitch" },
	{ 0x6db41cd4, "snd_hda_gen_build_controls" },
	{ 0xd2e718d2, "snd_hda_add_new_ctls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v14F11F86r*a01*");
MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F120D0r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");

MODULE_INFO(srcversion, "1E3BAF21056803965073208");
