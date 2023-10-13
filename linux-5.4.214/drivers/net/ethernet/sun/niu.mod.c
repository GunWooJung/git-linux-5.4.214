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
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x23a77175, "napi_disable" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x55e77e8, "jiffies_64" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x754d539c, "strlen" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x168babb5, "pcie_capability_clear_and_set_word" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5748356e, "device_create_file" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xd523d85d, "skb_push" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9a482f9, "msleep" },
	{ 0xad263612, "consume_skb" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xc5850110, "printk" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x216cc777, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000108Ed0000ABCDsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD3C9BFB6472D9CC296F066");
