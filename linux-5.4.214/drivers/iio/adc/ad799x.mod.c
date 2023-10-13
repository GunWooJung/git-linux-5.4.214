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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:ad7991");
MODULE_ALIAS("i2c:ad7995");
MODULE_ALIAS("i2c:ad7999");
MODULE_ALIAS("i2c:ad7992");
MODULE_ALIAS("i2c:ad7993");
MODULE_ALIAS("i2c:ad7994");
MODULE_ALIAS("i2c:ad7997");
MODULE_ALIAS("i2c:ad7998");

MODULE_INFO(srcversion, "26EE340306C98BDF122C6C4");
