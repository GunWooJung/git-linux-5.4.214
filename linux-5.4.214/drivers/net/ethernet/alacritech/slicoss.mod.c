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
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xad263612, "consume_skb" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x216cc777, "netdev_err" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x500ceaac, "__napi_schedule_irqoff" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FF2975815BA735D50618C96");
