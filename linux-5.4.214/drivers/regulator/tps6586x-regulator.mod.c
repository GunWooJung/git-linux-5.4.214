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
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x28a9b82a, "regulator_get_voltage_sel_regmap" },
	{ 0x983bdc74, "regulator_map_voltage_ascend" },
	{ 0x9c2e6db9, "regulator_list_voltage_table" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x403fd606, "tps6586x_write" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x19cf6e93, "tps6586x_clr_bits" },
	{ 0x1a418fa2, "tps6586x_set_bits" },
	{ 0x209bc106, "tps6586x_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x84dedbde, "tps6586x_get_version" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "907F5DCE5398BF370406046");
