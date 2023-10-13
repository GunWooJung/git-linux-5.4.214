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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2ec8eb49, "usb_remove_phy" },
	{ 0x815588a6, "clk_enable" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x37eca967, "usb_add_phy_dev" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0x66d63c5e, "regulator_set_current_limit" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cusb-nop-xceiv");
MODULE_ALIAS("of:N*T*Cusb-nop-xceivC*");

MODULE_INFO(srcversion, "B2F8D1F5892531D914EB60E");
