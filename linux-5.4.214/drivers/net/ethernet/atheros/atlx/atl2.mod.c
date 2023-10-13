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
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9166fada, "strncpy" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5534d64, "ioread16" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xc5850110, "printk" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001969d00002048sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0BE0DBF3AE6D8603B3B1F53");
