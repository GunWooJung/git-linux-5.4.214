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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1e7734c8, "rt2x00mac_tx_frames_pending" },
	{ 0x964986f1, "rt2x00mac_get_ringparam" },
	{ 0x733e30ed, "rt2x00mac_get_antenna" },
	{ 0xf3ad68fc, "rt2x00mac_set_antenna" },
	{ 0x6aba24fb, "rt2x00mac_flush" },
	{ 0x9dad6b22, "rt2x00mac_rfkill_poll" },
	{ 0xe23c7ed9, "rt2x00mac_conf_tx" },
	{ 0xc74fa762, "rt2x00mac_get_stats" },
	{ 0x308ca0f6, "rt2x00mac_sw_scan_complete" },
	{ 0x57a396d3, "rt2x00mac_sw_scan_start" },
	{ 0x6eb373ad, "rt2x00mac_set_key" },
	{ 0x8ba5066b, "rt2x00mac_set_tim" },
	{ 0xa02e506d, "rt2x00mac_configure_filter" },
	{ 0x8988dd91, "rt2x00mac_bss_info_changed" },
	{ 0x93fd86f7, "rt2x00mac_config" },
	{ 0xd3a4533f, "rt2x00mac_remove_interface" },
	{ 0x3b1d761f, "rt2x00mac_add_interface" },
	{ 0x9c516176, "rt2x00mac_stop" },
	{ 0x1522efba, "rt2x00mac_start" },
	{ 0xb66f22f3, "rt2x00mac_tx" },
	{ 0x6db5b882, "rt2x00usb_flush_queue" },
	{ 0x185e8b68, "rt2x00usb_kick_queue" },
	{ 0x19d874d5, "rt2x00usb_watchdog" },
	{ 0x2c4d240a, "rt2x00usb_clear_entry" },
	{ 0xffc2965f, "rt2x00usb_uninitialize" },
	{ 0x8a2568f7, "rt2x00usb_initialize" },
	{ 0x3f347284, "rt2x00usb_resume" },
	{ 0x5706e6f6, "rt2x00usb_suspend" },
	{ 0x702f79dd, "rt2x00usb_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcdc3768f, "rt2x00lib_set_mac_address" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xcb913cac, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ca1557, "rt2x00usb_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd1a94a87, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd523d85d, "skb_push" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xad263612, "consume_skb" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa414de5d, "rt2x00usb_vendor_request_buff" },
	{ 0x91322304, "rt2x00usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00usb");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C9B29288CE51AC926D77AF");
