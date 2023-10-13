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
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2d55b5ef, "snd_soc_add_card_controls" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0x80a3f18, "device_match_name" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0xbc563377, "snd_soc_dai_set_pll" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x99aef328, "snd_jack_set_key" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0xe20a5553, "i2c_bus_type" },
	{ 0x2a23b10e, "device_add_properties" },
	{ 0x7add3d63, "bus_find_device" },
	{ 0xda1eea08, "snd_soc_dapm_ignore_suspend" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0x2f1df46f, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdcc0751, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x4546e7ab, "rt5640_sel_asrc_clk_src" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0x53c11fe6, "snd_soc_dai_set_fmt" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0x94a7fd48, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x6c5d2bcd, "snd_soc_acpi_find_package_from_hid" },
	{ 0x8fcb13eb, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-soc-rt5640,snd-pcm,snd-soc-acpi");


MODULE_INFO(srcversion, "636264F9F26D9B614ADBE1E");
