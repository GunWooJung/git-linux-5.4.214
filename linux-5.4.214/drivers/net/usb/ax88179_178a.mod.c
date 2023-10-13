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
	{ 0x811c7f44, "usbnet_nway_reset" },
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
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x4a9cf770, "mii_ethtool_gset" },
	{ 0x3fe052de, "usbnet_get_endpoints" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xb684db11, "usbnet_write_cmd_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x90d266c2, "usbnet_link_change" },
	{ 0xdd63661a, "usbnet_update_max_qlen" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x94749128, "usbnet_write_cmd_nopm" },
	{ 0x4a13356b, "usbnet_write_cmd" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xe6aa593e, "usbnet_read_cmd_nopm" },
	{ 0xd07bb0e, "usbnet_read_cmd" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xd523d85d, "skb_push" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB4426E16E22CE0222515D8");
