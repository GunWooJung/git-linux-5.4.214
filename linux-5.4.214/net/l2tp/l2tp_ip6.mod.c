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
	{ 0x534c584e, "compat_ipv6_getsockopt" },
	{ 0x96a7a02, "compat_ipv6_setsockopt" },
	{ 0x4e4d74ee, "ipv6_getsockopt" },
	{ 0xa1bccad3, "ipv6_setsockopt" },
	{ 0x95b3f8e5, "l2tp_ioctl" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0xe2ed5a88, "sock_common_recvmsg" },
	{ 0x266286df, "inet_sendmsg" },
	{ 0x47fd8ea4, "compat_sock_common_getsockopt" },
	{ 0xe7a438eb, "compat_sock_common_setsockopt" },
	{ 0x12fb0a44, "sock_common_getsockopt" },
	{ 0x12b6c202, "sock_common_setsockopt" },
	{ 0x56ba4867, "inet_shutdown" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0x726d32e4, "inet6_ioctl" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x6672abf5, "inet_dgram_connect" },
	{ 0x9f011a6, "inet6_bind" },
	{ 0xb80e4c72, "inet6_release" },
	{ 0x4be7801, "inet6_del_protocol" },
	{ 0x754bd81d, "inet6_unregister_protosw" },
	{ 0x85e5139f, "inet6_register_protosw" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xda9fc6bc, "inet6_add_protocol" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xc5850110, "printk" },
	{ 0x285c8d25, "sk_free" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0x286f9614, "l2tp_session_free" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x112574c9, "__sk_receive_skb" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x12bca595, "l2tp_recv_common" },
	{ 0x54af3093, "l2tp_session_get" },
	{ 0xc31b31cb, "__fl6_sock_lookup" },
	{ 0x8ba1c4f2, "ip6_dst_hoplimit" },
	{ 0x9da85643, "ip6_push_pending_frames" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x73588f11, "dst_release" },
	{ 0x566a288, "ip6_append_data" },
	{ 0xee2ea6b, "ip_generic_getfrag" },
	{ 0x7e60ec8f, "ip6_dst_lookup_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0xae79820, "fl6_merge_options" },
	{ 0x668e9709, "ip6_datagram_send_ctl" },
	{ 0x3b6ae85b, "sk_common_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbfe6032, "ipv6_chk_addr" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84096bf7, "__sock_recv_wifi_status" },
	{ 0x96983dee, "ip6_datagram_recv_ctl" },
	{ 0x535669eb, "__sock_recv_timestamp" },
	{ 0xed22ac89, "ipv6_recv_error" },
	{ 0x3d81c1b, "skb_free_datagram" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2304c138, "__ip6_datagram_connect" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x5ff2394d, "__udp_disconnect" },
	{ 0x26503657, "inet6_destroy_sock" },
	{ 0x6282005, "l2tp_tunnel_delete" },
	{ 0xa0554d18, "release_sock" },
	{ 0x6da232ec, "ip6_flush_pending_frames" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "87E9F8FF3304C0772C4FA38");
