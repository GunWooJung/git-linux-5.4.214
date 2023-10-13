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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d25fadb, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6f50bc, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0xbc563377, "snd_soc_dai_set_pll" },
	{ 0xc582d6, "da7219_aad_jack_det" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x99aef328, "snd_jack_set_key" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xdcc0751, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0xea74f232, "bt_uart_enable" },
	{ 0x61853e9a, "device_property_present" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-da7219,snd,acp_audio_dma");

MODULE_ALIAS("acpi*:AMD7219:*");

MODULE_INFO(srcversion, "A60419CD54A47300891482F");
