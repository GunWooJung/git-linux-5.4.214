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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xf2ab1070, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xaa3caba2, "rt2x00lib_dmastart" },
	{ 0xb32bd651, "rt2x00queue_flush_queue" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2051690d, "rt2x00queue_for_each_entry" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd0249529, "rt2x00queue_start_queue" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x103fb469, "rt2x00lib_remove_dev" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x777a9f0, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x4ae95457, "rt2x00lib_rxdone" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x938d0801, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd25d357a, "rt2x00lib_dmadone" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x2fbcc23d, "rt2x00lib_probe_dev" },
	{ 0xf9206971, "rt2x00queue_stop_queue" },
	{ 0x3bfa9c99, "rt2x00lib_suspend" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "690218B87698746F3580C77");
