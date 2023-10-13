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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdda54c2c, "devm_gpio_request" },
	{ 0x532a4e22, "regcache_sync" },
};

MODULE_INFO(depends, "snd-soc-core,snd");


MODULE_INFO(srcversion, "C449E6DCEBC4D03AAB30350");
