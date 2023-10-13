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
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xc5850110, "printk" },
	{ 0x75942744, "__put_page" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x5561600b, "dev_close" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xad263612, "consume_skb" },
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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xfb578fc5, "memset" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5792f848, "strlcpy" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe97309c3, "pci_pme_capable" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001148d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004342sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004344sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004351sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004352sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004355sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004356sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000435Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004361sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004364sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004365sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004366sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004367sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004369sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004370sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004382sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BB558EA81DC3D52E543219D");
