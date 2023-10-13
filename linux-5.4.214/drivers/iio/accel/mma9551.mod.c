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
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd38e0687, "desc_to_gpio" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8f30595b, "mma9551_read_version" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x41ef446c, "mma9551_read_accel_scale" },
	{ 0xd70bb4cf, "mma9551_read_accel_chan" },
	{ 0xaf0d36c, "mma9551_read_status_byte" },
	{ 0xa89dd629, "mma9551_gpio_config" },
	{ 0x6a305273, "mma9551_set_power_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa21ed6b2, "mma9551_read_config_byte" },
	{ 0x6b2f883f, "mma9551_update_config_bits" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbcd7fe96, "mma9551_sleep" },
	{ 0x99e7db9d, "mma9551_set_device_state" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,mma9551_core");

MODULE_ALIAS("i2c:mma9551");
MODULE_ALIAS("acpi*:MMA9551:*");

MODULE_INFO(srcversion, "DD851F923FAB79035C38AC6");
