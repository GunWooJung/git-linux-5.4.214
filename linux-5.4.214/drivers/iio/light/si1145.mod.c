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
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6f395e65, "__module_get" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3db6d27, "__devm_iio_trigger_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x73195445, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:si1132");
MODULE_ALIAS("i2c:si1141");
MODULE_ALIAS("i2c:si1142");
MODULE_ALIAS("i2c:si1143");
MODULE_ALIAS("i2c:si1145");
MODULE_ALIAS("i2c:si1146");
MODULE_ALIAS("i2c:si1147");

MODULE_INFO(srcversion, "286EF6470A5AFC3BDA22EA0");
