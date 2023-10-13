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
	{ 0x4791d7c6, "mt76x02_remove_interface" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x4989beb5, "mt76x02_phy_set_txdac" },
	{ 0xcc8ed207, "mt76x2_phy_set_txpower" },
	{ 0xb3eba3c, "mt76x2_phy_set_txpower_regs" },
	{ 0x930e5166, "mt76x2_read_rx_gain" },
	{ 0xd9ad14e7, "__mt76_poll" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x885bb1fb, "mt76x02_mac_wcid_setup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe9a2e9de, "mt76_sw_scan" },
	{ 0x47195bdc, "mt76x02_mcu_function_select" },
	{ 0x8ac0a792, "mt76x02_conf_tx" },
	{ 0x7fee2e72, "mt76x02_mcu_calibrate" },
	{ 0xcd16d72f, "mt76x02_ampdu_action" },
	{ 0x78d4f0d4, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb2e4b9c0, "mt76x02_add_interface" },
	{ 0x49e000be, "mt76u_vendor_request" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xbe0aab7, "mt76x02u_init_beacon_config" },
	{ 0x6e6a3754, "mt76u_stop_tx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3a5b6566, "mt76u_alloc_queues" },
	{ 0xc4239aad, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdbea1627, "mt76x2_phy_update_channel_gain" },
	{ 0x7d18cba6, "mt76x02_init_agc_gain" },
	{ 0xf8a49000, "mt76x02_bss_info_changed" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0xb754aa70, "mt76x2_phy_tssi_compensate" },
	{ 0xc3da81f, "mt76_sta_state" },
	{ 0x12c2d326, "mt76x2_mcu_init_gain" },
	{ 0xb89936fb, "mt76x02u_tx_prepare_skb" },
	{ 0x1e99d770, "mt76x02u_init_mcu" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x67a927a9, "mt76x02_init_debugfs" },
	{ 0x76c1cb31, "mt76_get_survey" },
	{ 0x1e468102, "mt76u_init" },
	{ 0xcd17e7bb, "mt76x02u_mcu_fw_send_data" },
	{ 0x5a222891, "mt76x2_init_txpower" },
	{ 0x6851462d, "mt76x2_mcu_load_cr" },
	{ 0xb8d9a4a8, "mt76x02_sta_add" },
	{ 0x5d46a9a0, "mt76x02_tx_status_data" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xcf4bdf26, "mt76x02_edcca_init" },
	{ 0xf915a799, "mt76x02_phy_set_rxpath" },
	{ 0xf48732b, "mt76x02_sta_remove" },
	{ 0x64f38057, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0x117a2e3e, "mt76x02_tx" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x68e1d6eb, "__mt76_poll_msec" },
	{ 0x548296b4, "mt76x02_init_device" },
	{ 0x12dc7ef, "mt76_set_channel" },
	{ 0xfa24c7cd, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbd844265, "mt76x02_phy_set_bw" },
	{ 0xa4b9240f, "mt76x02_sw_scan_complete" },
	{ 0xf8c4eeeb, "mt76_set_tim" },
	{ 0x3460ad4c, "mt76_register_device" },
	{ 0xd22134d8, "mt76x02_mac_setaddr" },
	{ 0x23ecc133, "mt76x02u_mcu_fw_reset" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x1d0e81a0, "mt76u_queues_deinit" },
	{ 0x216b8bff, "mt76x02_queue_rx_skb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x62d0eccf, "mt76x02_configure_filter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4efa85ca, "mt76x2_configure_tx_delay" },
	{ 0x3c2c74e7, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x709c5baa, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x356e4bb0, "mt76x02_ext_pa_enabled" },
	{ 0xaed8dfbf, "mt76x02_mac_shared_key_setup" },
	{ 0xad77af8, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdac0540b, "mt76x02_sta_rate_tbl_update" },
	{ 0x12e5c614, "mt76u_resume_rx" },
	{ 0x8c5ad9be, "mt76x02_sta_ps" },
	{ 0x5ee3182d, "mt76x2_apply_gain_adj" },
	{ 0x6c811673, "mt76_wake_tx_queue" },
	{ 0xd2463291, "mt76x02_mcu_set_radio_state" },
	{ 0x49bd0afa, "mt76x2_mcu_set_channel" },
	{ 0x3546b063, "mt76x2_reset_wlan" },
	{ 0x85aad512, "mt76_write_mac_initvals" },
	{ 0x90310a06, "mt76_get_txpower" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0xa280ab5a, "mt76_release_buffered_frames" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x903c209a, "mt76x02_set_key" },
	{ 0x2f8b2586, "mt76x02_set_ethtool_fwver" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xe9085292, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E89066E16A0E2CA46727D80");
