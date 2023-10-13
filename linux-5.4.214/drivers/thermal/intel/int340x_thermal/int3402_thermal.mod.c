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
	{ 0x797a0345, "thermal_zone_device_update" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xd0309a07, "int340x_thermal_zone_add" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x71977c66, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3402:*");

MODULE_INFO(srcversion, "90930F7DB158CF74424DC5B");
