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
	{ 0x50877b9, "dmi_first_match" },
	{ 0x2d25fadb, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xbf53b83e, "ts3a227e_enable_jack_detect" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0x12fcfeeb, "snd_soc_jack_notifier_register" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdcc0751, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0x7f8658b5, "snd_soc_dapm_force_enable_pin" },
	{ 0xf30d78a0, "snd_soc_dapm_disable_pin" },
	{ 0x53c11fe6, "snd_soc_dai_set_fmt" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0x94a7fd48, "snd_soc_dai_set_tdm_slot" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xda2996d, "snd_soc_jack_add_gpiods" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-ts3a227e,snd-pcm");


MODULE_INFO(srcversion, "2FC62E3206678C2F0CE5A1B");
