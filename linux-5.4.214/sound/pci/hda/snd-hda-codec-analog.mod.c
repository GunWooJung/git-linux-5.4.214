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
	{ 0xbf6adbab, "snd_hda_gen_free" },
	{ 0x4855a34c, "snd_hda_mixer_amp_volume_put" },
	{ 0x25784f57, "snd_hda_enum_helper_info" },
	{ 0x5b225d80, "snd_hda_gen_parse_auto_config" },
	{ 0x56787db5, "snd_hda_apply_fixup" },
	{ 0xd1ef8e7c, "snd_hda_pick_fixup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xdf69306b, "snd_hda_mixer_amp_tlv" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3e2490f6, "snd_hda_gen_build_pcms" },
	{ 0x1cc5db5b, "snd_hda_override_conn_list" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0xaa0fb9d1, "snd_hda_get_path_from_idx" },
	{ 0x57e3579e, "snd_hda_mixer_amp_volume_get" },
	{ 0x7002e851, "snd_hdac_regmap_write_raw" },
	{ 0x148dda99, "snd_hda_get_path_idx" },
	{ 0x97287397, "snd_hda_gen_check_power_status" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4253fb42, "snd_hda_activate_path" },
	{ 0x37fd3f71, "snd_hda_gen_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x6e138455, "snd_hda_override_amp_caps" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe7785653, "snd_hda_ctl_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0xba974a25, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xd32025b9, "snd_hda_gen_add_kctl" },
	{ 0x3638257c, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0x58c3e115, "snd_hda_mixer_amp_switch_info" },
	{ 0xd93c4e58, "snd_hda_gen_spec_init" },
	{ 0x743aae75, "snd_hda_mixer_amp_volume_info" },
	{ 0x6db41cd4, "snd_hda_gen_build_controls" },
	{ 0xf57b1971, "snd_hda_get_connections" },
	{ 0xe2efa06d, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd");

MODULE_ALIAS("hdaudio:v11D4184Ar*a01*");
MODULE_ALIAS("hdaudio:v11D41882r*a01*");
MODULE_ALIAS("hdaudio:v11D41883r*a01*");
MODULE_ALIAS("hdaudio:v11D41884r*a01*");
MODULE_ALIAS("hdaudio:v11D4194Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4194Br*a01*");
MODULE_ALIAS("hdaudio:v11D41981r*a01*");
MODULE_ALIAS("hdaudio:v11D41983r*a01*");
MODULE_ALIAS("hdaudio:v11D41984r*a01*");
MODULE_ALIAS("hdaudio:v11D41986r*a01*");
MODULE_ALIAS("hdaudio:v11D41988r*a01*");
MODULE_ALIAS("hdaudio:v11D4198Br*a01*");
MODULE_ALIAS("hdaudio:v11D4882Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Br*a01*");

MODULE_INFO(srcversion, "56A7ADA51C13EEBA3F90E17");
