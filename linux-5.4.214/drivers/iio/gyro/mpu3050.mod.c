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
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0x37e68967, "i2c_mux_add_adapter" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x2b98a5bc, "i2c_mux_del_adapters" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xaae840bf, "iio_trigger_poll_chained" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x79b1c1fa, "i2c_mux_alloc" },
	{ 0x85b13bd9, "iio_read_mount_matrix" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa2a28733, "iio_trigger_using_own" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x2363ac1d, "iio_show_mount_matrix" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x904a8908, "regmap_write" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,i2c-mux,industrialio");

MODULE_ALIAS("of:N*T*Cinvensense,mpu3050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu3050C*");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050C*");
MODULE_ALIAS("i2c:mpu3050");

MODULE_INFO(srcversion, "125D4B5AD44BA0044CAAEED");
