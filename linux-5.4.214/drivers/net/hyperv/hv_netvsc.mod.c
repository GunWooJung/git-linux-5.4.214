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
	{ 0x958767a4, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xdb1bfdc7, "vmbus_sendpacket_pagebuffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xdf6e8946, "__hv_pkt_iter_next" },
	{ 0xd5092be3, "dev_change_flags" },
	{ 0xd2b1ad9b, "vmbus_establish_gpadl" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x23a77175, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1c428fe2, "napi_consume_skb" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x500ceaac, "__napi_schedule_irqoff" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x86dc4c52, "__skb_flow_dissect" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaf822806, "dev_change_net_namespace" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4054b1d2, "netdev_master_upper_dev_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0xeceb2de5, "dev_set_allmulti" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xe7af1825, "vmbus_set_sc_create_callback" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x57eab2ed, "netdev_master_upper_dev_link" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x91f5647e, "hv_pkt_iter_close" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xa6c8dbac, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x8ee5bcff, "dev_set_alias" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0x5561600b, "dev_close" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0x272147fe, "softnet_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x62aa6169, "dev_open" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc70bda53, "netdev_pick_tx" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x618911fc, "numa_node" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb7950cb0, "eth_prepare_mac_addr_change" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xc8e2970a, "netdev_notify_peers" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x25204a67, "eth_commit_mac_addr_change" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xa2a604a8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x643ab05a, "hv_pkt_iter_first" },
	{ 0x7f8f58d1, "vmbus_teardown_gpadl" },
	{ 0x469d6b8b, "vmbus_sendpacket" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x161f25c8, "dev_uc_sync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xad263612, "consume_skb" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xd078c3ba, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1cc490fb, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf105fed9, "__do_once_done" },
	{ 0x4336fcca, "ucs2_as_utf8" },
	{ 0x72fc91c0, "vmbus_driver_unregister" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:635161f83edfc546913ff2d2f965ed0e");

MODULE_INFO(srcversion, "2C68FC850F7A67957DC54DB");
