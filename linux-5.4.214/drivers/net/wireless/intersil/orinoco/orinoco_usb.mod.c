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
	{ 0x8df19d5, "orinoco_tx_timeout" },
	{ 0x87870897, "orinoco_change_mtu" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x6e9ddbfb, "orinoco_set_multicast_list" },
	{ 0x85ecb883, "orinoco_stop" },
	{ 0x9c99d308, "orinoco_open" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x5c8f0410, "free_orinocodev" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0x4dce64c0, "orinoco_if_del" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x60cd493a, "orinoco_if_add" },
	{ 0xc36d70d, "orinoco_init" },
	{ 0x80500894, "request_firmware" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5e49ff3b, "alloc_orinocodev" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xad263612, "consume_skb" },
	{ 0xf1697e72, "orinoco_process_xmit_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xb72c9b3e, "__orinoco_ev_rx" },
	{ 0x981fd46c, "__orinoco_ev_info" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "orinoco,cfg80211");

MODULE_ALIAS("usb:v049Fp001Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D98p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Cp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5002d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5B11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630pFF81d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep047Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A63F670A70B0519844A8471");
