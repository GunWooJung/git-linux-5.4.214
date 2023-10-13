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
	{ 0x3955ca2c, "usbnet_get_stats64" },
	{ 0x7b701397, "usbnet_tx_timeout" },
	{ 0xdf6243ae, "usbnet_change_mtu" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xbcd6a603, "usbnet_start_xmit" },
	{ 0x59533824, "usbnet_stop" },
	{ 0x8e802ca9, "usbnet_open" },
	{ 0x268517e4, "usbnet_set_link_ksettings" },
	{ 0x55bbcf02, "usbnet_get_link_ksettings" },
	{ 0x811c7f44, "usbnet_nway_reset" },
	{ 0xbbb1b449, "usbnet_set_msglevel" },
	{ 0x74f2d629, "usbnet_get_msglevel" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd07bb0e, "usbnet_read_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x3fe052de, "usbnet_get_endpoints" },
	{ 0x90d266c2, "usbnet_link_change" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xd523d85d, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0xa937dd7b, "usbnet_status_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2534adf3, "usbnet_status_start" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a13356b, "usbnet_write_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x472af948, "usbnet_get_drvinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "79024F3EC1EE44C7D105361");
