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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd5fa2366, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbf6adbab, "snd_hda_gen_free" },
	{ 0x4855a34c, "snd_hda_mixer_amp_volume_put" },
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x25784f57, "snd_hda_enum_helper_info" },
	{ 0x5b225d80, "snd_hda_gen_parse_auto_config" },
	{ 0x294496fe, "snd_hda_add_verbs" },
	{ 0x56787db5, "snd_hda_apply_fixup" },
	{ 0xd1ef8e7c, "snd_hda_pick_fixup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdf69306b, "snd_hda_mixer_amp_tlv" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3e2490f6, "snd_hda_gen_build_pcms" },
	{ 0x1cc5db5b, "snd_hda_override_conn_list" },
	{ 0x2515e7a2, "snd_hda_check_amp_list_power" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0x220573de, "snd_hda_codec_set_pincfg" },
	{ 0x64acec2c, "snd_hda_mixer_amp_switch_put" },
	{ 0x57e3579e, "snd_hda_mixer_amp_volume_get" },
	{ 0x2fb65903, "snd_hda_codec_set_name" },
	{ 0x7b1a18fe, "snd_hda_mixer_amp_switch_get" },
	{ 0x37fd3f71, "snd_hda_gen_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x6e138455, "snd_hda_override_amp_caps" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x90a4eb07, "snd_hda_get_bool_hint" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0xba974a25, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xd32025b9, "snd_hda_gen_add_kctl" },
	{ 0x3638257c, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x9c821b4e, "snd_hda_codec_get_pincfg" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0x58c3e115, "snd_hda_mixer_amp_switch_info" },
	{ 0xd93c4e58, "snd_hda_gen_spec_init" },
	{ 0xeed3403f, "snd_hdac_regmap_read_raw" },
	{ 0x743aae75, "snd_hda_mixer_amp_volume_info" },
	{ 0x6db41cd4, "snd_hda_gen_build_controls" },
	{ 0xf57b1971, "snd_hda_get_connections" },
	{ 0xe2efa06d, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");

MODULE_INFO(srcversion, "252FE315CEB1516ADBEB70C");
