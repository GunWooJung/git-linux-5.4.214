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
	{ 0x71f79600, "regulator_is_enabled_regmap" },
	{ 0x28a9b82a, "regulator_get_voltage_sel_regmap" },
	{ 0x5a4370c, "regulator_set_voltage_sel_regmap" },
	{ 0x72ae6d75, "regulator_map_voltage_linear_range" },
	{ 0x3afce6cc, "regulator_list_voltage_linear_range" },
	{ 0xd831eb6, "platform_unregister_drivers" },
	{ 0xcb0993be, "__platform_register_drivers" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x82e04cf9, "snd_soc_component_force_enable_pin" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xe7cad814, "snd_soc_component_disable_pin" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x181dce80, "regulator_enable_regmap" },
	{ 0x3cdfa699, "regulator_disable_regmap" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x964c0add, "regulator_set_bypass_regmap" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "76A5C5B621FCA409518FAA5");
