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
	{ 0x765395c3, "param_ops_int" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x80500894, "request_firmware" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x754d539c, "strlen" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8D87F7CC5737A47E9D22582");
