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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad2s1200");
MODULE_ALIAS("spi:ad2s1205");
MODULE_ALIAS("of:N*T*Cadi,ad2s1200");
MODULE_ALIAS("of:N*T*Cadi,ad2s1200C*");
MODULE_ALIAS("of:N*T*Cadi,ad2s1205");
MODULE_ALIAS("of:N*T*Cadi,ad2s1205C*");

MODULE_INFO(srcversion, "105204E4138F993115FE594");
