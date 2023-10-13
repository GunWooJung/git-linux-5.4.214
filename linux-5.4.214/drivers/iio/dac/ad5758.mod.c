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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x50a90e8d, "bsearch" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cadi,ad5758");
MODULE_ALIAS("of:N*T*Cadi,ad5758C*");
MODULE_ALIAS("spi:ad5758");

MODULE_INFO(srcversion, "0F9A7DC4056CC4386440896");
