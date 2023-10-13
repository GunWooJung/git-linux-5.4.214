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
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x3955ca2c, "usbnet_get_stats64" },
	{ 0x7b701397, "usbnet_tx_timeout" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xbcd6a603, "usbnet_start_xmit" },
	{ 0x59533824, "usbnet_stop" },
	{ 0x8e802ca9, "usbnet_open" },
	{ 0xcde71e34, "rndis_tx_fixup" },
	{ 0x660d2c29, "rndis_rx_fixup" },
	{ 0x565e802b, "rndis_status" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xd7cddb7c, "wiphy_register" },
	{ 0xb617989f, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc722e194, "wiphy_new_nm" },
	{ 0x6b93f45f, "cfg80211_disconnected" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xfcd35dae, "cfg80211_ibss_joined" },
	{ 0xc036439e, "cfg80211_roamed" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x54fad884, "cfg80211_cqm_rssi_notify" },
	{ 0x216cc777, "netdev_err" },
	{ 0xc4e5dda7, "usbnet_resume_rx" },
	{ 0x1953f3b2, "usbnet_purge_paused_rxq" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x124c821, "cfg80211_put_bss" },
	{ 0xe1cbcc8e, "ieee80211_get_channel" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x9c53d3db, "cfg80211_scan_done" },
	{ 0x70d3ebc4, "wiphy_free" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0xea8944d1, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdc89a251, "rndis_command" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x75ad7f34, "cfg80211_inform_bss_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa20bfaa8, "cfg80211_connect_done" },
	{ 0x11089ac7, "_ctype" },
	{ 0xfca3d4a3, "usbnet_pause_rx" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x395ad404, "cfg80211_michael_mic_failure" },
	{ 0xb82e5df4, "cfg80211_pmksa_candidate_notify" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "AEC3E86F8E3A19A4D8F6728");
