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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x239cc474, "wilco_ec_mailbox" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0x703de441, "simple_attr_open" },
};

MODULE_INFO(depends, "wilco_ec");


MODULE_INFO(srcversion, "272F3B523CCDE1D55CB0862");
