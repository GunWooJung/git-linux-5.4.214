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
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xc5850110, "printk" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x825b9d0d, "ptp_clock_register" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x697c8009, "eth_platform_get_mac_address" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xa916b694, "strnlen" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x22e10e5, "pci_read_vpd" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x245054f3, "build_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x77f723a3, "phy_set_asym_pause" },
	{ 0xc0bf2e3a, "phy_validate_pause" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x23a77175, "napi_disable" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x96e57448, "pcie_capability_write_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xd673be15, "pci_device_is_present" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x5a955fde, "skb_copy" },
	{ 0x272147fe, "softnet_data" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xad263612, "consume_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5196e62, "phy_attached_info" },
	{ 0x5c812f20, "phy_support_asym_pause" },
	{ 0x113de0, "phy_set_max_speed" },
	{ 0x387b36de, "phy_connect" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xce8c1edb, "ptp_clock_unregister" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x5561600b, "dev_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x36c31145, "phy_ethtool_ksettings_set" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x168babb5, "pcie_capability_clear_and_set_word" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x384b475f, "phy_ethtool_ksettings_get" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5792f848, "strlcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7fce997a, "ptp_clock_index" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xe20861ce, "phy_start_aneg" },
	{ 0x5fd2de91, "phy_start" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x17ce1d56, "mdiobus_get_phy" },
	{ 0xfb578fc5, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x216cc777, "netdev_err" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv000017AAsd00003056bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001669sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000601bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000612bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001655sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001657sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd000011A2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "40F70BF7834BA77F03FE2D1");
