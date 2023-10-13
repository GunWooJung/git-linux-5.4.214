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
	{ 0x3124fd69, "snd_hda_gen_fixup_micmute_led" },
	{ 0xbf6adbab, "snd_hda_gen_free" },
	{ 0x8feefff2, "snd_hda_codec_get_pin_target" },
	{ 0x4855a34c, "snd_hda_mixer_amp_volume_put" },
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5b225d80, "snd_hda_gen_parse_auto_config" },
	{ 0x56787db5, "snd_hda_apply_fixup" },
	{ 0x294496fe, "snd_hda_add_verbs" },
	{ 0xd1ef8e7c, "snd_hda_pick_fixup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x470c8d8, "snd_pci_quirk_lookup" },
	{ 0xdf69306b, "snd_hda_mixer_amp_tlv" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3e2490f6, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x1cc5db5b, "snd_hda_override_conn_list" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x220573de, "snd_hda_codec_set_pincfg" },
	{ 0x64acec2c, "snd_hda_mixer_amp_switch_put" },
	{ 0x92db27df, "snd_hda_gen_update_outputs" },
	{ 0x4b03e00c, "snd_hda_jack_detect_enable_callback" },
	{ 0x66c54ff1, "input_event" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x57e3579e, "snd_hda_mixer_amp_volume_get" },
	{ 0x2fb65903, "snd_hda_codec_set_name" },
	{ 0x7002e851, "snd_hdac_regmap_write_raw" },
	{ 0xe9b383ed, "_snd_hda_set_pin_ctl" },
	{ 0x1f9d64f7, "snd_hda_gen_hp_automute" },
	{ 0x97287397, "snd_hda_gen_check_power_status" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xed0118aa, "snd_hda_codec_set_pin_target" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x7b1a18fe, "snd_hda_mixer_amp_switch_get" },
	{ 0xf222cdf9, "snd_hda_gen_add_micmute_led" },
	{ 0xc2939333, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1d8901ae, "snd_hda_gen_path_power_filter" },
	{ 0x19d728be, "is_jack_detectable" },
	{ 0x37fd3f71, "snd_hda_gen_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xd0644dea, "snd_hda_jack_set_gating_jack" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6e138455, "snd_hda_override_amp_caps" },
	{ 0xa5eff077, "snd_hda_jack_detect_state" },
	{ 0xf89f16df, "snd_hda_find_mixer_ctl" },
	{ 0xcb975990, "snd_hda_sequence_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x90a4eb07, "snd_hda_get_bool_hint" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x1956586d, "snd_hdac_override_parm" },
	{ 0x2cbb40ce, "snd_hda_pick_pin_fixup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0xba974a25, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x50696adb, "snd_hda_gen_reboot_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x88637fcb, "snd_hda_jack_add_kctl" },
	{ 0xd32025b9, "snd_hda_gen_add_kctl" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x3638257c, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x9c821b4e, "snd_hda_codec_get_pincfg" },
	{ 0xa0398c54, "snd_hda_apply_pincfgs" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0x58c3e115, "snd_hda_mixer_amp_switch_info" },
	{ 0xd93c4e58, "snd_hda_gen_spec_init" },
	{ 0x743aae75, "snd_hda_mixer_amp_volume_info" },
	{ 0x998f0b05, "query_amp_caps" },
	{ 0x6db41cd4, "snd_hda_gen_build_controls" },
	{ 0xb55a10a6, "snd_hdac_power_up_pm" },
	{ 0xe914e41e, "strcpy" },
	{ 0x50b92fee, "snd_hda_apply_verbs" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xe2efa06d, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v10EC0215r*a01*");
MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0222r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0230r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0236r*a01*");
MODULE_ALIAS("hdaudio:v10EC0245r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0257r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0287r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0289r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0299r*a01*");
MODULE_ALIAS("hdaudio:v10EC0300r*a01*");
MODULE_ALIAS("hdaudio:v10EC0623r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0711r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0897r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
MODULE_ALIAS("hdaudio:v10EC0B00r*a01*");
MODULE_ALIAS("hdaudio:v10EC1168r*a01*");
MODULE_ALIAS("hdaudio:v10EC1220r*a01*");
MODULE_ALIAS("hdaudio:v19E58326r*a01*");

MODULE_INFO(srcversion, "BD3247424471B6F112CEECC");
