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
	{ 0xaf299230, "intel_lpss_resume" },
	{ 0x89efbfac, "intel_lpss_suspend" },
	{ 0xf160d90c, "intel_lpss_prepare" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x8f9d4599, "intel_lpss_probe" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x51cc6424, "intel_lpss_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel-lpss");

MODULE_ALIAS("acpi*:INT3440:*");
MODULE_ALIAS("acpi*:INT3441:*");
MODULE_ALIAS("acpi*:INT3442:*");
MODULE_ALIAS("acpi*:INT3443:*");
MODULE_ALIAS("acpi*:INT3444:*");
MODULE_ALIAS("acpi*:INT3445:*");
MODULE_ALIAS("acpi*:INT3446:*");
MODULE_ALIAS("acpi*:INT3447:*");
MODULE_ALIAS("acpi*:INT3448:*");
MODULE_ALIAS("acpi*:INT3449:*");
MODULE_ALIAS("acpi*:INT344A:*");
MODULE_ALIAS("acpi*:80860AAC:*");
MODULE_ALIAS("acpi*:80860ABC:*");
MODULE_ALIAS("acpi*:80860AC2:*");
MODULE_ALIAS("acpi*:80865AAC:*");
MODULE_ALIAS("acpi*:80865ABC:*");
MODULE_ALIAS("acpi*:80865AC2:*");

MODULE_INFO(srcversion, "507004F94DDE050F54B3C8A");
