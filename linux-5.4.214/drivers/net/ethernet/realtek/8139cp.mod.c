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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x349cba85, "strchr" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x500ceaac, "__napi_schedule_irqoff" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x6083fda9, "mii_check_media" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x216cc777, "netdev_err" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x23a77175, "napi_disable" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x319010b4, "pci_set_mwi" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x34acb3f8, "pci_clear_mwi" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000357d0000000Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "827B27CED837CAD93E0EBA8");
