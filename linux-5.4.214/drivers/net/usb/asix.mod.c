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
	{ 0x4a9cf770, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x90d266c2, "usbnet_link_change" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x5d5be603, "phy_ethtool_nway_reset" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x59533824, "usbnet_stop" },
	{ 0xdd63661a, "usbnet_update_max_qlen" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe25caefb, "phy_print_status" },
	{ 0x811c7f44, "usbnet_nway_reset" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x268517e4, "usbnet_set_link_ksettings" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3955ca2c, "usbnet_get_stats64" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x697c8009, "eth_platform_get_mac_address" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x3fe052de, "usbnet_get_endpoints" },
	{ 0x55bbcf02, "usbnet_get_link_ksettings" },
	{ 0x472af948, "usbnet_get_drvinfo" },
	{ 0xd523d85d, "skb_push" },
	{ 0xe6aa593e, "usbnet_read_cmd_nopm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbcd6a603, "usbnet_start_xmit" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xd17a6aa3, "usbnet_get_link" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x94749128, "usbnet_write_cmd_nopm" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xd07bb0e, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7b701397, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0x8e802ca9, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6083fda9, "mii_check_media" },
	{ 0x74f2d629, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x3a988c9b, "usbnet_unlink_rx_urbs" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb684db11, "usbnet_write_cmd_async" },
	{ 0xdf6243ae, "usbnet_change_mtu" },
	{ 0x387b36de, "phy_connect" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x4a13356b, "usbnet_write_cmd" },
	{ 0xbbb1b449, "usbnet_set_msglevel" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "mii,usbnet");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8436DF6FDF608921B29656D");
