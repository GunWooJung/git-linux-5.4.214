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
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x3c967a55, "iio_map_array_register" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x377a9732, "i2c_smbus_read_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xbbf7bb10, "iio_map_array_unregister" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:max1361");
MODULE_ALIAS("i2c:max1362");
MODULE_ALIAS("i2c:max1363");
MODULE_ALIAS("i2c:max1364");
MODULE_ALIAS("i2c:max1036");
MODULE_ALIAS("i2c:max1037");
MODULE_ALIAS("i2c:max1038");
MODULE_ALIAS("i2c:max1039");
MODULE_ALIAS("i2c:max1136");
MODULE_ALIAS("i2c:max1137");
MODULE_ALIAS("i2c:max1138");
MODULE_ALIAS("i2c:max1139");
MODULE_ALIAS("i2c:max1236");
MODULE_ALIAS("i2c:max1237");
MODULE_ALIAS("i2c:max1238");
MODULE_ALIAS("i2c:max1239");
MODULE_ALIAS("i2c:max11600");
MODULE_ALIAS("i2c:max11601");
MODULE_ALIAS("i2c:max11602");
MODULE_ALIAS("i2c:max11603");
MODULE_ALIAS("i2c:max11604");
MODULE_ALIAS("i2c:max11605");
MODULE_ALIAS("i2c:max11606");
MODULE_ALIAS("i2c:max11607");
MODULE_ALIAS("i2c:max11608");
MODULE_ALIAS("i2c:max11609");
MODULE_ALIAS("i2c:max11610");
MODULE_ALIAS("i2c:max11611");
MODULE_ALIAS("i2c:max11612");
MODULE_ALIAS("i2c:max11613");
MODULE_ALIAS("i2c:max11614");
MODULE_ALIAS("i2c:max11615");
MODULE_ALIAS("i2c:max11616");
MODULE_ALIAS("i2c:max11617");
MODULE_ALIAS("i2c:max11644");
MODULE_ALIAS("i2c:max11645");
MODULE_ALIAS("i2c:max11646");
MODULE_ALIAS("i2c:max11647");

MODULE_INFO(srcversion, "F910536855FF4F5263FD330");
