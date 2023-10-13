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
	{ 0x72ae6d75, "regulator_map_voltage_linear_range" },
	{ 0x3afce6cc, "regulator_list_voltage_linear_range" },
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0xde8d189f, "regulator_get_bypass_regmap" },
	{ 0x964c0add, "regulator_set_bypass_regmap" },
	{ 0x6fedf854, "regulator_set_voltage_time_sel" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x28a9b82a, "regulator_get_voltage_sel_regmap" },
	{ 0x5a4370c, "regulator_set_voltage_sel_regmap" },
	{ 0x686953b7, "regulator_map_voltage_linear" },
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x7968104b, "palmas_ext_control_req_config" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x904a8908, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,palmas-pmic");
MODULE_ALIAS("of:N*T*Cti,palmas-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6035-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6036-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6036-pmicC*");
MODULE_ALIAS("of:N*T*Cti,twl6037-pmic");
MODULE_ALIAS("of:N*T*Cti,twl6037-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65913-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65913-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65914-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65914-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps80036-pmic");
MODULE_ALIAS("of:N*T*Cti,tps80036-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps659038-pmic");
MODULE_ALIAS("of:N*T*Cti,tps659038-pmicC*");
MODULE_ALIAS("of:N*T*Cti,tps65917-pmic");
MODULE_ALIAS("of:N*T*Cti,tps65917-pmicC*");

MODULE_INFO(srcversion, "30BD7CA8532CD9C1BA336B4");
