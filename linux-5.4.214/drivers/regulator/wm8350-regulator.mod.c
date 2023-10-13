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
	{ 0xddad2ee, "wm8350_reg_write" },
	{ 0x5a4370c, "regulator_set_voltage_sel_regmap" },
	{ 0x686953b7, "regulator_map_voltage_linear" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8c703d3e, "regulator_lock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x28a9b82a, "regulator_get_voltage_sel_regmap" },
	{ 0x515bbcca, "wm8350_set_bits" },
	{ 0x54077c21, "wm8350_clear_bits" },
	{ 0x1668d144, "regulator_notifier_call_chain" },
	{ 0x72ae6d75, "regulator_map_voltage_linear_range" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x3afce6cc, "regulator_list_voltage_linear_range" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c7d529f, "regulator_get_current_limit_regmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0x15a4fa1a, "regulator_set_current_limit_regmap" },
	{ 0x7312a4ba, "regulator_unlock" },
	{ 0x97906665, "wm8350_reg_read" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A0E3C484EA7E0115EC1B17E");
