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
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0x5748356e, "device_create_file" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x44e7928f, "open_candev" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x63616516, "netif_rx" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8acc823e, "close_candev" },
	{ 0x216cc777, "netdev_err" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x4778268d, "can_free_echo_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0AB4p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AB4p0011d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F563AB217B3351A1AFC6868");
