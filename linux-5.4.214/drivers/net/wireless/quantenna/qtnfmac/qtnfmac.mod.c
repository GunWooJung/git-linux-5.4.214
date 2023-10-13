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
	{ 0x958767a4, "register_netdevice" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70d3ebc4, "wiphy_free" },
	{ 0xa20bfaa8, "cfg80211_connect_done" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x4df89d5b, "regulatory_set_wiphy_regd" },
	{ 0x2698b89c, "cfg80211_radar_event" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf0a1ea0f, "cfg80211_shutdown_all_interfaces" },
	{ 0x75ad7f34, "cfg80211_inform_bss_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x18f90612, "cfg80211_rx_mgmt" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x11089ac7, "_ctype" },
	{ 0x201ec6c0, "cfg80211_get_bss" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0xd48ea5a, "cfg80211_del_sta_sinfo" },
	{ 0xe1cbcc8e, "ieee80211_get_channel" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x52b4d74f, "wiphy_apply_custom_regulatory" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc723a3af, "cfg80211_get_drvinfo" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xdb395e7a, "cfg80211_check_combinations" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x20fdf43b, "cfg80211_ch_switch_notify" },
	{ 0x124c821, "cfg80211_put_bss" },
	{ 0xd7cddb7c, "wiphy_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc722e194, "wiphy_new_nm" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x6b93f45f, "cfg80211_disconnected" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xe42bf468, "cfg80211_new_sta" },
	{ 0x6439af62, "cfg80211_chandef_valid" },
	{ 0xc75e65aa, "cfg80211_external_auth_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xcafbeb94, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf11b1a80, "cfg80211_cac_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xad263612, "consume_skb" },
	{ 0x9c53d3db, "cfg80211_scan_done" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x915906d7, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "D5C9F5156134915B73CEE2B");
