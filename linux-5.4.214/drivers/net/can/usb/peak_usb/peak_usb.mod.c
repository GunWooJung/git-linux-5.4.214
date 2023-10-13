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
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0x754d539c, "strlen" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x63616516, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x8acc823e, "close_candev" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0x176c3eb9, "can_change_state" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x44e7928f, "open_candev" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x3795f377, "alloc_canfd_skb" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0x4778268d, "can_free_echo_skb" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5F352C3CBF669C33FB763D8");
