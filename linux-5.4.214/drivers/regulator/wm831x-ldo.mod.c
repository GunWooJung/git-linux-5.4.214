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
	{ 0xde8d189f, "regulator_get_bypass_regmap" },
	{ 0x964c0add, "regulator_set_bypass_regmap" },
	{ 0x3afce6cc, "regulator_list_voltage_linear_range" },
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x28a9b82a, "regulator_get_voltage_sel_regmap" },
	{ 0x5a4370c, "regulator_set_voltage_sel_regmap" },
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0xd831eb6, "platform_unregister_drivers" },
	{ 0xcb0993be, "__platform_register_drivers" },
	{ 0x56310925, "regulator_mode_to_status" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0x72ae6d75, "regulator_map_voltage_linear_range" },
	{ 0x7312a4ba, "regulator_unlock" },
	{ 0x1668d144, "regulator_notifier_call_chain" },
	{ 0x8c703d3e, "regulator_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x48f8f3e6, "wm831x_reg_read" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0xea009af7, "wm831x_set_bits" },
	{ 0x686953b7, "regulator_map_voltage_linear" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "77AE852BB2E5B769662A8C8");
