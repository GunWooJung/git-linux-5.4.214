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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x216cc777, "netdev_err" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5850110, "printk" },
	{ 0xad263612, "consume_skb" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00005261sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005263sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD7CE755CF0444FBBC22349");
