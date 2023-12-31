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
	{ 0x2d3385d3, "system_wq" },
	{ 0x282e8498, "ieee80211_rx_irqsafe" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7aaba4d8, "usb_init_urb" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0x67876151, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211");

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0108d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3319d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0109d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB720d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1058p0631d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04BBp094Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1E1Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p330Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vCDABp8010d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04BBp0950d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v06F8pE035d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0789p016Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp2E2Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E66p0020d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0107d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB33d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Cd*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "596CF674E438898434BC784");
