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
	{ 0xf3e8bce4, "ucsi_register_ppm" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xcd3e5c7c, "acpi_release_memory" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xf2f31c4a, "ucsi_notify" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x4df17642, "ucsi_unregister_ppm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "typec_ucsi");

MODULE_ALIAS("acpi*:PNP0CA0:*");

MODULE_INFO(srcversion, "83B45792F256C10D6F89896");
