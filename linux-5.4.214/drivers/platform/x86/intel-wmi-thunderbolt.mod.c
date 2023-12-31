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
	{ 0x9f295ff6, "wmi_driver_unregister" },
	{ 0x8b4b3ac8, "__wmi_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");

MODULE_ALIAS("wmi:86CCFD48-205E-4A77-9C48-2021CBEDE341");

MODULE_INFO(srcversion, "41AAFA0862F8432DA59E19E");
