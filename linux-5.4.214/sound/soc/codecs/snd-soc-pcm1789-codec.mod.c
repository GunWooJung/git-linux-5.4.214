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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x6e943f12, "snd_soc_put_volsw_range" },
	{ 0x9a8979bc, "snd_soc_info_volsw_range" },
	{ 0x122b5584, "snd_soc_get_volsw_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "822E096A509F0C821126CE0");
