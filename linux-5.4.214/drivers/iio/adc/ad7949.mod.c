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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x586583b8, "spi_sync" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad7949");
MODULE_ALIAS("spi:ad7682");
MODULE_ALIAS("spi:ad7689");
MODULE_ALIAS("of:N*T*Cadi,ad7949");
MODULE_ALIAS("of:N*T*Cadi,ad7949C*");
MODULE_ALIAS("of:N*T*Cadi,ad7682");
MODULE_ALIAS("of:N*T*Cadi,ad7682C*");
MODULE_ALIAS("of:N*T*Cadi,ad7689");
MODULE_ALIAS("of:N*T*Cadi,ad7689C*");

MODULE_INFO(srcversion, "967BFF88D85C52770A1981A");