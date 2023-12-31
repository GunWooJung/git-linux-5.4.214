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
	{ 0x5d5be603, "phy_ethtool_nway_reset" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xf32be640, "usb_autopm_get_interface_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe0c8b001, "usb_get_from_anchor" },
	{ 0x3a5e48cf, "usb_autopm_put_interface_async" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xd523d85d, "skb_push" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8af433f1, "fixed_phy_register" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0xdd74ac9, "phy_remove_link_mode" },
	{ 0x8c9881c5, "phy_connect_direct" },
	{ 0x793bd25e, "phy_register_fixup_for_uid" },
	{ 0x66cef73a, "phy_find_first" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x73b09748, "irq_domain_add_simple" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x63616516, "netif_rx" },
	{ 0xc1ed54a2, "skb_defer_rx_timestamp" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xfb578fc5, "memset" },
	{ 0x216cc777, "netdev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x70d85175, "fixed_phy_unregister" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0xd738ca1b, "phy_unregister_fixup_for_uid" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x697c8009, "eth_platform_get_mac_address" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0xfbe42f54, "phy_read_mmd" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xa8cf36a9, "irq_set_chip_and_handler_name" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc8632514, "phy_ethtool_set_wol" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85fb8f1c, "phy_ethtool_get_eee" },
	{ 0xf736fe7, "phy_ethtool_set_eee" },
	{ 0x384b475f, "phy_ethtool_ksettings_get" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0x36c31145, "phy_ethtool_ksettings_set" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x28c2e85c, "usb_get_urb" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p7800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7850d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9p0012d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DC45FF4165AA5C964FF1C12");
