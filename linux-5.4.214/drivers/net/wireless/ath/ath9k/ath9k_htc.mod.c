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
	{ 0x2d3385d3, "system_wq" },
	{ 0xfffb19fe, "ath9k_hw_set_txq_props" },
	{ 0xcd57c7b9, "ieee80211_csa_finish" },
	{ 0x80160b1e, "ath9k_hw_init" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4560a0a3, "ath9k_cmn_get_channel" },
	{ 0x2465849f, "ath9k_hw_deinit" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xe2569725, "device_release_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x844f79e, "ath9k_hw_set_gpio" },
	{ 0x9f362671, "ath9k_cmn_init_crypto" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x74d39874, "ath9k_cmn_process_rate" },
	{ 0x5c3fcfc9, "ieee80211_csa_is_complete" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x76233555, "ath9k_hw_btcoex_enable" },
	{ 0x21e9ab85, "ath9k_hw_wait" },
	{ 0x4ca68531, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0xa0f4ecf0, "ath9k_hw_stopdmarecv" },
	{ 0x61e1d2c4, "ath_key_delete" },
	{ 0xbeaf2f7e, "ath9k_cmn_update_txpow" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0xda650723, "ath9k_hw_gpio_get" },
	{ 0x52c097ec, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28c7e597, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xd0632d3a, "ath9k_hw_setrxfilter" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x94552d01, "ath9k_hw_get_txq_props" },
	{ 0xaecb671d, "ath9k_hw_releasetxqueue" },
	{ 0xd5249132, "ath9k_hw_reset_tsf" },
	{ 0x37728a4e, "ath9k_cmn_spectral_init_debug" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x3d641f42, "wiphy_rfkill_start_polling" },
	{ 0x28c2e85c, "usb_get_urb" },
	{ 0x6f8b5105, "ath9k_cmn_reload_chainmask" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7a75172c, "ath9k_cmn_spectral_deinit_debug" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcfe3a232, "ath9k_cmn_init_channels_rates" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0xfd94814e, "complete_all" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x19f945ca, "ieee80211_tx_status" },
	{ 0x201befae, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x62cce76b, "ath9k_hw_setopmode" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x30020d41, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd835e46b, "ath9k_hw_resettxqueue" },
	{ 0xdab19d7c, "ath9k_hw_gettsf64" },
	{ 0x60f66a04, "ath_cmn_process_fft" },
	{ 0xc2448345, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xb17addfa, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x2137ea6e, "ath9k_hw_set_tsfadjust" },
	{ 0x568b3c14, "ath9k_cmn_beacon_config_ap" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0xb76fccc7, "ath9k_cmn_debug_stat_rx" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x8873c7e3, "ath9k_hw_btcoex_disable" },
	{ 0x7e17de9f, "ath9k_hw_getrxfilter" },
	{ 0xf7773950, "ath9k_hw_ani_monitor" },
	{ 0xa152d406, "ath_is_mybeacon" },
	{ 0xdeb1c7e8, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x8bd1f419, "ath9k_cmn_process_rssi" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x8630e9ab, "ath9k_cmn_debug_base_eeprom" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x130fce1e, "ath9k_cmn_debug_recv" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x32ee9868, "simple_open" },
	{ 0x49183715, "wiphy_rfkill_stop_polling" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xef36a024, "ath9k_hw_write_associd" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xcc9e7cf7, "ath_reg_notifier_apply" },
	{ 0x6c6311b0, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x17c8aab9, "ath9k_hw_init_btcoex_hw" },
	{ 0x2e30b2c0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfded025f, "ath9k_cmn_debug_phy_err" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc1aa8ea0, "ath9k_hw_beaconq_setup" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x6e0c4e18, "ath9k_hw_name" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2057f455, "ath9k_cmn_spectral_scan_trigger" },
	{ 0xb8dd085, "ath9k_hw_init_global_settings" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xfe813e3b, "ath9k_hw_settsf64" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6191f840, "wiphy_rfkill_set_hw_state" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x35c49a9d, "ath9k_hw_beaconinit" },
	{ 0x67876151, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb8e51d75, "ieee80211_get_buffered_bc" },
	{ 0x75dd0647, "usb_interrupt_msg" },
	{ 0x1f8a4978, "ath9k_hw_gpio_free" },
	{ 0xfac85c03, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x427ccbe1, "ath9k_hw_setrxabort" },
	{ 0x255c1ac8, "ath9k_cmn_beacon_config_sta" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1db6f908, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe6b05980, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x72dc9043, "ath9k_hw_phy_disable" },
	{ 0x45e8d1c2, "__ieee80211_get_radio_led_name" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd2e15376, "ath9k_hw_setpower" },
	{ 0xcd0850a6, "__ieee80211_create_tpt_led_trigger" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xd096ec06, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0xcafbeb94, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6cd87b79, "ath9k_hw_setmcastfilter" },
	{ 0x44f92e95, "ieee80211_start_tx_ba_session" },
	{ 0xe3d67a7c, "ath9k_hw_gpio_request_out" },
	{ 0x4bf1ba79, "ath9k_hw_startpcureceive" },
	{ 0xc7a96a45, "ath9k_hw_setuptxqueue" },
	{ 0x96848186, "scnprintf" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x35ee7a7d, "ath9k_hw_reset" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xf967fecc, "ath9k_cmn_rx_accept" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc28ca5d3, "ath9k_hw_btcoex_init_3wire" },
	{ 0xaa13d057, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc685e200, "ath9k_cmn_debug_modal_eeprom" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa8bd05e7, "ath9k_hw_reset_calvalid" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x63f0726e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9580D797F984B77E81D1195");
