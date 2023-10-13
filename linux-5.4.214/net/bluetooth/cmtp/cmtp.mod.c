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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0x53b954a2, "up_read" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x685258f2, "attach_capi_ctr" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x7618648b, "capi_ctr_handle_message" },
	{ 0xd488ac5c, "bt_sock_register" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xccbe1479, "capi_ctr_down" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc63abf34, "sock_no_recvmsg" },
	{ 0x307f745f, "bt_sock_unlink" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x4125c022, "l2cap_is_socket" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0xe5189980, "capi_ctr_ready" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x285c8d25, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x721c9d1f, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xca669996, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x26d315df, "bt_sock_link" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe369667c, "__module_put_and_exit" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x6f395e65, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba7d45f2, "sock_no_sendmsg" },
	{ 0xeae5711f, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x811beab4, "bt_procfs_init" },
	{ 0xed7beeaf, "detach_capi_ctr" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa61835f6, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "61A7AB0D6B6C2B8F00B4140");
