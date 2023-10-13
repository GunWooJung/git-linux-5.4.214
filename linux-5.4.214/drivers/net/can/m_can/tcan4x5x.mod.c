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
	{ 0x9a4c322, "_dev_err" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x25dce5c9, "m_can_class_register" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0xe21d630c, "spi_setup" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xcfb7b2f0, "m_can_class_get_clocks" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xebd3fc82, "m_can_class_allocate_dev" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x71a99371, "m_can_class_unregister" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x82c132d7, "m_can_init_ram" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x904a8908, "regmap_write" },
	{ 0x586583b8, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "m_can");

MODULE_ALIAS("spi:tcan4x5x");
MODULE_ALIAS("of:N*T*Cti,tcan4x5x");
MODULE_ALIAS("of:N*T*Cti,tcan4x5xC*");

MODULE_INFO(srcversion, "0F33DCB2C9FBBDB325F7A74");
