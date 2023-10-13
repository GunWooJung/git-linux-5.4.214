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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xad263612, "consume_skb" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EF75BEEA55A90E4552B141B");
