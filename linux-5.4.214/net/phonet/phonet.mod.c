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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xa0554d18, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9aa9b4d1, "rtnl_notify" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0xc622556f, "prepare_to_wait_exclusive" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9abd0bb8, "sock_i_ino" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x861cb77f, "seq_pad" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3b6ae85b, "sk_common_release" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe7a438eb, "compat_sock_common_setsockopt" },
	{ 0xe2ed5a88, "sock_common_recvmsg" },
	{ 0x63616516, "netif_rx" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x47fd8ea4, "compat_sock_common_getsockopt" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0x9ff4f57b, "rtnl_register_module" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x285c8d25, "sk_free" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x721c9d1f, "init_net" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x112574c9, "__sk_receive_skb" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x79be1f9a, "proto_register" },
	{ 0x44dd60b7, "rtnl_set_sk_err" },
	{ 0xc2637667, "netlink_capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0xefde0a5a, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x12b6c202, "sock_common_setsockopt" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x12fb0a44, "sock_common_getsockopt" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0xad263612, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x473afe6b, "sock_i_uid" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x3d81c1b, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98B69A9345FC15649D98C15");
