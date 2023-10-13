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
	{ 0x4c7d529f, "regulator_get_current_limit_regmap" },
	{ 0x15a4fa1a, "regulator_set_current_limit_regmap" },
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x686953b7, "regulator_map_voltage_linear" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0x7312a4ba, "regulator_unlock" },
	{ 0x1668d144, "regulator_notifier_call_chain" },
	{ 0x8c703d3e, "regulator_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D95DA2472B9CBC9D70494AB");
