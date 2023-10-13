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
	{ 0xe7274f85, "inet_diag_unregister" },
	{ 0x16ec5836, "inet_diag_register" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x285c8d25, "sk_free" },
	{ 0x4c8a62c4, "sock_diag_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb5a892db, "__raw_v4_lookup" },
	{ 0x66068fb2, "__raw_v6_lookup" },
	{ 0xb510c250, "raw_v4_hashinfo" },
	{ 0x8bf29a42, "inet_sk_diag_fill" },
	{ 0xbaea9ed4, "inet_diag_bc_sk" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xed7c7b91, "raw_v6_hashinfo" },
	{ 0x2e58bb1c, "netlink_net_capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "4E5A931CEBE4664E5012A22");
