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
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x533bfe53, "iio_trigger_poll" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:kmx611021");
MODULE_ALIAS("acpi*:KMX61021:*");

MODULE_INFO(srcversion, "062E4CEE766E85DB6256AE9");
