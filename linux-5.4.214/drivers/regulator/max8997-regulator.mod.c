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
	{ 0x9c2e6db9, "regulator_list_voltage_table" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0xfc3092d6, "max8997_write_reg" },
	{ 0xdda54c2c, "devm_gpio_request" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x99899416, "max8997_update_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xea02a1d2, "max8997_read_reg" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max8997-pmic");

MODULE_INFO(srcversion, "C17009E626B4BA3C8A93832");
