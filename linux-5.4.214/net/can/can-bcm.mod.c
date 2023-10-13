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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbb951859, "can_rx_register" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0x7c4cb043, "_proc_mkdir" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xbc7ec408, "can_proto_unregister" },
	{ 0x6405a8b, "proc_create_net_single" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0xba2c8b02, "sock_efree" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x3885862f, "seq_putc" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0x285c8d25, "sk_free" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x59f18d51, "can_send" },
	{ 0xebb3f0e4, "__sock_recv_ts_and_drops" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe039923f, "can_proto_register" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x4b51a837, "can_rx_unregister" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3d81c1b, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "4C4C5F64E75B1DF3A9E3C19");
