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
	{ 0x5b225d80, "snd_hda_gen_parse_auto_config" },
	{ 0xdf69306b, "snd_hda_mixer_amp_tlv" },
	{ 0x3e2490f6, "snd_hda_gen_build_pcms" },
	{ 0xac2986ef, "snd_hda_jack_unsol_event" },
	{ 0x57e3579e, "snd_hda_mixer_amp_volume_get" },
	{ 0x37fd3f71, "snd_hda_gen_init" },
	{ 0xec9c9b7f, "snd_hda_parse_pin_defcfg" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xd32025b9, "snd_hda_gen_add_kctl" },
	{ 0x9c821b4e, "snd_hda_codec_get_pincfg" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0xd93c4e58, "snd_hda_gen_spec_init" },
	{ 0x743aae75, "snd_hda_mixer_amp_volume_info" },
	{ 0x6db41cd4, "snd_hda_gen_build_controls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec");

MODULE_ALIAS("hdaudio:v13F68888r*a01*");
MODULE_ALIAS("hdaudio:v13F69880r*a01*");
MODULE_ALIAS("hdaudio:v434D4980r*a01*");

MODULE_INFO(srcversion, "144507900D8D18ED56A1341");
