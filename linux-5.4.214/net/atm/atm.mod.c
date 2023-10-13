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
	{ 0xa24f23d8, "__request_module" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x3ce25513, "proc_create_seq_private" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xad2b26aa, "send_sig" },
	{ 0x7c4cb043, "_proc_mkdir" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xce2f01d5, "device_del" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x3885862f, "seq_putc" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x185eb439, "sock_wake_async" },
	{ 0x285c8d25, "sk_free" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x721c9d1f, "init_net" },
	{ 0x5fd264df, "__class_register" },
	{ 0x5748356e, "device_create_file" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xebb3f0e4, "__sock_recv_ts_and_drops" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xefde0a5a, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2290a925, "remove_proc_subtree" },
	{ 0x609c0d36, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xad263612, "consume_skb" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x3d81c1b, "skb_free_datagram" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC78AF5FACF3800643605C7");
