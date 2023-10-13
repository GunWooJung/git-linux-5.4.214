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
	{ 0x28a9b82a, "regulator_get_voltage_sel_regmap" },
	{ 0x5a4370c, "regulator_set_voltage_sel_regmap" },
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x904a8908, "regmap_write" },
	{ 0x7312a4ba, "regulator_unlock" },
	{ 0x1668d144, "regulator_notifier_call_chain" },
	{ 0x8c703d3e, "regulator_lock" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pv88080");
MODULE_ALIAS("i2c:pv88080-aa");
MODULE_ALIAS("i2c:pv88080-ba");

MODULE_INFO(srcversion, "248E3B4A2CA14493666C61B");
