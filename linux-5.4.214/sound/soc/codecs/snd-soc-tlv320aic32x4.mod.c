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
	{ 0x1912be44, "clk_hw_register_clkdev" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x4c12b82d, "devm_clk_register" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0x8be86773, "dev_get_regmap" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x862dfa7d, "devm_clk_bulk_get" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "45326D9424CCB3CCCFFDE2B");
