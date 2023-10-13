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
	{ 0xd6d2c2e1, "st_sensors_set_dataready_irq" },
	{ 0x6dfb191, "st_sensors_power_enable" },
	{ 0xe7ce7096, "st_sensors_set_enable" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbef4963f, "st_sensors_deallocate_trigger" },
	{ 0x65132262, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0xeccecb66, "st_sensors_allocate_trigger" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xe2a6e16c, "st_sensors_validate_device" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0xc8be3c03, "st_sensors_power_disable" },
	{ 0x8e1bc534, "st_sensors_init_sensor" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xeff5b49, "st_sensors_debugfs_reg_access" },
	{ 0x86ba5235, "st_sensors_get_settings_index" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdc800daa, "st_sensors_set_odr" },
	{ 0x46c05797, "st_sensors_verify_id" },
	{ 0x220d5147, "st_sensors_read_info_raw" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,st_sensors,industrialio");


MODULE_INFO(srcversion, "F7E30F2AE67F0B3B5292EBC");
