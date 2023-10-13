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
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x5561600b, "dev_close" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x216cc777, "netdev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x23a77175, "napi_disable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc5850110, "printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xfb578fc5, "memset" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B7d00001700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d000080EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001371d0000434Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000015bc*sc*i*");

MODULE_INFO(srcversion, "7DF1EDA4FEC7FC90BAF1A2B");
