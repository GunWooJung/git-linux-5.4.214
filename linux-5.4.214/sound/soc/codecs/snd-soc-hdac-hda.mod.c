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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x7b1f285e, "snd_hda_codec_prepare" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x6e28206b, "snd_hdac_ext_bus_get_link" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x431a121e, "snd_hda_codec_device_new" },
	{ 0xe464db0d, "snd_hdac_ext_bus_link_put" },
	{ 0xfc5a33b7, "snd_hda_codec_parse_pcms" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2fb65903, "snd_hda_codec_set_name" },
	{ 0xe472f119, "snd_hdac_ext_bus_link_get" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe753947, "snd_hda_codec_pcm_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x46762b4, "snd_hda_codec_cleanup" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8ac3f6af, "snd_hda_codec_build_controls" },
	{ 0x67a486ac, "snd_hdac_regmap_init" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-ext-core,snd-hda-core,snd-soc-core");


MODULE_INFO(srcversion, "9AC4E62671FEA3708D0FE16");
