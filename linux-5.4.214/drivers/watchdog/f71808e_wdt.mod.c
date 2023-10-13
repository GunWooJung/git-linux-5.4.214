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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x35775925, "misc_deregister" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6f395e65, "__module_get" },
	{ 0x6932b09e, "stream_open" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D7CAEA43084929BAC35B2EA");
