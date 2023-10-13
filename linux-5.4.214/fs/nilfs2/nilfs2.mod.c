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
	{ 0xe7750f8, "kobject_put" },
	{ 0x6d6b9626, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x442f5afa, "fs_bio_set" },
	{ 0x771e3472, "iget_failed" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x87b013c, "drop_nlink" },
	{ 0xb8e6f784, "sb_min_blocksize" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0xe4e6e24b, "make_bad_inode" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x21c60db8, "__mark_inode_dirty" },
	{ 0x8bb3d98e, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5a4cf77a, "filemap_fault" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2657f4bc, "iget5_locked" },
	{ 0x1d9148d7, "find_get_pages_contig" },
	{ 0x1ae67494, "bdev_read_only" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd2152b9f, "block_invalidatepage" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x120d2046, "block_is_partially_uptodate" },
	{ 0xd96ac110, "block_write_begin" },
	{ 0xca9beaa4, "__xa_store" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x4882e3f4, "is_bad_inode" },
	{ 0x21d84603, "blkdev_issue_flush" },
	{ 0x2b5be168, "pagecache_get_page" },
	{ 0xa7ff2b8d, "touch_buffer" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xcbb0ba5d, "generic_file_open" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa97d7441, "__lock_page" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x6e69e88d, "__lock_buffer" },
	{ 0x9596672c, "touch_atime" },
	{ 0x855984bf, "deactivate_locked_super" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x561501a1, "dput" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0xea7a2654, "d_find_alias" },
	{ 0x26d3b50a, "pagevec_lookup_range" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0xed4ab78c, "d_instantiate_new" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x5e22538e, "__getblk_gfp" },
	{ 0x94f526f9, "igrab" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2725b8da, "unlock_buffer" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xce291505, "redirty_page_for_writepage" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xcb9813d7, "pagevec_lookup_range_tag" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd2f5a36, "insert_inode_locked4" },
	{ 0x97f62668, "truncate_setsize" },
	{ 0x668b19a1, "down_read" },
	{ 0x1513326f, "end_page_writeback" },
	{ 0x132d1553, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6b0e95e7, "inode_owner_or_capable" },
	{ 0x75ffe6ed, "mpage_readpages" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5518745, "from_kuid" },
	{ 0xc2367efe, "mpage_readpage" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0xf3735ac6, "d_obtain_root" },
	{ 0xf08627c2, "inode_add_bytes" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x84ebb57, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe9af7397, "__xa_set_mark" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0x288e8638, "sget" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x3f9ca0c4, "__sync_dirty_buffer" },
	{ 0x3edcee5d, "from_kgid" },
	{ 0x494eca78, "blkdev_get_by_path" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3e2dfaa8, "__wait_on_buffer" },
	{ 0xf7bb3566, "file_update_time" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe92bc7da, "setattr_copy" },
	{ 0xbdae77f, "bpf_trace_run5" },
	{ 0xbb9d925f, "page_symlink" },
	{ 0x9be43240, "wait_on_page_writeback" },
	{ 0xb487ff58, "sync_dirty_buffer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6bb2a8d7, "truncate_pagecache" },
	{ 0xb9af1d0d, "__xa_clear_mark" },
	{ 0xb9eafa33, "vfs_ioc_setflags_prepare" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0xc487bc4e, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0xf96a1685, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xaf3da619, "__inode_attach_wb" },
	{ 0xa239ac16, "bio_put" },
	{ 0xc7f1ea69, "ilookup5" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x34b25bc2, "mnt_drop_write_file" },
	{ 0xbb440ada, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x65e83bab, "blkdev_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x33b84f74, "copy_page" },
	{ 0x9c74baeb, "wait_for_stable_page" },
	{ 0x127370dd, "fs_kobj" },
	{ 0xe3b77e72, "inode_sub_bytes" },
	{ 0xf884550a, "block_write_end" },
	{ 0x63f0b710, "truncate_inode_pages_final" },
	{ 0xc21f92bf, "create_empty_buffers" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xaf8c4816, "generic_write_end" },
	{ 0x883c5e16, "__breadahead" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x47618a01, "mnt_want_write_file" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x8648ffe8, "shrink_dcache_parent" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc55ab714, "clear_page_dirty_for_io" },
	{ 0x879b07c, "submit_bh" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe3e95c26, "generic_file_write_iter" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcf7d19b, "__pagevec_release" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x58988ea8, "__test_set_page_writeback" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0xd5e16552, "iput" },
	{ 0x7e884088, "read_cache_page" },
	{ 0xfc47ffbe, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xd7c96ca4, "generic_permission" },
	{ 0xee82fa5f, "inode_dio_wait" },
	{ 0x25795352, "page_get_link" },
	{ 0x2d800208, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc1a20382, "__sb_end_write" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x7db9305a, "current_time" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x4fcb4426, "block_page_mkwrite" },
	{ 0xdf96d036, "end_buffer_read_sync" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0x7317aa0a, "invalidate_mapping_pages" },
	{ 0xbb684a8b, "block_truncate_page" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x19710dc3, "__sb_start_write" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x913fddba, "d_make_root" },
	{ 0x2c40c1c2, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1186b4f0, "inode_set_flags" },
	{ 0x33cf35e9, "__block_write_begin" },
	{ 0xae7194ac, "mark_buffer_dirty" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc457f547, "filemap_map_pages" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e78d1ad, "fiemap_check_flags" },
	{ 0x3b0173be, "new_inode" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0x13d57096, "empty_aops" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0xbeaf53fd, "clear_nlink" },
	{ 0x8c564d59, "setattr_prepare" },
	{ 0x81af08fb, "inode_init_owner" },
	{ 0x507c2520, "__page_file_index" },
	{ 0x8bd7d9d9, "truncate_inode_pages" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C67743498F42F02E487FD60");