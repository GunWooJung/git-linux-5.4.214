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
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x37a0cba, "kfree" },
	{ 0xad263612, "consume_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x721c9d1f, "init_net" },
	{ 0xc5850110, "printk" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cvia,velocity-vt6110");
MODULE_ALIAS("of:N*T*Cvia,velocity-vt6110C*");
MODULE_ALIAS("pci:v00001106d00003119sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B5B5E0233D9D0857B5B2703");
