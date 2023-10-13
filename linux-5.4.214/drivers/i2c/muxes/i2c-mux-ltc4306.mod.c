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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37e68967, "i2c_mux_add_adapter" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0xe1b1c080, "regmap_get_device" },
	{ 0x904a8908, "regmap_write" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x79b1c1fa, "i2c_mux_alloc" },
	{ 0x61853e9a, "device_property_present" },
	{ 0x13b801d3, "i2c_match_id" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x2b98a5bc, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Clltc,ltc4305");
MODULE_ALIAS("of:N*T*Clltc,ltc4305C*");
MODULE_ALIAS("of:N*T*Clltc,ltc4306");
MODULE_ALIAS("of:N*T*Clltc,ltc4306C*");
MODULE_ALIAS("i2c:ltc4305");
MODULE_ALIAS("i2c:ltc4306");

MODULE_INFO(srcversion, "9858DE9A41FD8F55F27C7D5");
