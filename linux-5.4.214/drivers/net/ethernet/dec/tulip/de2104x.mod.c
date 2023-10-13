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
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x216cc777, "netdev_err" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xad263612, "consume_skb" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001011d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000014sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B9E7FA694B73079D626D794");
