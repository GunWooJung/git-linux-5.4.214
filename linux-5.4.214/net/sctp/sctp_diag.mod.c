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
	{ 0xa0554d18, "release_sock" },
	{ 0x72154914, "sctp_transport_lookup_process" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe7274f85, "inet_diag_unregister" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa5f77258, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0xfbabba5d, "inet_diag_msg_common_fill" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b77fb69, "sock_diag_check_cookie" },
	{ 0xf1dca5b6, "sock_diag_save_cookie" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x16ec5836, "inet_diag_register" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x9a28a4ce, "sctp_transport_traverse_process" },
	{ 0x24cc0c43, "sctp_get_sctp_info" },
	{ 0x6808207, "sctp_for_each_endpoint" },
	{ 0x2e58bb1c, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "B42865FE4D5B9B3A7AFFD31");
