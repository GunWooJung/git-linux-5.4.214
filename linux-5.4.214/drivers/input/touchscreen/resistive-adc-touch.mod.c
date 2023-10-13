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
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x5c365c01, "iio_channel_get_all_cb" },
	{ 0x94a09154, "input_register_device" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x9c34b528, "devm_iio_channel_get_all" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x66c54ff1, "input_event" },
	{ 0x33e16627, "touchscreen_report_pos" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7a711aef, "iio_channel_start_all_cb" },
	{ 0x2a1fab3c, "iio_channel_stop_all_cb" },
	{ 0x267c0508, "iio_channel_release_all_cb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio-buffer-cb,industrialio");

MODULE_ALIAS("of:N*T*Cresistive-adc-touch");
MODULE_ALIAS("of:N*T*Cresistive-adc-touchC*");

MODULE_INFO(srcversion, "EF0C5003722401D9CD7B5F6");
