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
	{ 0xc8dbe1c6, "xt_unregister_target" },
	{ 0xa8ae0069, "xt_register_target" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc5850110, "printk" },
	{ 0xedca43ba, "nf_ct_netns_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x11f3e50e, "nf_ct_netns_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "7E85C6C8C8838F09C375723");
