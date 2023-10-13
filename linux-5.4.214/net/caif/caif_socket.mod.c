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
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xb6d603e5, "sock_no_ioctl" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xefde0a5a, "sock_register" },
	{ 0xad2b26aa, "send_sig" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x285c8d25, "sk_free" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x9e3e305d, "cfpkt_set_prio" },
	{ 0x2a09f713, "cfpkt_fromnative" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x73f3fff1, "caif_disconnect_client" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0xf3140e8f, "caif_connect_client" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa0554d18, "release_sock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d81c1b, "skb_free_datagram" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0xb90c0044, "__sk_mem_schedule" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69828cc9, "sock_rfree" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7141c64f, "sk_filter_trim_cap" },
	{ 0x4a237e57, "cfpkt_tonative" },
	{ 0xc5850110, "printk" },
	{ 0xb7b6874e, "caif_free_client" },
	{ 0x9d20858c, "sk_stream_kill_queues" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1446b60a, "caif_client_register_refcnt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "caif");


MODULE_INFO(srcversion, "D950C1057EF770C62DC668B");
