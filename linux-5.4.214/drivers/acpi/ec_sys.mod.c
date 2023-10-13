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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x32ee9868, "simple_open" },
	{ 0xc2448345, "default_llseek" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x3f7ad254, "debugfs_create_bool" },
	{ 0xe8830b36, "debugfs_create_x32" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x5679d6c4, "first_ec" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5790D5653CA4C20C11941C2");
