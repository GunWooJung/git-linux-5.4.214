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
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa1b7f476, "iio_device_attach_buffer" },
	{ 0x5cdf37eb, "devm_iio_kfifo_allocate" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("spi:sca3000_d01");
MODULE_ALIAS("spi:sca3000_e02");
MODULE_ALIAS("spi:sca3000_e04");
MODULE_ALIAS("spi:sca3000_e05");

MODULE_INFO(srcversion, "CF6C465B88B41A3D0B84D90");
