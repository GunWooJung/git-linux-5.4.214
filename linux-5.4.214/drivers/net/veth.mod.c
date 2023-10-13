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
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x88ff8671, "passthru_features_check" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xad263612, "consume_skb" },
	{ 0x578ba596, "skb_headers_offset_update" },
	{ 0x4737c25d, "skb_copy_header" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x6b1a6f28, "bpf_redirect_info" },
	{ 0x20835a9f, "__xdp_release_frame" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x245054f3, "build_skb" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xa436094a, "xdp_do_redirect" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xf92a690c, "xdp_convert_zc_to_xdp_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9e08d700, "__tracepoint_xdp_bulk_tx" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xccb9e42, "xdp_return_frame_rx_napi" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0xf5fa0fa1, "bpf_prog_put" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x90bf3ea9, "xdp_rxq_info_reg" },
	{ 0xacce992a, "xdp_rxq_info_reg_mem_model" },
	{ 0x5cbe3eaa, "xdp_rxq_info_is_reg" },
	{ 0xc451a9e1, "xdp_rxq_info_unreg" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xde5bbc25, "napi_hash_del" },
	{ 0x23a77175, "napi_disable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x288691f9, "rtnl_configure_link" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xfdd15055, "rtnl_create_link" },
	{ 0xecc9baf1, "rtnl_link_get_net" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x63616516, "netif_rx" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xee542fec, "__dev_forward_skb" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x71eee81d, "xdp_return_frame" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "435878D79498F32A129DBDE");
