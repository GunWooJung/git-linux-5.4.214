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
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0x7405b58d, "pci_enable_sriov" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x349cba85, "strchr" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xb79a54ee, "mdio45_nway_restart" },
	{ 0x23a77175, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x86dc4c52, "__skb_flow_dissect" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9922f9f9, "pci_disable_sriov" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2591dd2c, "rps_may_expire_flow" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x68eaa423, "pci_reset_function" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xce8c1edb, "ptp_clock_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xc01622c9, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5561600b, "dev_close" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x825b9d0d, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x272147fe, "softnet_data" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x6f791233, "alloc_cpu_rmap" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0x62aa6169, "dev_open" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x5748356e, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa6397a, "iommu_present" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xaf0e5330, "netdev_features_change" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x48baa369, "pci_sriov_get_totalvfs" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x955e6f68, "dev_alloc_name" },
	{ 0x7fce997a, "ptp_clock_index" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x908fec57, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x88ed8778, "napi_get_frags" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0x73c2554f, "__iowrite64_copy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3731ea78, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad263612, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x22e10e5, "pci_read_vpd" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xea1cf29d, "pci_find_ext_capability" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x75942744, "__put_page" },
	{ 0x30eda017, "napi_gro_frags" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "mdio,mtd");

MODULE_ALIAS("pci:v00001924d00000803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000813sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000923sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00001923sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00001A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000B03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00001B03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "847E21C2433E45E7EE7A779");
