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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2f1d34b, "snd_soc_dai_set_bclk_ratio" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0x2f1df46f, "snd_soc_component_set_jack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdcc0751, "snd_soc_dai_set_sysclk" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0x53c11fe6, "snd_soc_dai_set_fmt" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0x94a7fd48, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x8fcb13eb, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "79969FBE30FA84B31E92E1A");
