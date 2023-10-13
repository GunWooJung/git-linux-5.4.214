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
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x983bdc74, "regulator_map_voltage_ascend" },
	{ 0x9c2e6db9, "regulator_list_voltage_table" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5a4370c, "regulator_set_voltage_sel_regmap" },
	{ 0x28a9b82a, "regulator_get_voltage_sel_regmap" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tps65023");
MODULE_ALIAS("i2c:tps65021");
MODULE_ALIAS("i2c:tps65020");
MODULE_ALIAS("of:N*T*Cti,tps65020");
MODULE_ALIAS("of:N*T*Cti,tps65020C*");
MODULE_ALIAS("of:N*T*Cti,tps65021");
MODULE_ALIAS("of:N*T*Cti,tps65021C*");
MODULE_ALIAS("of:N*T*Cti,tps65023");
MODULE_ALIAS("of:N*T*Cti,tps65023C*");

MODULE_INFO(srcversion, "76D0BF41C62B7A8CAA3D3A1");
