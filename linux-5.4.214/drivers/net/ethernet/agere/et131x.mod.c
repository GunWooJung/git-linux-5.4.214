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
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe25caefb, "phy_print_status" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x5196e62, "phy_attached_info" },
	{ 0x113de0, "phy_set_max_speed" },
	{ 0x387b36de, "phy_connect" },
	{ 0x66cef73a, "phy_find_first" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x5094ac27, "pcie_set_readrq" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011C1d0000ED00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011C1d0000ED01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2F5754A53076B285936846E");
