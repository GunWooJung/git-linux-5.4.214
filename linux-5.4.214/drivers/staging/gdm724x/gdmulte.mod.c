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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe428c6a2, "netlink_has_listeners" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8629086e, "sock_release" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x12d7640b, "usb_enable_autosuspend" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xec6bedce, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1076p8000d*dc*dsc*dp*ic02isc06ip*in*");
MODULE_ALIAS("usb:v1076p9000d*dc*dsc*dp*ic02isc06ip*in*");

MODULE_INFO(srcversion, "B5455AFC0A96D9E6C56A8F3");
