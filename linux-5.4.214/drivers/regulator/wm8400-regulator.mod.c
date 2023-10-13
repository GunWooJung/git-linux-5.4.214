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
	{ 0x5a4370c, "regulator_set_voltage_sel_regmap" },
	{ 0x686953b7, "regulator_map_voltage_linear" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xc27a2dd, "rdev_get_regmap" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x28a9b82a, "regulator_get_voltage_sel_regmap" },
	{ 0x72ae6d75, "regulator_map_voltage_linear_range" },
	{ 0x3afce6cc, "regulator_list_voltage_linear_range" },
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x15b8e28e, "platform_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xa7c8deb2, "devm_regulator_register" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8032FB0BF273F20A2EABFE1");
