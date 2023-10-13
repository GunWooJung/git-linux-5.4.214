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
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x2a456f5f, "simple_attr_read" },
	{ 0xc5850110, "printk" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0x703de441, "simple_attr_open" },
	{ 0xa615d9a, "simple_attr_write" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0AFFA6CE11953C4313137F7");
