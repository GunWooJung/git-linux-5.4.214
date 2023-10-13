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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xfb578fc5, "memset" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xace59822, "skb_copy_and_csum_dev" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x85bd1608, "__request_region" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xad263612, "consume_skb" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcf2a6966, "up" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000016C6d00008841sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C6d00008842sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7CE0D56A7F3E18997245D5F");
