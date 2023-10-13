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
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x5b225d80, "snd_hda_gen_parse_auto_config" },
	{ 0x56787db5, "snd_hda_apply_fixup" },
	{ 0xd1ef8e7c, "snd_hda_pick_fixup" },
	{ 0x3e2490f6, "snd_hda_gen_build_pcms" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x220573de, "snd_hda_codec_set_pincfg" },
	{ 0x92db27df, "snd_hda_gen_update_outputs" },
	{ 0x4b03e00c, "snd_hda_jack_detect_enable_callback" },
	{ 0xe9b383ed, "_snd_hda_set_pin_ctl" },
	{ 0xa8fbc281, "snd_hda_gen_fix_pin_power" },
	{ 0x37fd3f71, "snd_hda_gen_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x6e138455, "snd_hda_override_amp_caps" },
	{ 0xa5eff077, "snd_hda_jack_detect_state" },
	{ 0xf89f16df, "snd_hda_find_mixer_ctl" },
	{ 0xcb975990, "snd_hda_sequence_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xd32025b9, "snd_hda_gen_add_kctl" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x9c821b4e, "snd_hda_codec_get_pincfg" },
	{ 0xa0398c54, "snd_hda_apply_pincfgs" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0xd93c4e58, "snd_hda_gen_spec_init" },
	{ 0x998f0b05, "query_amp_caps" },
	{ 0x6db41cd4, "snd_hda_gen_build_controls" },
	{ 0xe2efa06d, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-core,snd-hda-codec");

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");

MODULE_INFO(srcversion, "79646D7A8634E8EBA7C57FF");
