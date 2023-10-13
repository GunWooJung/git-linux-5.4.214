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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:adjd_s311");

MODULE_INFO(srcversion, "C23A5D009C2FDF998CE7D7C");
