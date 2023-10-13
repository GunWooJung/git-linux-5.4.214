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
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00001048sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001B48sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B13FED298F09CCA61B069B3");
