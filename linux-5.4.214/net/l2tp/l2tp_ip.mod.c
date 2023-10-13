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
	{ 0x286f9614, "l2tp_session_free" },
	{ 0x95d29bc5, "ip_getsockopt" },
	{ 0xb729de16, "ip_setsockopt" },
	{ 0x6e7ca7b4, "sk_setup_caps" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12bca595, "l2tp_recv_common" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0x266286df, "inet_sendmsg" },
	{ 0x8e2de87c, "inet_del_protocol" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3b6ae85b, "sk_common_release" },
	{ 0xe7a438eb, "compat_sock_common_setsockopt" },
	{ 0x6672abf5, "inet_dgram_connect" },
	{ 0xe2ed5a88, "sock_common_recvmsg" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x47fd8ea4, "compat_sock_common_getsockopt" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xf5257973, "compat_ip_getsockopt" },
	{ 0x84096bf7, "__sock_recv_wifi_status" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0xa6756f58, "inet_addr_type" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0x627f6bc1, "__ip_queue_xmit" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x285c8d25, "sk_free" },
	{ 0x56ba4867, "inet_shutdown" },
	{ 0x778219ac, "inet_add_protocol" },
	{ 0x535669eb, "__sock_recv_timestamp" },
	{ 0xd146d04e, "inet_ioctl" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x112574c9, "__sk_receive_skb" },
	{ 0x6505a94b, "ip_cmsg_recv_offset" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xd89a8d7b, "__sk_dst_check" },
	{ 0x7e5a997a, "inet_release" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e32654b, "compat_ip_setsockopt" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x12b6c202, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x286f871b, "inet_register_protosw" },
	{ 0x5ff2394d, "__udp_disconnect" },
	{ 0x6282005, "l2tp_tunnel_delete" },
	{ 0x59b6826e, "inet_bind" },
	{ 0x12fb0a44, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x236827cb, "__ip4_datagram_connect" },
	{ 0x22f164ce, "sock_wmalloc" },
	{ 0x54af3093, "l2tp_session_get" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xa2d47966, "inet_unregister_protosw" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3d81c1b, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "2A6F1C47095F0CB6065A320");
