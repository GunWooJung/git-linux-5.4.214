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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x586583b8, "spi_sync" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cadi,ad9833");
MODULE_ALIAS("of:N*T*Cadi,ad9833C*");
MODULE_ALIAS("of:N*T*Cadi,ad9834");
MODULE_ALIAS("of:N*T*Cadi,ad9834C*");
MODULE_ALIAS("of:N*T*Cadi,ad9837");
MODULE_ALIAS("of:N*T*Cadi,ad9837C*");
MODULE_ALIAS("of:N*T*Cadi,ad9838");
MODULE_ALIAS("of:N*T*Cadi,ad9838C*");
MODULE_ALIAS("spi:ad9833");
MODULE_ALIAS("spi:ad9834");
MODULE_ALIAS("spi:ad9837");
MODULE_ALIAS("spi:ad9838");

MODULE_INFO(srcversion, "FEC1AF04AB4A493EDDCFBAE");
