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
	{ 0xffd8af80, "sock_init_data" },
	{ 0x53b954a2, "up_read" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xd488ac5c, "bt_sock_register" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc63abf34, "sock_no_recvmsg" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x307f745f, "bt_sock_unlink" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x4125c022, "l2cap_is_socket" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x285c8d25, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x721c9d1f, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xca669996, "fput" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x26d315df, "bt_sock_link" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xe369667c, "__module_put_and_exit" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x6f395e65, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0xba7d45f2, "sock_no_sendmsg" },
	{ 0xeae5711f, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x811beab4, "bt_procfs_init" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa61835f6, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5EB8AAF4BEA7B3157007CA8");
