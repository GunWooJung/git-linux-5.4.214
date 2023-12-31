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
	{ 0x6d6b9626, "blkdev_issue_discard" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x442f5afa, "fs_bio_set" },
	{ 0x771e3472, "iget_failed" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x87b013c, "drop_nlink" },
	{ 0x53b954a2, "up_read" },
	{ 0xb6e0c8ca, "unload_nls" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0xe4e6e24b, "make_bad_inode" },
	{ 0x37f09cb1, "dquot_get_next_dqblk" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x21c60db8, "__mark_inode_dirty" },
	{ 0x1eca4d59, "dquot_writeback_dquots" },
	{ 0x8bb3d98e, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0x2665db8c, "posix_acl_to_xattr" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x785adce, "generic_fh_to_parent" },
	{ 0xe0e2cc93, "dquot_file_open" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4882e3f4, "is_bad_inode" },
	{ 0x2b5be168, "pagecache_get_page" },
	{ 0x241f9e63, "posix_acl_access_xattr_handler" },
	{ 0x3f12dab6, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa97d7441, "__lock_page" },
	{ 0x8e4eefd9, "filemap_write_and_wait" },
	{ 0x6e69e88d, "__lock_buffer" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x1a5dfae2, "nobh_write_begin" },
	{ 0xcab3d205, "dquot_quota_off" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x6b63791d, "filemap_fdatawait_range" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8abb7481, "__dquot_free_space" },
	{ 0xcd953ebe, "page_symlink_inode_operations" },
	{ 0xed4ab78c, "d_instantiate_new" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x5e22538e, "__getblk_gfp" },
	{ 0x94f526f9, "igrab" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2725b8da, "unlock_buffer" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1d72b965, "__dquot_alloc_space" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xce291505, "redirty_page_for_writepage" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbea19a52, "set_page_dirty" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xb4c2864c, "dquot_get_dqblk" },
	{ 0x97f62668, "truncate_setsize" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x1513326f, "end_page_writeback" },
	{ 0x132d1553, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6b0e95e7, "inode_owner_or_capable" },
	{ 0x75ffe6ed, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5518745, "from_kuid" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0xc2367efe, "mpage_readpage" },
	{ 0xf08627c2, "inode_add_bytes" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3a7a66ef, "dquot_alloc_inode" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x6bb267ff, "posix_acl_chmod" },
	{ 0x84ebb57, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0xf1e046cc, "panic" },
	{ 0xa0bffcc2, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x3edcee5d, "from_kgid" },
	{ 0x4ef20226, "security_inode_init_security" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe92bc7da, "setattr_copy" },
	{ 0x1ce66144, "dquot_resume" },
	{ 0x9be43240, "wait_on_page_writeback" },
	{ 0xe8e67fd4, "insert_inode_locked" },
	{ 0xb487ff58, "sync_dirty_buffer" },
	{ 0x6bb2a8d7, "truncate_pagecache" },
	{ 0x165ab360, "kmem_cache_create_usercopy" },
	{ 0x1ad5f958, "blkdev_get_by_dev" },
	{ 0x820e18de, "set_cached_acl" },
	{ 0xb9eafa33, "vfs_ioc_setflags_prepare" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0xc487bc4e, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0x18387799, "posix_acl_create" },
	{ 0xf96a1685, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa239ac16, "bio_put" },
	{ 0x1a50c762, "dquot_set_dqblk" },
	{ 0x38fd1d77, "file_write_and_wait_range" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x34b25bc2, "mnt_drop_write_file" },
	{ 0xbb440ada, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3102954b, "xattr_full_name" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x65e83bab, "blkdev_put" },
	{ 0x211e1a50, "dquot_quota_on" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x1de2e96c, "dquot_operations" },
	{ 0x593d719, "dquot_initialize" },
	{ 0x63466ab8, "generic_file_mmap" },
	{ 0x5ca65f2a, "block_write_full_page" },
	{ 0x57cb88d1, "sync_blockdev" },
	{ 0x63f0b710, "truncate_inode_pages_final" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb58b489a, "load_nls" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x82d07ae7, "posix_acl_from_xattr" },
	{ 0x3a42ad5b, "dquot_quota_sync" },
	{ 0x1953c958, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x47618a01, "mnt_want_write_file" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x63e245f0, "inode_newsize_ok" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3959635a, "simple_get_link" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x39d9952e, "dquot_drop" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x5666d642, "dquot_transfer" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe3e95c26, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2290a925, "remove_proc_subtree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x58988ea8, "__test_set_page_writeback" },
	{ 0xa37bd8d0, "iter_file_splice_write" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd5e16552, "iput" },
	{ 0x7e884088, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xee82fa5f, "inode_dio_wait" },
	{ 0x25795352, "page_get_link" },
	{ 0x2d800208, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7db9305a, "current_time" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x439d8734, "__bforget" },
	{ 0x913fddba, "d_make_root" },
	{ 0x2c40c1c2, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1186b4f0, "inode_set_flags" },
	{ 0x2ea047ba, "posix_acl_default_xattr_handler" },
	{ 0xae7194ac, "mark_buffer_dirty" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0xab0c7ffe, "nobh_write_end" },
	{ 0xd8b7614a, "write_one_page" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0xa8ae3cc6, "dquot_get_state" },
	{ 0x3b0173be, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0x307455cc, "dquot_free_inode" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xe041a7ec, "discard_new_inode" },
	{ 0x6c17a159, "dquot_disable" },
	{ 0xa7e3d5f7, "generic_fh_to_dentry" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7241a94, "dquot_set_dqinfo" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x41763c77, "nobh_truncate_page" },
	{ 0x75942744, "__put_page" },
	{ 0x5063f8f4, "filemap_flush" },
	{ 0xb63ecb4f, "generic_block_bmap" },
	{ 0xbeaf53fd, "clear_nlink" },
	{ 0x760a0f4f, "yield" },
	{ 0xf5504e62, "iget_locked" },
	{ 0x8c564d59, "setattr_prepare" },
	{ 0x715c4d54, "filemap_fdatawrite" },
	{ 0x81af08fb, "inode_init_owner" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8bd7d9d9, "truncate_inode_pages" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "987CF45A2D7D8093CEF0174");
