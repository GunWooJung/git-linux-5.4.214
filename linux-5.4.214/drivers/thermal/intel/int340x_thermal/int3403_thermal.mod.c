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
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x970d5a4a, "thermal_cooling_device_register" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xd0309a07, "int340x_thermal_zone_add" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x71977c66, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xebdd1a34, "thermal_cooling_device_unregister" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd886ad76, "int340x_thermal_read_trips" },
	{ 0x797a0345, "thermal_zone_device_update" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3403:*");

MODULE_INFO(srcversion, "E39AA3B79E24225DE6C5F55");
