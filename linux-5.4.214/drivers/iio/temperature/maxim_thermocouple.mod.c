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
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cmaxim,max6675");
MODULE_ALIAS("of:N*T*Cmaxim,max6675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855");
MODULE_ALIAS("of:N*T*Cmaxim,max31855C*");
MODULE_ALIAS("spi:max6675");
MODULE_ALIAS("spi:max31855");

MODULE_INFO(srcversion, "A4DDD6D0361DF29861671DA");
