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
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x85b13bd9, "iio_read_mount_matrix" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2363ac1d, "iio_show_mount_matrix" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x96848186, "scnprintf" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x904a8908, "regmap_write" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "3F38F59FA5440CBBB0B034B");
