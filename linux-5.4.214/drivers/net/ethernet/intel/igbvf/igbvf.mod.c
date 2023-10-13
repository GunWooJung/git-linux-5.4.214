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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x23a77175, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xcc9f9937, "ipv6_find_hdr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xad263612, "consume_skb" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x75942744, "__put_page" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000010CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001520sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DE7D4D5A06A1974EF6EFFDC");
