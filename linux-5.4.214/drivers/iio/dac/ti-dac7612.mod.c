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
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cti,dac7612");
MODULE_ALIAS("of:N*T*Cti,dac7612C*");
MODULE_ALIAS("of:N*T*Cti,dac7612u");
MODULE_ALIAS("of:N*T*Cti,dac7612uC*");
MODULE_ALIAS("of:N*T*Cti,dac7612ub");
MODULE_ALIAS("of:N*T*Cti,dac7612ubC*");
MODULE_ALIAS("spi:ti-dac7612");

MODULE_INFO(srcversion, "A380C8726B0C6A08C8F8AF8");
