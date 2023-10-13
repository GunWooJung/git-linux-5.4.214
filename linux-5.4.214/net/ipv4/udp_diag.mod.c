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
	{ 0x4c8a62c4, "sock_diag_destroy" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x5b3c69c6, "__udp6_lib_lookup" },
	{ 0x285c8d25, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x8b77fb69, "sock_diag_check_cookie" },
	{ 0xac3865b7, "__udp4_lib_lookup" },
	{ 0x95a67b07, "udp_table" },
	{ 0xd4d1983c, "udplite_table" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8bf29a42, "inet_sk_diag_fill" },
	{ 0xbaea9ed4, "inet_diag_bc_sk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2e58bb1c, "netlink_net_capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "CBCB2C4EEA3B4E509A5A91C");
