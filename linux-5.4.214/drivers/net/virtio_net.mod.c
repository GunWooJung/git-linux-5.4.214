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
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x88ff8671, "passthru_features_check" },
	{ 0x580796e, "unregister_virtio_driver" },
	{ 0xe60548f0, "__cpuhp_remove_state" },
	{ 0xba3f45f1, "register_virtio_driver" },
	{ 0x7c941d6, "__cpuhp_setup_state" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc5850110, "printk" },
	{ 0xf92a690c, "xdp_convert_zc_to_xdp_frame" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x245054f3, "build_skb" },
	{ 0xc5a81b98, "skb_coalesce_rx_frag" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x59fd661e, "virtqueue_get_buf_ctx" },
	{ 0x86dc4c52, "__skb_flow_dissect" },
	{ 0xa7e38f12, "flow_keys_basic_dissector" },
	{ 0xa436094a, "xdp_do_redirect" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xeeaa2fe9, "skb_partial_csum_set" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x7458d94, "net_failover_create" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xacce992a, "xdp_rxq_info_reg_mem_model" },
	{ 0x90bf3ea9, "xdp_rxq_info_reg" },
	{ 0x4a62a2a0, "virtqueue_add_inbuf" },
	{ 0xd11395c, "virtqueue_add_inbuf_ctx" },
	{ 0xba200321, "skb_page_frag_refill" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xccb9e42, "xdp_return_frame_rx_napi" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x596cc76a, "net_failover_destroy" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xad263612, "consume_skb" },
	{ 0xd8c6a4dd, "virtqueue_detach_unused_buf" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x254ca682, "virtqueue_notify" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xaa4a9543, "virtqueue_enable_cb_delayed" },
	{ 0xf3cdabc9, "virtqueue_kick_prepare" },
	{ 0xf64e2a3d, "virtqueue_add_outbuf" },
	{ 0xcbdd2046, "skb_to_sgvec" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x272147fe, "softnet_data" },
	{ 0xffd0df6f, "virtqueue_poll" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xe8e3fbe6, "virtqueue_enable_cb_prepare" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc8e2970a, "netdev_notify_peers" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xf5fa0fa1, "bpf_prog_put" },
	{ 0x737ddf1a, "bpf_prog_sub" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xb471426, "bpf_prog_add" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xfb578fc5, "memset" },
	{ 0xa38f0d88, "__netif_set_xps_queue" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x25204a67, "eth_commit_mac_addr_change" },
	{ 0xb7950cb0, "eth_prepare_mac_addr_change" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x42651f42, "virtqueue_is_broken" },
	{ 0x49ebd2, "virtqueue_kick" },
	{ 0x4dcd739, "virtqueue_add_sgs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xa7556a63, "virtio_check_driver_offered_feature" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xc451a9e1, "xdp_rxq_info_unreg" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa2559ff6, "__cpuhp_state_remove_instance" },
	{ 0xe0d89148, "__cpuhp_state_add_instance" },
	{ 0x37a0cba, "kfree" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0xde5bbc25, "napi_hash_del" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xad92de27, "virtqueue_get_vring_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x71eee81d, "xdp_return_frame" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0x1c428fe2, "napi_consume_skb" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x977beaa3, "virtqueue_disable_cb" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "net_failover");

MODULE_ALIAS("virtio:d00000001v*");

MODULE_INFO(srcversion, "54A17039BDE862952CB26BB");
