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
	{ 0x59814a84, "dccp_statistics" },
	{ 0xea654516, "dccp_init_sock" },
	{ 0x7e54b886, "__kfree_skb" },
	{ 0x2ca2643a, "dccp_v4_do_rcv" },
	{ 0x971bc09e, "inet6_csk_update_pmtu" },
	{ 0x982752ec, "dccp_set_state" },
	{ 0x4e4d74ee, "ipv6_getsockopt" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8687d2c0, "inet_unhash" },
	{ 0x89c7d4a2, "inet_twsk_put" },
	{ 0x722630de, "dccp_hashinfo" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0xda9fc6bc, "inet6_add_protocol" },
	{ 0xe0a3a4b8, "inet6_lookup_listener" },
	{ 0x4403b4ac, "dccp_sendmsg" },
	{ 0xbe0d61fc, "ipv6_opt_accepted" },
	{ 0x534c584e, "compat_ipv6_getsockopt" },
	{ 0x6e7ca7b4, "sk_setup_caps" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0x148ec145, "dccp_ctl_make_reset" },
	{ 0x60a2ebef, "dccp_destroy_sock" },
	{ 0x8a2f386e, "dccp_make_response" },
	{ 0x8629086e, "sock_release" },
	{ 0x73588f11, "dst_release" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x220a324f, "dccp_rcv_established" },
	{ 0x39a8d1ac, "dccp_req_err" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0x8cdae2e7, "dccp_v4_conn_request" },
	{ 0xcd24a241, "inet_csk_prepare_forced_close" },
	{ 0x7e170c4e, "dccp_create_openreq_child" },
	{ 0xa4681ace, "ipv6_dup_options" },
	{ 0x8e356225, "dccp_check_req" },
	{ 0x266286df, "inet_sendmsg" },
	{ 0xb80e4c72, "inet6_release" },
	{ 0xae316c11, "icmpv6_err_convert" },
	{ 0x85e5139f, "inet6_register_protosw" },
	{ 0x23772dbe, "dccp_recvmsg" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x213cc040, "ip6_xmit" },
	{ 0x123ce7cb, "inet_sk_rebuild_header" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4b7f7948, "inet6_getname" },
	{ 0x69828cc9, "sock_rfree" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd75a144d, "inet6_csk_xmit" },
	{ 0xec9698aa, "dccp_ioctl" },
	{ 0xe7a438eb, "compat_sock_common_setsockopt" },
	{ 0x2581e63b, "dccp_setsockopt" },
	{ 0xe2ed5a88, "sock_common_recvmsg" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0x1269633, "dccp_child_process" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x47fd8ea4, "compat_sock_common_getsockopt" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xa5ed9517, "skb_checksum" },
	{ 0x7e60ec8f, "ip6_dst_lookup_flow" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xa4834d6e, "__inet6_lookup_established" },
	{ 0x444bcba6, "dccp_v4_request_recv_sock" },
	{ 0x70374f6e, "dccp_parse_options" },
	{ 0x7ba3bb9a, "compat_dccp_setsockopt" },
	{ 0xaae77402, "dccp_getsockopt" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x726d32e4, "inet6_ioctl" },
	{ 0xc5850110, "printk" },
	{ 0x3bee70d1, "inet6_csk_route_req" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x627f6bc1, "__ip_queue_xmit" },
	{ 0xd410a9df, "dccp_reqsk_init" },
	{ 0x1ef92859, "dccp_close" },
	{ 0x285c8d25, "sk_free" },
	{ 0x56ba4867, "inet_shutdown" },
	{ 0xc3b6a26c, "dccp_orphan_count" },
	{ 0x54355b02, "dccp_sync_mss" },
	{ 0x7d24680f, "inet6_hash_connect" },
	{ 0x6fe1b9e6, "inet_accept" },
	{ 0x2b1824c9, "inet6_hash" },
	{ 0x827ec56a, "inet_csk_reqsk_queue_drop_and_put" },
	{ 0x7141c64f, "sk_filter_trim_cap" },
	{ 0xb85f86fa, "inet_csk_get_port" },
	{ 0xa2624a42, "dccp_death_row" },
	{ 0xf932dee7, "inet_ctl_sock_create" },
	{ 0xcb27ce5a, "dccp_poll" },
	{ 0x112574c9, "__sk_receive_skb" },
	{ 0x79be1f9a, "proto_register" },
	{ 0x8d0c4d7c, "dccp_disconnect" },
	{ 0xd89a8d7b, "__sk_dst_check" },
	{ 0x12d64580, "dccp_done" },
	{ 0x57732438, "inet_twsk_purge" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb6909c0d, "inet_reqsk_alloc" },
	{ 0xa74fd74f, "dccp_v4_send_check" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xdd874651, "inet_stream_connect" },
	{ 0xc48b500c, "dccp_invalid_packet" },
	{ 0x4be7801, "inet6_del_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd5cc17e9, "inet_ehash_nolisten" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4cdd391d, "dccp_feat_list_purge" },
	{ 0x92f2a2fa, "dccp_syn_ack_timeout" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa1f9ac38, "inet_csk_reqsk_queue_hash_add" },
	{ 0x8dd775c5, "compat_dccp_getsockopt" },
	{ 0xa1bccad3, "ipv6_setsockopt" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x12b6c202, "sock_common_setsockopt" },
	{ 0xb5c9c4cf, "inet6_sk_rebuild_header" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0xea80dfe1, "security_req_classify_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1761617, "security_inet_conn_request" },
	{ 0x9bd78956, "inet_dccp_listen" },
	{ 0x547fc080, "__inet_inherit_port" },
	{ 0x12fb0a44, "sock_common_getsockopt" },
	{ 0xbe4eb6ed, "secure_dccpv6_sequence_number" },
	{ 0x754bd81d, "inet6_unregister_protosw" },
	{ 0xa4cb11e0, "inet_csk_accept" },
	{ 0x9f011a6, "inet6_bind" },
	{ 0x2cb86bed, "dccp_reqsk_send_ack" },
	{ 0xfb174b24, "dccp_rcv_state_process" },
	{ 0xad263612, "consume_skb" },
	{ 0x2f25e65e, "dccp_connect" },
	{ 0x8282415c, "dccp_shutdown" },
	{ 0xc31b31cb, "__fl6_sock_lookup" },
	{ 0x9c05c19, "dccp_v4_connect" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x1249adc9, "inet6_csk_addr2sockaddr" },
	{ 0x96a7a02, "compat_ipv6_setsockopt" },
	{ 0x26503657, "inet6_destroy_sock" },
};

MODULE_INFO(depends, "dccp,dccp_ipv4");


MODULE_INFO(srcversion, "836C2D8E3CA8EEF036CE938");