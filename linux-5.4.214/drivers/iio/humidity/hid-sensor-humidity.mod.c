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
	{ 0x279104f3, "hid_sensor_pm_ops" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xa483a6ea, "sensor_hub_register_callback" },
	{ 0xbd48cd4b, "hid_sensor_setup_trigger" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x7f7621ec, "hid_sensor_format_scale" },
	{ 0xe1870ab9, "sensor_hub_input_get_attribute_info" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0xed3beeee, "hid_sensor_parse_common_attributes" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xbcae5d8b, "sensor_hub_input_attr_get_raw_value" },
	{ 0x18117606, "hid_sensor_power_state" },
	{ 0xb6cff7bf, "hid_sensor_read_samp_freq_value" },
	{ 0x1a226a5e, "hid_sensor_read_raw_hyst_value" },
	{ 0xec4b3911, "hid_sensor_remove_trigger" },
	{ 0x2d704e25, "sensor_hub_remove_callback" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xcc42f3b7, "hid_sensor_write_samp_freq_value" },
	{ 0x74822173, "hid_sensor_write_raw_hyst_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-trigger,industrialio,hid-sensor-hub,industrialio-triggered-buffer,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-200032");

MODULE_INFO(srcversion, "55FF0C1686AE42A09E9CD10");
