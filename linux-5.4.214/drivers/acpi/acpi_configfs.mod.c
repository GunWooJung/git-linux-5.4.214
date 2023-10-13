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
	{ 0x4148f95, "configfs_unregister_default_group" },
	{ 0x28aee8ad, "configfs_unregister_subsystem" },
	{ 0xc16f2ce5, "configfs_register_default_group" },
	{ 0x89a604c7, "configfs_register_subsystem" },
	{ 0x664f4f51, "config_group_init" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xedff4be5, "acpi_load_table" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf2899c3c, "security_locked_down" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe85f2123, "acpi_tb_unload_table" },
	{ 0x4d2c7133, "acpi_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2CF1D99989E879F6944AEE0");
