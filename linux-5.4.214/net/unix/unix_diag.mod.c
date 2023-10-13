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
	{ 0x1d77b0f8, "unix_socket_table" },
	{ 0xad0f2b6c, "unix_table_lock" },
	{ 0x10825ed5, "sock_diag_put_meminfo" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x18350ef9, "sock_diag_unregister" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xcf431496, "sock_diag_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2b44511c, "unix_peer_get" },
	{ 0x285c8d25, "sk_free" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x255b977, "unix_inq_len" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8b77fb69, "sock_diag_check_cookie" },
	{ 0xd36dc41a, "unix_outq_len" },
	{ 0xf1dca5b6, "sock_diag_save_cookie" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x473afe6b, "sock_i_uid" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2F3B627F3E6AEC1D71F9A2D");
