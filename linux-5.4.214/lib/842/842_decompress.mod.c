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
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x4df02057, "crc32_be" },
	{ 0xa101eb19, "debugfs_create_atomic_t" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A18943211D39E304A8536BA");
