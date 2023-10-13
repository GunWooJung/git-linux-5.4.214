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
	{ 0x47c16c05, "cdc_ncm_change_mtu" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xbcd6a603, "usbnet_start_xmit" },
	{ 0x59533824, "usbnet_stop" },
	{ 0x8e802ca9, "usbnet_open" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xed422f8, "in6_dev_finish_destroy" },
	{ 0x1819bd32, "__vlan_find_dev_deep_rcu" },
	{ 0xc2f29a5a, "ipv6_stub" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7db184bd, "cdc_ncm_rx_verify_ndp16" },
	{ 0xf95fd05a, "cdc_ncm_rx_verify_nth16" },
	{ 0x9863683c, "usb_match_id" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x8bfe4e63, "usb_cdc_wdm_register" },
	{ 0x993e6b88, "cdc_ncm_bind_common" },
	{ 0x740e373, "cdc_ncm_select_altsetting" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0x93308a1c, "cdc_ncm_unbind" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x87432460, "cdc_ncm_fill_tx_frame" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x216cc777, "netdev_err" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1071d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "FFBFB93D2B411F3E4ECD5DD");
