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
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x7405b58d, "pci_enable_sriov" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x23a77175, "napi_disable" },
	{ 0x8510b942, "pci_sriov_set_totalvfs" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1c428fe2, "napi_consume_skb" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x9922f9f9, "pci_disable_sriov" },
	{ 0x47105826, "__hw_addr_sync_dev" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x48c9eb02, "flow_rule_match_vlan" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xcc9f9937, "ipv6_find_hdr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a3b923d, "__page_frag_cache_drain" },
	{ 0xebff55c1, "__alloc_pages_nodemask" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xce8c1edb, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf01a3cfe, "dca3_get_tag" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xc01622c9, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x697c8009, "eth_platform_get_mac_address" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd673be15, "pci_device_is_present" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x825b9d0d, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x19aa701d, "dca_add_requester" },
	{ 0x272147fe, "softnet_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x4ea5d10, "ksize" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x245054f3, "build_skb" },
	{ 0x7306a9e6, "flow_rule_match_basic" },
	{ 0x48ea6a81, "flow_block_cb_setup_simple" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x637fa7de, "eth_get_headlen" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe0d48964, "__hw_addr_unsync_dev" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x48ea3608, "ndo_dflt_fdb_add" },
	{ 0x678dcc1c, "pm_schedule_suspend" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x88bd11bb, "ptp_find_pin" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7fce997a, "ptp_clock_index" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0x537794cd, "flow_rule_match_eth_addrs" },
	{ 0x908fec57, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3731ea78, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xad263612, "consume_skb" },
	{ 0x504afbb7, "dca_remove_requester" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x731cdee3, "pci_release_selected_regions" },
	{ 0x2ca6d6fe, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x96e57448, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "dca,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "069800A475C7293491611F4");
