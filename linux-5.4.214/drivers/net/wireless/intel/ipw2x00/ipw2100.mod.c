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
	{ 0x4d0cc8c2, "libipw_xmit" },
	{ 0xa41935ec, "pm_qos_remove_request" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x28a8c058, "pm_qos_add_request" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x49da10cb, "libipw_rx_mgt" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb2ddc6c7, "libipw_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xd7cddb7c, "wiphy_register" },
	{ 0x43afeefc, "libipw_get_geo" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9b17339f, "alloc_libipw" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x80500894, "request_firmware" },
	{ 0x7bd6397f, "libipw_networks_age" },
	{ 0xf1313820, "libipw_set_geo" },
	{ 0x5792f848, "strlcpy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc5d2e4c7, "free_libipw" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe4233013, "pm_qos_update_request" },
	{ 0xc5534d64, "ioread16" },
	{ 0xf10de535, "ioread8" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xad263612, "consume_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbf2c5ca6, "libipw_wx_get_scan" },
	{ 0x6020daee, "libipw_wx_set_encode" },
	{ 0xe0c33d6f, "libipw_wx_get_encode" },
	{ 0x49ac964c, "libipw_wx_set_encodeext" },
	{ 0x81673192, "libipw_wx_get_encodeext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x6191f840, "wiphy_rfkill_set_hw_state" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x11089ac7, "_ctype" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbc2de9c9, "libipw_txb_free" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0xc5850110, "printk" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libipw,cfg80211");

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002520bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002521bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002524bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002525bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002526bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002522bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002523bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002527bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002528bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002529bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Bbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Cbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Dbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002550bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002551bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002553bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002554bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002555bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002560bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002562bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002563bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002561bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002565bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002566bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002567bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002570bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002580bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002582bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002583bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002581bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002585bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002586bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002587bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002590bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002592bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002591bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002593bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002596bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002598bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd000025A0bc*sc*i*");

MODULE_INFO(srcversion, "98E74B18E2326AC10863ABE");
