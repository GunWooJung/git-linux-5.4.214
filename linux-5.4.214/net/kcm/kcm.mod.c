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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0554d18, "release_sock" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0xaad509c0, "strp_init" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc25bc19d, "strp_unpause" },
	{ 0x607d43c4, "csum_and_copy_from_iter_full" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x6f7d8454, "strp_data_ready" },
	{ 0x8629086e, "sock_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x6405a8b, "proc_create_net_single" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x69828cc9, "sock_rfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe677827a, "skb_unlink" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x454b3823, "sk_wait_data" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x6d0d4418, "strp_check_rcv" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x567986c, "sk_stream_wait_memory" },
	{ 0xed66f1c2, "strp_done" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xc608afe2, "__sk_mem_reclaim" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x285c8d25, "sk_free" },
	{ 0xca669996, "fput" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0xab0e28d1, "bpf_prog_get_type_dev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x79be1f9a, "proto_register" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x5988d059, "_copy_from_iter_full_nocache" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf58a9ae0, "kernel_sendpage" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0xefde0a5a, "sock_register" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0xe3976b9a, "sock_alloc_file" },
	{ 0x3a7986fc, "sock_alloc" },
	{ 0xb90c0044, "__sk_mem_schedule" },
	{ 0x21f9ac16, "sk_stream_error" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x63613cc3, "strp_stop" },
	{ 0x6f395e65, "__module_get" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x72a27900, "skb_splice_bits" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x12b87679, "fd_install" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7384ff24, "sk_page_frag_refill" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf5fa0fa1, "bpf_prog_put" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "38915553A635A5550439819");
