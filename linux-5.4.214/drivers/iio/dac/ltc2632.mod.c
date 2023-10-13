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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Clltc,ltc2632-l12");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l12C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l10");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l10C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l8");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l8C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h12");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h12C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h10");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h10C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h8");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h8C*");
MODULE_ALIAS("spi:ltc2632-l12");
MODULE_ALIAS("spi:ltc2632-l10");
MODULE_ALIAS("spi:ltc2632-l8");
MODULE_ALIAS("spi:ltc2632-h12");
MODULE_ALIAS("spi:ltc2632-h10");
MODULE_ALIAS("spi:ltc2632-h8");

MODULE_INFO(srcversion, "9499609E22C66F89FAAACAA");
