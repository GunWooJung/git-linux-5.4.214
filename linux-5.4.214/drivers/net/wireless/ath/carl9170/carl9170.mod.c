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
	{ 0xa3ea868f, "ieee80211_rx_napi" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe0c8b001, "usb_get_from_anchor" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0x52c097ec, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x17324e49, "__ieee80211_get_assoc_led_name" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa152d406, "ath_is_mybeacon" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xf5b22244, "ieee80211_sta_block_awake" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0xcc9e7cf7, "ath_reg_notifier_apply" },
	{ 0x6c6311b0, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2e30b2c0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x79a4c965, "usb_queue_reset_device" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0x69f102ce, "ieee80211_get_tx_rates" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x67876151, "ieee80211_find_sta" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xaf8c5b24, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x94363551, "usb_get_intf" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x59d5d956, "ieee80211_restart_hw" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xcafbeb94, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x63f0726e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x2ccdf080, "usb_put_intf" },
	{ 0x53df1a33, "ieee80211_stop_tx_ba_session" },
	{ 0x4d26c966, "ieee80211_queue_stopped" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "mac80211,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9D7CAF2A4FB1853384230E5");
