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
	{ 0x2363ac1d, "iio_show_mount_matrix" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x85b13bd9, "iio_read_mount_matrix" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x73195445, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975C*");
MODULE_ALIAS("of:N*T*Cak8975");
MODULE_ALIAS("of:N*T*Cak8975C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963C*");
MODULE_ALIAS("of:N*T*Cak8963");
MODULE_ALIAS("of:N*T*Cak8963C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911C*");
MODULE_ALIAS("of:N*T*Cak09911");
MODULE_ALIAS("of:N*T*Cak09911C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912C*");
MODULE_ALIAS("of:N*T*Cak09912");
MODULE_ALIAS("of:N*T*Cak09912C*");
MODULE_ALIAS("i2c:ak8975");
MODULE_ALIAS("i2c:ak8963");
MODULE_ALIAS("i2c:AK8963");
MODULE_ALIAS("i2c:ak09911");
MODULE_ALIAS("i2c:ak09912");
MODULE_ALIAS("acpi*:AK8975:*");
MODULE_ALIAS("acpi*:AK8963:*");
MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("acpi*:AK009911:*");
MODULE_ALIAS("acpi*:AK09911:*");
MODULE_ALIAS("acpi*:AKM9911:*");
MODULE_ALIAS("acpi*:AK09912:*");

MODULE_INFO(srcversion, "9308BAB6B692F1771091551");
