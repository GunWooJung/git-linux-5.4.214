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
	{ 0xd111bb59, "_dev_info" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x349cba85, "strchr" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000E:*");

MODULE_INFO(srcversion, "36E2A90A5198727CA696FB1");
