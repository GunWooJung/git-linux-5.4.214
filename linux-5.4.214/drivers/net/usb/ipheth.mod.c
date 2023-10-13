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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x190599d3, "usb_altnum_to_altsetting" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "5AF0F47CA16B4E15EC1DE57");
