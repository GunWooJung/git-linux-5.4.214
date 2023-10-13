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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x15af7f4, "system_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xad263612, "consume_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xace59822, "skb_copy_and_csum_dev" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc5534d64, "ioread16" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6083fda9, "mii_check_media" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xf10de535, "ioread8" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("of:N*T*Cvia,vt8500-rhine");
MODULE_ALIAS("of:N*T*Cvia,vt8500-rhineC*");
MODULE_ALIAS("pci:v00001106d00003043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003053sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5EE05B30C972E62691B645F");
