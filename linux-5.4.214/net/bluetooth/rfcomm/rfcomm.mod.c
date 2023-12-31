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
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xa0554d18, "release_sock" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x7ee415d5, "single_open" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x8430cec7, "bt_sock_poll" },
	{ 0x8629086e, "sock_release" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x1f15eb23, "hci_register_cb" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0x92e0a034, "bt_sock_ioctl" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdbcda658, "sock_create_kern" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0xd488ac5c, "bt_sock_register" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97cc579a, "kernel_listen" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x5fe9c9c9, "hci_conn_check_secure" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x876ccf2f, "bt_sock_wait_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfba8f906, "bt_accept_enqueue" },
	{ 0x1d0147b9, "tty_port_put" },
	{ 0x307f745f, "bt_sock_unlink" },
	{ 0xf85c1f3a, "bt_accept_unlink" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x3d40860f, "hci_get_route" },
	{ 0xee621fea, "bt_accept_dequeue" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x84cd0ffc, "kernel_connect" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0x95b6b1bb, "hci_conn_security" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0xd52f19ab, "device_move" },
	{ 0x285c8d25, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x72a2e4be, "tty_vhangup" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0x26d315df, "bt_sock_link" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x36a900b2, "bt_debugfs" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c583112, "bt_sock_stream_recvmsg" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xf7ef0c42, "hci_unregister_cb" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x4c5a5f4b, "bt_sock_reclassify_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0xa5b65108, "tty_port_install" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbffedb98, "bt_sock_wait_ready" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x6f395e65, "__module_get" },
	{ 0xd0c2ac7b, "kernel_accept" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6b83a15e, "tty_port_tty_hangup" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x27362c6d, "hci_conn_switch_role" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae5711f, "set_user_nice" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x9fe57d9, "kernel_bind" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0x811beab4, "bt_procfs_init" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa61835f6, "bt_procfs_cleanup" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "6BC72A478C209DB6AF936DB");
