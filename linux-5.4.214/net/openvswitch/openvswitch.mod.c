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
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9193d81d, "nf_ct_tmpl_alloc" },
	{ 0xa445900, "__skb_vlan_pop" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc2ae5086, "kmem_cache_alloc_node" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0x6888ba47, "nf_conntrack_in" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0xe170eaa8, "skb_mpls_push" },
	{ 0x53b954a2, "up_read" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0xa1713526, "pskb_trim_rcsum_slow" },
	{ 0xe428c6a2, "netlink_has_listeners" },
	{ 0xe014893c, "nf_ct_tmpl_free" },
	{ 0xcea37297, "genl_register_family" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x72b619a9, "dev_disable_lro" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0xddc59624, "nf_ct_nat_ext_add" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9542f060, "ip_do_fragment" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0x3444304f, "nf_ct_get_tuplepr" },
	{ 0xf2e8b2bd, "peernet2id_alloc" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe8b21f69, "metadata_dst_alloc" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4054b1d2, "netdev_master_upper_dev_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3411866d, "nf_conntrack_helper_try_module_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x89f5f5ef, "skb_zerocopy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xe15e8561, "nf_conncount_destroy" },
	{ 0x7c90376, "inet_proto_csum_replace4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8b541133, "__skb_checksum" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x81fb30f, "skb_tx_error" },
	{ 0xb15b4109, "crc32c" },
	{ 0xcc9f9937, "ipv6_find_hdr" },
	{ 0x1f7a17ad, "nf_ct_deliver_cached_events" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x62333053, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xf9be3991, "inet_proto_csum_replace16" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e425a7a, "skb_zerocopy_headlen" },
	{ 0x57eab2ed, "netdev_master_upper_dev_link" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xa7149b1e, "skb_vlan_push" },
	{ 0x7099efb7, "nf_conncount_init" },
	{ 0x5d9aa56a, "nf_ct_delete" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x365404bb, "nf_nat_icmpv6_reply_translation" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x40b58f8f, "ip_defrag" },
	{ 0xe318900, "nf_nat_helper_put" },
	{ 0xfb578fc5, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa3d239b7, "__nf_conntrack_confirm" },
	{ 0x6b72cc93, "nf_nat_icmp_reply_translation" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x54947aef, "__skb_warn_lro_forwarding" },
	{ 0xbc00f80, "nf_nat_helper_try_module_get" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x38129556, "skb_ensure_writable" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xa07a37f0, "memchr" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x63c8398b, "skb_mpls_update_lse" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x4ea5d10, "ksize" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x3aff99b0, "dst_init" },
	{ 0x6ce1933d, "skb_vlan_pop" },
	{ 0x39589978, "skb_mpls_pop" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x618911fc, "numa_node" },
	{ 0xf52500d1, "__nf_ct_expect_find" },
	{ 0xf6e6b0fa, "nf_nat_setup_info" },
	{ 0x8ea43f90, "nf_ipv6_ops" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xaef936b9, "nf_conncount_count" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0x87098f51, "nf_connlabels_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x26ed639, "nla_put_nohdr" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xe616de5b, "nf_connlabels_replace" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x3d593fb1, "skb_csum_hwoffload_help" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xbffe9e56, "nf_ct_seq_adjust" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1c3529cf, "netlink_set_err" },
	{ 0xc85d60c, "nf_nat_packet" },
	{ 0xe64adcb0, "nf_conntrack_helper_put" },
	{ 0x8b1774a4, "nf_ct_destroy_timeout" },
	{ 0xb6533de8, "nf_ct_frag6_gather" },
	{ 0xa2a604a8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x3a23d32d, "nf_connlabels_put" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x346f8500, "rtnl_delete_link" },
	{ 0x1e26d86f, "nf_ct_helper_ext_add" },
	{ 0x5c3a332e, "__skb_ext_del" },
	{ 0x3d8f7133, "__nf_ct_try_assign_helper" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x8fe9c901, "skb_gso_validate_mac_len" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xad263612, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x92c404dc, "nsh_push" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x342b6ffb, "genl_notify" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x2ad3408c, "dev_fill_metadata_dst" },
	{ 0xb9a539be, "nf_nat_alloc_null_binding" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x708d53ce, "__nla_put" },
	{ 0x177cfc88, "dev_get_stats" },
	{ 0xe9b98ee, "nf_ct_set_timeout" },
	{ 0x90b6955d, "nf_conntrack_find_get" },
	{ 0x78035568, "nsh_pop" },
	{ 0x5a513ff0, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack,nf_nat,nf_conncount,libcrc32c,nf_defrag_ipv6,nsh");


MODULE_INFO(srcversion, "490A2B497E14EB3EE99168A");