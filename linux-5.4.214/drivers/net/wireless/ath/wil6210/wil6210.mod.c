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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd619322, "init_dummy_netdev" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x70d3ebc4, "wiphy_free" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xa20bfaa8, "cfg80211_connect_done" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x98d5d311, "debugfs_create_u8" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x275867e8, "ieee80211_bss_get_elem" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x23a77175, "napi_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc5df7d86, "cfg80211_ft_event" },
	{ 0xcaac5422, "cfg80211_chandef_create" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5a955fde, "skb_copy" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2d2e8ee8, "seq_write" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x18f90612, "cfg80211_rx_mgmt" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe8830b36, "debugfs_create_x32" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x999e8297, "vfree" },
	{ 0x58ef5537, "cfg80211_probe_status" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xbfc03cbf, "cfg80211_unregister_wdev" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d1b8678, "cfg80211_mgmt_tx_status" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xaaacd34a, "cfg80211_vendor_cmd_reply" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xea9a3577, "kfree_skb_partial" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0xfb578fc5, "memset" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0xc2448345, "default_llseek" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x201ec6c0, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe2bfce97, "dev_coredumpv" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xd48ea5a, "cfg80211_del_sta_sinfo" },
	{ 0xe1cbcc8e, "ieee80211_get_channel" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5862b84e, "cfg80211_cqm_pktloss_notify" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb798d3d, "debugfs_create_file_unsafe" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x32ee9868, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x2b4d03e0, "kobject_uevent_env" },
	{ 0xc723a3af, "cfg80211_get_drvinfo" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xdb395e7a, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xda4d2da2, "skb_try_coalesce" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc036439e, "cfg80211_roamed" },
	{ 0x124c821, "cfg80211_put_bss" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4f7fd406, "__cfg80211_alloc_reply_skb" },
	{ 0xd7cddb7c, "wiphy_register" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x5b49b982, "param_get_uint" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xeb6553bc, "cfg80211_ready_on_channel" },
	{ 0xc722e194, "wiphy_new_nm" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x6b93f45f, "cfg80211_disconnected" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xe42bf468, "cfg80211_new_sta" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xf5234d50, "seq_hex_dump" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xdd4fc9f6, "param_set_uint" },
	{ 0xb952b459, "cfg80211_ref_bss" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x80500894, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x7839647d, "cfg80211_remain_on_channel_expired" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xad263612, "consume_skb" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c53d3db, "cfg80211_scan_done" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4bbb213c, "skb_complete_wifi_ack" },
	{ 0xdcc34c59, "cfg80211_sched_scan_results" },
	{ 0xeae5f50d, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("pci:v00001AE9d00000310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AE9d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00001201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "42FDB3DDFC5B4E7232EBB24");
