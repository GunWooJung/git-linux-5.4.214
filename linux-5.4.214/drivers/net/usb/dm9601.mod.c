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
	{ 0x268517e4, "usbnet_set_link_ksettings" },
	{ 0x55bbcf02, "usbnet_get_link_ksettings" },
	{ 0x811c7f44, "usbnet_nway_reset" },
	{ 0xbbb1b449, "usbnet_set_msglevel" },
	{ 0x74f2d629, "usbnet_get_msglevel" },
	{ 0x3955ca2c, "usbnet_get_stats64" },
	{ 0x7b701397, "usbnet_tx_timeout" },
	{ 0xdf6243ae, "usbnet_change_mtu" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xbcd6a603, "usbnet_start_xmit" },
	{ 0x59533824, "usbnet_stop" },
	{ 0x8e802ca9, "usbnet_open" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0xc5850110, "printk" },
	{ 0x3fe052de, "usbnet_get_endpoints" },
	{ 0x90d266c2, "usbnet_link_change" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x216cc777, "netdev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a13356b, "usbnet_write_cmd" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb684db11, "usbnet_write_cmd_async" },
	{ 0xd07bb0e, "usbnet_read_cmd" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x472af948, "usbnet_get_drvinfo" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x4a9cf770, "mii_ethtool_gset" },
	{ 0x6083fda9, "mii_check_media" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfb578fc5, "memset" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3427d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "88F880724FC373218031BA7");
