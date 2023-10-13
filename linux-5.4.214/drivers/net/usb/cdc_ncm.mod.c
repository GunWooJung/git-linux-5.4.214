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
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0x190599d3, "usb_altnum_to_altsetting" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x90d266c2, "usbnet_link_change" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x59533824, "usbnet_stop" },
	{ 0xdd63661a, "usbnet_update_max_qlen" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x811c7f44, "usbnet_nway_reset" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x268517e4, "usbnet_set_link_ksettings" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3955ca2c, "usbnet_get_stats64" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x55bbcf02, "usbnet_get_link_ksettings" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0x472af948, "usbnet_get_drvinfo" },
	{ 0xbcd6a603, "usbnet_start_xmit" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xd17a6aa3, "usbnet_get_link" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd07bb0e, "usbnet_read_cmd" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7b701397, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd3738830, "cdc_parse_cdc_header" },
	{ 0x25717112, "usbnet_get_ethernet_addr" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0x8e802ca9, "usbnet_open" },
	{ 0x74f2d629, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3a988c9b, "usbnet_unlink_rx_urbs" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x7d7caacc, "usbnet_manage_power" },
	{ 0x4a13356b, "usbnet_write_cmd" },
	{ 0xbbb1b449, "usbnet_set_msglevel" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "906EDAF774252043835A049");
