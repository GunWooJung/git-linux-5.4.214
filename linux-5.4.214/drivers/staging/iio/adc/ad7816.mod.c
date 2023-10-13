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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x586583b8, "spi_sync" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad7816");
MODULE_ALIAS("spi:ad7817");
MODULE_ALIAS("spi:ad7818");
MODULE_ALIAS("of:N*T*Cadi,ad7816");
MODULE_ALIAS("of:N*T*Cadi,ad7816C*");
MODULE_ALIAS("of:N*T*Cadi,ad7817");
MODULE_ALIAS("of:N*T*Cadi,ad7817C*");
MODULE_ALIAS("of:N*T*Cadi,ad7818");
MODULE_ALIAS("of:N*T*Cadi,ad7818C*");

MODULE_INFO(srcversion, "CA2CC14CD1311A6E179108E");
