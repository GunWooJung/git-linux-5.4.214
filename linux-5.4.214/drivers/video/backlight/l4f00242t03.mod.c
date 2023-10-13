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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x68178abb, "devm_lcd_device_register" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x72f16fbc, "regulator_set_voltage" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lcd");


MODULE_INFO(srcversion, "35C2E03B65228BEB80DF4AD");
