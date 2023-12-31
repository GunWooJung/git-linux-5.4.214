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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0xa615d9a, "simple_attr_write" },
	{ 0x2a456f5f, "simple_attr_read" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x955e6f68, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x5328374d, "__class_create" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xcea37297, "genl_register_family" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xcafbeb94, "regulatory_hint" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x52b4d74f, "wiphy_apply_custom_regulatory" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x967555c5, "device_bind_driver" },
	{ 0xd267dbfb, "device_create" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcd57c7b9, "ieee80211_csa_finish" },
	{ 0x5c3fcfc9, "ieee80211_csa_is_complete" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbece1aed, "ieee80211_probereq_get" },
	{ 0x387084c9, "ieee80211_tx_prepare_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x69f102ce, "ieee80211_get_tx_rates" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xd0f82e5e, "__skb_ext_put" },
	{ 0x73588f11, "dst_release" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x282e8498, "ieee80211_rx_irqsafe" },
	{ 0x5a955fde, "skb_copy" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd523d85d, "skb_push" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xe2569725, "device_release_driver" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x721c9d1f, "init_net" },
	{ 0x342b6ffb, "genl_notify" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x63616516, "netif_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x28c7e597, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2e30b2c0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x63f0726e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x40d94e98, "ieee80211_scan_completed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7e8ce529, "ieee80211_ready_on_channel" },
	{ 0xe9c87ef9, "ieee80211_remain_on_channel_expired" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaaacd34a, "cfg80211_vendor_cmd_reply" },
	{ 0x4f7fd406, "__cfg80211_alloc_reply_skb" },
	{ 0x8c107da0, "__cfg80211_send_event_skb" },
	{ 0xca778bf5, "__cfg80211_alloc_event_skb" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdb1050fc, "ieee80211_radar_detected" },
	{ 0x703de441, "simple_attr_open" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xad263612, "consume_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "5DA9C61E5CE62840F4BF525");
