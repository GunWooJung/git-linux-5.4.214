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
	{ 0x6a5fa363, "sigprocmask" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x771e3472, "iget_failed" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x87b013c, "drop_nlink" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x8cdc4811, "mtd_point" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x53b954a2, "up_read" },
	{ 0x3cbea2d0, "mtd_block_isbad" },
	{ 0xe4e6e24b, "make_bad_inode" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x11c536c6, "dequeue_signal" },
	{ 0x16d59e28, "d_invalidate" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xad2b26aa, "send_sig" },
	{ 0x785adce, "generic_fh_to_parent" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4882e3f4, "is_bad_inode" },
	{ 0xcbb0ba5d, "generic_file_open" },
	{ 0x241f9e63, "posix_acl_access_xattr_handler" },
	{ 0x3f12dab6, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xed4ab78c, "d_instantiate_new" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfc2d02cc, "mtd_write" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x97f62668, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x614e67b5, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x132d1553, "make_kgid" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5518745, "from_kuid" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6bb267ff, "posix_acl_chmod" },
	{ 0x8e97cbb1, "mtd_read" },
	{ 0x84ebb57, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x3edcee5d, "from_kgid" },
	{ 0x4ef20226, "security_inode_init_security" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xbee380ba, "posix_acl_alloc" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfb957b7f, "mtd_write_oob" },
	{ 0xe8e67fd4, "insert_inode_locked" },
	{ 0x820e18de, "set_cached_acl" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0xc487bc4e, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xac9c6d9a, "mtd_block_markbad" },
	{ 0x18387799, "posix_acl_create" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x38fd1d77, "file_write_and_wait_range" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x9b8cb0e8, "ilookup" },
	{ 0xa916b694, "strnlen" },
	{ 0x63f0b710, "truncate_inode_pages_final" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x46091b06, "kill_mtd_super" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3959635a, "simple_get_link" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xd7039b79, "fs_parse" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0xe3e95c26, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3290abba, "logfc" },
	{ 0x8487ac12, "generic_file_readonly_mmap" },
	{ 0x9ca5085f, "mtd_unpoint" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd5e16552, "iput" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7e884088, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d800208, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x7db9305a, "current_time" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0xeae5711f, "set_user_nice" },
	{ 0x787c882b, "lzo1x_1_compress" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x913fddba, "d_make_root" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x2ea047ba, "posix_acl_default_xattr_handler" },
	{ 0xca9360b5, "rb_next" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x2a09e136, "mtd_kmalloc_up_to" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0x2a014eef, "get_tree_mtd" },
	{ 0x29361773, "complete" },
	{ 0x19903a61, "mtd_writev" },
	{ 0x3b0173be, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xa7e3d5f7, "generic_fh_to_dentry" },
	{ 0x61a1a281, "grab_cache_page_write_begin" },
	{ 0x92fb829d, "mtd_read_oob" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x75942744, "__put_page" },
	{ 0xbeaf53fd, "clear_nlink" },
	{ 0xf5504e62, "iget_locked" },
	{ 0x8c564d59, "setattr_prepare" },
	{ 0xe914e41e, "strcpy" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "D0494B4AF32E7F743C66783");
