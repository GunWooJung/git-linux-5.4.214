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
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xed31ad46, "devm_extcon_register_notifier" },
	{ 0x23f5b3f1, "devm_extcon_register_notifier_all" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0x904a8908, "regmap_write" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x8b37e187, "extcon_get_extcon_dev" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8d9c9375, "extcon_get_state" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp288_charger");

MODULE_INFO(srcversion, "E76C3CB53B05D03865E5842");
