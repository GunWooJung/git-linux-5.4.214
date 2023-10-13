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
	{ 0xf1ee853d, "crypto_alloc_skcipher" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xa0554d18, "release_sock" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x53b954a2, "up_read" },
	{ 0xcbdd2046, "skb_to_sgvec" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0xa942e96a, "bpf_trace_run7" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x607d43c4, "csum_and_copy_from_iter_full" },
	{ 0x7c4cb043, "_proc_mkdir" },
	{ 0xb6d603e5, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x7adc0fbf, "rb_replace_node_rcu" },
	{ 0x8629086e, "sock_release" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5a955fde, "skb_copy" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xec01448a, "generic_key_instantiate" },
	{ 0xbec4f55, "request_key_tag" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdbcda658, "sock_create_kern" },
	{ 0xc622556f, "prepare_to_wait_exclusive" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc9e43b93, "keyring_search" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xe171eab3, "proc_remove" },
	{ 0x93e2c27e, "crypto_alloc_sync_skcipher" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0x2364da19, "key_validate" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9c23d3bb, "key_revoke" },
	{ 0x9c5412bb, "kernel_setsockopt" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x84096bf7, "__sock_recv_wifi_status" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x954f099c, "idr_preload" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x185eb439, "sock_wake_async" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x285c8d25, "sk_free" },
	{ 0xbdae77f, "bpf_trace_run5" },
	{ 0xa07a37f0, "memchr" },
	{ 0x5efde8e6, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x721c9d1f, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x75e60613, "key_put" },
	{ 0x535669eb, "__sock_recv_timestamp" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x79be1f9a, "proto_register" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xefde0a5a, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x3c6c0490, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfc8e3c98, "register_key_type" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xc84a0a7e, "seq_hlist_start_rcu" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3031bdf, "key_instantiate_and_link" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xed1db24, "sock_dequeue_err_skb" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xc1c4eaca, "key_type_keyring" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x422ce162, "unregister_key_type" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x9fe57d9, "kernel_bind" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x79a37c17, "bpf_trace_run6" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xad263612, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x74e5ff1a, "udpv6_encap_enable" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0x167874d5, "key_alloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1A2FD48CE53A94236BCD983");