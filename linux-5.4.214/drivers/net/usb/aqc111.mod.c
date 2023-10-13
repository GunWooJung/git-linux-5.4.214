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
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xbbb1b449, "usbnet_set_msglevel" },
	{ 0x74f2d629, "usbnet_get_msglevel" },
	{ 0x3955ca2c, "usbnet_get_stats64" },
	{ 0x7b701397, "usbnet_tx_timeout" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xbcd6a603, "usbnet_start_xmit" },
	{ 0x59533824, "usbnet_stop" },
	{ 0x8e802ca9, "usbnet_open" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x27da09b6, "usb_driver_set_configuration" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3fe052de, "usbnet_get_endpoints" },
	{ 0x91b8e435, "usb_reset_configuration" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xe6aa593e, "usbnet_read_cmd_nopm" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x472af948, "usbnet_get_drvinfo" },
	{ 0xf9562bc6, "usbnet_defer_kevent" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xd07bb0e, "usbnet_read_cmd" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xb684db11, "usbnet_write_cmd_async" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "12997B35D81207E30A0174B");
