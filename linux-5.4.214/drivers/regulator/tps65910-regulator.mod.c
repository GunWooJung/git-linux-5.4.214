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
	{ 0x3935475a, "regulator_map_voltage_iterate" },
	{ 0x9c2e6db9, "regulator_list_voltage_table" },
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x983bdc74, "regulator_map_voltage_ascend" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "208EE02369D37168C0EDFEF");
