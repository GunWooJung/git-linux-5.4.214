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
	{ 0x5b225d80, "snd_hda_gen_parse_auto_config" },
	{ 0x3e2490f6, "snd_hda_gen_build_pcms" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0x37fd3f71, "snd_hda_gen_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0xd93c4e58, "snd_hda_gen_spec_init" },
	{ 0x6db41cd4, "snd_hda_gen_build_controls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec");

MODULE_ALIAS("hdaudio:v1102000Ar*a01*");
MODULE_ALIAS("hdaudio:v1102000Br*a01*");
MODULE_ALIAS("hdaudio:v1102000Dr*a01*");

MODULE_INFO(srcversion, "ED621811EE4DF602D7166F5");
