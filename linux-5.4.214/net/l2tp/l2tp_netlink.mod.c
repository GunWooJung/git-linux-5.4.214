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
	{ 0x286f9614, "l2tp_session_free" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xfd8db240, "l2tp_tunnel_get_nth" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xcea37297, "genl_register_family" },
	{ 0xb60adaef, "l2tp_tunnel_get_session" },
	{ 0x754d539c, "strlen" },
	{ 0xeee76be1, "l2tp_tunnel_free" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7b07862f, "l2tp_tunnel_register" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x952fb42e, "l2tp_tunnel_create" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2efff130, "l2tp_tunnel_get" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xae37d3ad, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x45b216e0, "l2tp_session_get_by_ifname" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaaec5b39, "genlmsg_multicast_allns" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x6282005, "l2tp_tunnel_delete" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb02b6cc8, "l2tp_session_set_header_len" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "0C4AD0ACD0CEB9DC5BCAD84");
