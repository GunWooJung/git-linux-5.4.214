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
	{ 0xf9a482f9, "msleep" },
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x7002e851, "snd_hdac_regmap_write_raw" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0x9e003a68, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x79800ff6, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0xd99efd37, "snd_hda_codec_setup_stream" },
	{ 0xd2e718d2, "snd_hda_add_new_ctls" },
};

MODULE_INFO(depends, "snd-hda-core,snd-pcm,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v163C3055r*a01*");
MODULE_ALIAS("hdaudio:v163C3155r*a01*");
MODULE_ALIAS("hdaudio:v11C13026r*a01*");
MODULE_ALIAS("hdaudio:v11C13055r*a01*");
MODULE_ALIAS("hdaudio:v11C13155r*a01*");
MODULE_ALIAS("hdaudio:v10573055r*a01*");
MODULE_ALIAS("hdaudio:v10573057r*a01*");
MODULE_ALIAS("hdaudio:v10573155r*a01*");
MODULE_ALIAS("hdaudio:v11063288r*a01*");
MODULE_ALIAS("hdaudio:v15433155r*a01*");
MODULE_ALIAS("hdaudio:v18540018r*a01*");

MODULE_INFO(srcversion, "78498F572A10AACDC3E316F");
