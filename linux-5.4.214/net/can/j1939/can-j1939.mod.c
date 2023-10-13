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
	{ 0xa0554d18, "release_sock" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xbb951859, "can_rx_register" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xbc7ec408, "can_proto_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x11546c58, "netdev_alert" },
	{ 0x92667320, "sock_queue_err_skb" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xba2c8b02, "sock_efree" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3ed29fa2, "sock_recv_errqueue" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xd523d85d, "skb_push" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0x285c8d25, "sk_free" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x59f18d51, "can_send" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xebb3f0e4, "__sock_recv_ts_and_drops" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe039923f, "can_proto_register" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0x3c6c0490, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x1d0942c, "can_sock_destruct" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x4b51a837, "can_rx_unregister" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3d81c1b, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "3F81E09038B96457526A8E5");
