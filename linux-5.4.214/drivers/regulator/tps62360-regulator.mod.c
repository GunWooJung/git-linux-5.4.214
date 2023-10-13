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
	{ 0x6fedf854, "regulator_set_voltage_time_sel" },
	{ 0x686953b7, "regulator_map_voltage_linear" },
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x904a8908, "regmap_write" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x727b6403, "gpiod_set_raw_value_cansleep" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tps62360");
MODULE_ALIAS("i2c:tps62361");
MODULE_ALIAS("i2c:tps62362");
MODULE_ALIAS("i2c:tps62363");

MODULE_INFO(srcversion, "3CDBFEC520733D678E4C707");
