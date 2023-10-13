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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x71fb24ae, "devm_request_any_context_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-charger");
MODULE_ALIAS("of:N*T*Cgpio-chargerC*");

MODULE_INFO(srcversion, "EFE8EB870F7178FE6D536A4");
