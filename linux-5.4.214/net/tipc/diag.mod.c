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
	{ 0x18350ef9, "sock_diag_unregister" },
	{ 0xcf431496, "sock_diag_register" },
	{ 0x9d7d7b4, "tipc_sk_fill_sock_diag" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0x3478036e, "tipc_dump_done" },
	{ 0xfe3673bf, "tipc_dump_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1dca5b6, "sock_diag_save_cookie" },
	{ 0x43cbb8a9, "tipc_nl_sk_walk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tipc");


MODULE_INFO(srcversion, "32C14C1555B35FB7AA2E946");
