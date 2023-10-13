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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x245054f3, "build_skb" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x80500894, "request_firmware" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x23a77175, "napi_disable" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x5561600b, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x15af7f4, "system_state" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x754d539c, "strlen" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xe914e41e, "strcpy" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfb578fc5, "memset" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xad263612, "consume_skb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5850110, "printk" },
	{ 0x216cc777, "netdev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003101bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003106bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv0000103Csd00003102bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001639sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B0D7664BE0D4BFE3AD5E47E");
