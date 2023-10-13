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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x23a77175, "napi_disable" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf4e8e750, "pci_pme_active" },
	{ 0x12a38747, "usleep_range" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x63616516, "netif_rx" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x87bd903f, "pci_disable_link_state" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x5792f848, "strlcpy" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xad263612, "consume_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v0000197Bd00000250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00000260sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1A32C94CEED11CDDAB36889");
