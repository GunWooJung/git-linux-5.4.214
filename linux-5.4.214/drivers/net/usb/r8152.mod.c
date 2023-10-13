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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0xc2c5802, "work_busy" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa6c8dbac, "dev_set_mac_address" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf32be640, "usb_autopm_get_interface_async" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3a5e48cf, "usb_autopm_put_interface_async" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xcfeafd79, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x27da09b6, "usb_driver_set_configuration" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x216cc777, "netdev_err" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x79a4c965, "usb_queue_reset_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x75942744, "__put_page" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad263612, "consume_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x23a77175, "napi_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "4D12B49CB062E106BCE9729");
