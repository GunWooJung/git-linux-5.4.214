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
	{ 0xd9ad14e7, "__mt76_poll" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe9a2e9de, "mt76_sw_scan" },
	{ 0x8ac0a792, "mt76x02_conf_tx" },
	{ 0xcd16d72f, "mt76x02_ampdu_action" },
	{ 0x78d4f0d4, "mt76u_stop_rx" },
	{ 0x965d11db, "mt76x02u_exit_beacon_config" },
	{ 0xb2e4b9c0, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x49e000be, "mt76u_vendor_request" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xbe0aab7, "mt76x02u_init_beacon_config" },
	{ 0x6e6a3754, "mt76u_stop_tx" },
	{ 0x3a5b6566, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd033dce5, "mt76x0_mac_start" },
	{ 0xf8a49000, "mt76x02_bss_info_changed" },
	{ 0xc20d0670, "mt76x0_init_hardware" },
	{ 0xc3da81f, "mt76_sta_state" },
	{ 0xcb24e1c6, "mt76x02_set_rts_threshold" },
	{ 0xb89936fb, "mt76x02u_tx_prepare_skb" },
	{ 0x1e99d770, "mt76x02u_init_mcu" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x76c1cb31, "mt76_get_survey" },
	{ 0x1e468102, "mt76u_init" },
	{ 0xcd17e7bb, "mt76x02u_mcu_fw_send_data" },
	{ 0xec0abd61, "mt76x0_mac_stop" },
	{ 0xb8d9a4a8, "mt76x02_sta_add" },
	{ 0x5d46a9a0, "mt76x02_tx_status_data" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf48732b, "mt76x02_sta_remove" },
	{ 0x117a2e3e, "mt76x02_tx" },
	{ 0x68e1d6eb, "__mt76_poll_msec" },
	{ 0xa4b9240f, "mt76x02_sw_scan_complete" },
	{ 0xf8c4eeeb, "mt76_set_tim" },
	{ 0x93157217, "mt76x0_phy_calibrate" },
	{ 0x23ecc133, "mt76x02u_mcu_fw_reset" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6f9e631d, "mt76x0_register_device" },
	{ 0x58b18071, "mt76x0_config" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x1d0e81a0, "mt76u_queues_deinit" },
	{ 0x216b8bff, "mt76x02_queue_rx_skb" },
	{ 0x56e9e877, "mt76x0_chip_onoff" },
	{ 0x62d0eccf, "mt76x02_configure_filter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3c2c74e7, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xad77af8, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdac0540b, "mt76x02_sta_rate_tbl_update" },
	{ 0x12e5c614, "mt76u_resume_rx" },
	{ 0x8c5ad9be, "mt76x02_sta_ps" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c811673, "mt76_wake_tx_queue" },
	{ 0x90310a06, "mt76_get_txpower" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0xa280ab5a, "mt76_release_buffered_frames" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x903c209a, "mt76x02_set_key" },
	{ 0x599074f3, "firmware_request_nowarn" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xe9085292, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "13DBD37545D52ED76C7B512");
