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
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x31b31f5c, "csum_partial_copy_nocheck" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xc5850110, "printk" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x319010b4, "pci_set_mwi" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xad263612, "consume_skb" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x34acb3f8, "pci_clear_mwi" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x216cc777, "netdev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B7d00009900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00001102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00001101bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00001102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00002101bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00002102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009908sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009909sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000990Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD222442E518D83F933447A");
