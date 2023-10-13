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
	{ 0x9a4c322, "_dev_err" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xd1f10f52, "wmidev_block_query" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");

MODULE_ALIAS("wmi:05901221-D566-11D1-B2F0-00A0C9062910");

MODULE_INFO(srcversion, "5591CFE122023642DB4B1D0");
