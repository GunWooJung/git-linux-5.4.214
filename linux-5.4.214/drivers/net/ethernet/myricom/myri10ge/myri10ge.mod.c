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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0xc5850110, "printk" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2711f1c0, "pcie_get_readrq" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4ebd351d, "kernel_param_unlock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x79778a4b, "kernel_param_lock" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xea1cf29d, "pci_find_ext_capability" },
	{ 0x5094ac27, "pcie_set_readrq" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x24d273d1, "add_timer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x23a77175, "napi_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x75942744, "__put_page" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xb0e602eb, "memmove" },
	{ 0x30eda017, "napi_gro_frags" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x88ed8778, "napi_get_frags" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xf01a3cfe, "dca3_get_tag" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x19aa701d, "dca_add_requester" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x999e8297, "vfree" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x80500894, "request_firmware" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xedc03953, "iounmap" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0xde5bbc25, "napi_hash_del" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x504afbb7, "dca_remove_requester" },
	{ 0x96e57448, "pcie_capability_write_word" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x216cc777, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x73c2554f, "__iowrite64_copy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dca");

MODULE_ALIAS("pci:v000014C1d00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C1d00000009sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "97A084EFD85D62420E5827D");