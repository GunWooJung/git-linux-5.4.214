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
	{ 0x33b023e7, "usbnet_resume" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x216cc777, "netdev_err" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x3fe052de, "usbnet_get_endpoints" },
	{ 0x25717112, "usbnet_get_ethernet_addr" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xb684db11, "usbnet_write_cmd_async" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v09E1p5121d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BEC482D241016E986F95D2");
