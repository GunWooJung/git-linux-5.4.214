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
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4f8114c2, "iio_trigger_alloc" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x85b13bd9, "iio_read_mount_matrix" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x2363ac1d, "iio_show_mount_matrix" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0xe5c65a12, "iio_trigger_free" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");

MODULE_ALIAS("of:N*T*Cinvensense,itg3200");
MODULE_ALIAS("of:N*T*Cinvensense,itg3200C*");
MODULE_ALIAS("i2c:itg3200");

MODULE_INFO(srcversion, "726AC43E9B5B951ECF1A73B");
