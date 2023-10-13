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
	{ 0x2d25fadb, "devm_snd_soc_register_card" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0xbc563377, "snd_soc_dai_set_pll" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x99aef328, "snd_jack_set_key" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdcc0751, "snd_soc_dai_set_sysclk" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0x91161071, "nau8824_enable_jack_detect" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0x94a7fd48, "snd_soc_dai_set_tdm_slot" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-soc-nau8824,snd-pcm");


MODULE_INFO(srcversion, "12D09031DF0D1FF556889D0");
