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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xd2c37d7b, "phylink_connect_phy" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x5c2864a0, "__page_pool_put_page" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x500ceaac, "__napi_schedule_irqoff" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xdb242c97, "phylink_of_phy_connect" },
	{ 0x56be148a, "phylink_mii_ioctl" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x535e6357, "page_pool_unmap_page" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdccfdecd, "phylink_ethtool_ksettings_get" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17ce1d56, "mdiobus_get_phy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x37f07014, "page_pool_alloc_pages" },
	{ 0x12135396, "phylink_mac_change" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x825c7340, "phylink_get_eee_err" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x719e9a9c, "debugfs_rename" },
	{ 0xb18f9eec, "phylink_ethtool_ksettings_set" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x11546c58, "netdev_alert" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xce8c1edb, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xa58561b3, "flow_rule_match_ports" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb5bcbe5c, "page_pool_create" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x57727285, "phylink_ethtool_set_eee" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5561600b, "dev_close" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x825b9d0d, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xb594bd2f, "pinctrl_pm_select_sleep_state" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x62aa6169, "dev_open" },
	{ 0x7306a9e6, "flow_rule_match_basic" },
	{ 0x48ea6a81, "flow_block_cb_setup_simple" },
	{ 0xa6c83ba7, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x858c3883, "phy_init_eee" },
	{ 0xc70bda53, "netdev_pick_tx" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x2c8e28ee, "phylink_ethtool_get_eee" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x6fa426d2, "phylink_ethtool_nway_reset" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xd1ec7ee7, "pinctrl_pm_select_default_state" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xe9a92ca4, "phylink_create" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x70bc6634, "flow_rule_match_ipv4_addrs" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x8f03557d, "page_pool_destroy" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x5196e62, "phy_attached_info" },
	{ 0x7fce997a, "ptp_clock_index" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xad263612, "consume_skb" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "phylink");


MODULE_INFO(srcversion, "A4D4C5812E6690656659C59");