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
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x63616516, "netif_rx" },
	{ 0xfb578fc5, "memset" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x80500894, "request_firmware" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc5850110, "printk" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x999e8297, "vfree" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x1000e51, "schedule" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5792f848, "strlcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x216cc777, "netdev_err" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000108Ed0000ABBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000100Bd00000035sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BF3B87177FAC4C2887EDB5B");
