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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x91f86a73, "sungem_phy_probe" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x23a77175, "napi_disable" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x969d6892, "pci_unmap_rom" },
	{ 0xc5f08363, "pci_map_rom" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc5850110, "printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x216cc777, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sungem_phy");

MODULE_ALIAS("pci:v0000108Ed00002BADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Ed00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000006Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "780951E1574574D6D82E063");
