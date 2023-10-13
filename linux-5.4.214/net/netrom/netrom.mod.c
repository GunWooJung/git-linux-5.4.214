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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xa0554d18, "release_sock" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0x3ce25513, "proc_create_seq_private" },
	{ 0xd9533b21, "skb_append" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xad2b26aa, "send_sig" },
	{ 0x79fadd69, "sk_stop_timer" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa082ba5c, "ax25_linkfail_release" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x59efc5b3, "skb_set_owner_w" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5effb16b, "ax25_register_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x63616516, "netif_rx" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xba2c8b02, "sock_efree" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x4465d4f6, "ax25_listen_release" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0xd523d85d, "skb_push" },
	{ 0x285c8d25, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0x7d84bfa, "ax25_send_frame" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xd20f4854, "sk_reset_timer" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0xefde0a5a, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x7d59697, "ax25_listen_register" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0xc1444946, "ax25cmp" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0xf873eec4, "ax25_linkfail_register" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3d81c1b, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "75C6C5007148AA40D804213");
