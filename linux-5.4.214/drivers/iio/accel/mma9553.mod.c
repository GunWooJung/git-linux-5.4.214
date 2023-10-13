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
	{ 0x580e0b5c, "iio_enum_available_read" },
	{ 0xea6bc49f, "iio_enum_write" },
	{ 0x4802d671, "iio_enum_read" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x41ef446c, "mma9551_read_accel_scale" },
	{ 0xd70bb4cf, "mma9551_read_accel_chan" },
	{ 0xf8d6bc01, "mma9551_read_status_word" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc952d126, "mma9551_write_config_words" },
	{ 0xe8328f66, "mma9551_app_reset" },
	{ 0x357a167e, "mma9551_read_config_words" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x8f30595b, "mma9551_read_version" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xa89dd629, "mma9551_gpio_config" },
	{ 0x6a305273, "mma9551_set_power_state" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9915add7, "mma9551_read_config_word" },
	{ 0xa8cf6c3a, "mma9551_write_config_word" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8170b781, "mma9551_read_status_words" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbcd7fe96, "mma9551_sleep" },
	{ 0x99e7db9d, "mma9551_set_device_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,mma9551_core");

MODULE_ALIAS("i2c:mma9553");
MODULE_ALIAS("acpi*:MMA9553:*");

MODULE_INFO(srcversion, "95D8EE926814BC1BBF9F52C");
