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
	{ 0xb6f50bc, "snd_soc_pm_ops" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0xbc563377, "snd_soc_dai_set_pll" },
	{ 0x1fe9e267, "rt5645_set_jack_detect" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdcc0751, "snd_soc_dai_set_sysclk" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0xa99a62a3, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-rt5645");

MODULE_ALIAS("acpi*:AMDI1002:*");

MODULE_INFO(srcversion, "1603D57A51646C7EB39DE46");
