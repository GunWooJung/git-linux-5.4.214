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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6626afca, "down" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0xcf2a6966, "up" },
	{ 0xe9f610, "sensor_hub_device_open" },
	{ 0xa483a6ea, "sensor_hub_register_callback" },
	{ 0xe1870ab9, "sensor_hub_input_get_attribute_info" },
	{ 0xed3beeee, "hid_sensor_parse_common_attributes" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x917490b, "wait_for_completion_killable_timeout" },
	{ 0xbcae5d8b, "sensor_hub_input_attr_get_raw_value" },
	{ 0x2d704e25, "sensor_hub_remove_callback" },
	{ 0x86ed4057, "sensor_hub_device_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-hub,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-2000a0");

MODULE_INFO(srcversion, "A37FBDCC8787EEC8969008B");
