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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x541932b5, "kernel_write" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x8629086e, "sock_release" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x44e9a829, "match_token" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x85df9b6c, "strsep" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x132d1553, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a5c8f69, "kernel_read" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xa5518745, "from_kuid" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x87a17f30, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x3edcee5d, "from_kgid" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x954f099c, "idr_preload" },
	{ 0x165ab360, "kmem_cache_create_usercopy" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4e3567f7, "match_int" },
	{ 0xca669996, "fput" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe3976b9a, "sock_alloc_file" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x9fe57d9, "kernel_bind" },
	{ 0xebd6c021, "fget" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xfa1d449a, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x20978fb9, "idr_find" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xc08f78a8, "__sock_create" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2B21CA704B50A162BF2E0A9");
