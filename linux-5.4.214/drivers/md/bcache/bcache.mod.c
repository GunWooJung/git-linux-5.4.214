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
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x6d6b9626, "blkdev_issue_discard" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8d104b58, "bio_split" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2491a84f, "kobject_get" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc29bf967, "strspn" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x4b434101, "generic_end_io_acct" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x405e0b51, "bd_link_disk_holder" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffa827, "sysfs_create_files" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6ae341b, "bioset_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe686abf, "bio_advance" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xdf6b3d8, "bio_free_pages" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf495631, "lookup_bdev" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x7542f943, "bio_reset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6b984e25, "__blkdev_driver_ioctl" },
	{ 0xfd7af9ef, "bio_init" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xde90e560, "bd_unlink_disk_holder" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x60c75e05, "blk_alloc_queue" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe2a6db01, "blk_queue_max_discard_sectors" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0x2a5f5ead, "zero_fill_bio_iter" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x420e5e3b, "bio_clone_fast" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x494eca78, "blkdev_get_by_path" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xfb481954, "vprintk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbdae77f, "bpf_trace_run5" },
	{ 0x6626afca, "down" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4f556428, "generic_make_request" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xe3a53f4c, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0x1bcc82bb, "generic_start_io_acct" },
	{ 0x57bc19d2, "down_write" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa6191095, "bio_endio" },
	{ 0xa239ac16, "bio_put" },
	{ 0x2b4d03e0, "kobject_uevent_env" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x45e06ec8, "bioset_exit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3201e4c2, "blk_queue_flag_clear" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xbb440ada, "submit_bio" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x65e83bab, "blkdev_put" },
	{ 0xe8726fa8, "unregister_shrinker" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x127370dd, "fs_kobj" },
	{ 0x6017cc7a, "bdevname" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x165f438e, "blk_queue_make_request" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc7d74a57, "bio_clone_blkg_association" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x6f395e65, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xeaf3cb23, "crc64_be" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xb6adb12a, "blk_queue_write_cache" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x98054025, "register_shrinker" },
	{ 0x7c914fde, "kobject_init" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xcf2a6966, "up" },
	{ 0x5fc40508, "__bio_clone_fast" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x93170790, "blk_fill_rwbs" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0xe3bac60c, "set_blocksize" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x722603f1, "bio_copy_data" },
	{ 0xd7e56a4e, "simple_strtoll" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7f34ad1e, "bdput" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x719e0e44, "add_uevent_var" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "crc64");


MODULE_INFO(srcversion, "5B53F49E1B345C65D5FE2A4");
