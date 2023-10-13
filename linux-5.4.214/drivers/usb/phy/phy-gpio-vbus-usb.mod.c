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
	{ 0x9a4c322, "_dev_err" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x993534d9, "usb_add_phy" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xdda54c2c, "devm_gpio_request" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x316c15d8, "usb_gadget_vbus_connect" },
	{ 0x66949046, "usb_phy_set_event" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x7802343, "usb_gadget_vbus_disconnect" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x66d63c5e, "regulator_set_current_limit" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ec8eb49, "usb_remove_phy" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "0B79E3D1AC6DE76818CCD10");
