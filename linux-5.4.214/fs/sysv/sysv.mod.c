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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x771e3472, "iget_failed" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x87b013c, "drop_nlink" },
	{ 0x8d53ad17, "mark_buffer_dirty_inode" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x21c60db8, "__mark_inode_dirty" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd96ac110, "block_write_begin" },
	{ 0x2b5be168, "pagecache_get_page" },
	{ 0x25820c64, "fs_overflowuid" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xa97d7441, "__lock_page" },
	{ 0x6e69e88d, "__lock_buffer" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0x13f3503, "block_read_full_page" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x5e22538e, "__getblk_gfp" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2725b8da, "unlock_buffer" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x97f62668, "truncate_setsize" },
	{ 0x132d1553, "make_kgid" },
	{ 0x177d7d58, "__insert_inode_hash" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5518745, "from_kuid" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3edcee5d, "from_kgid" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0xe92bc7da, "setattr_copy" },
	{ 0xbb9d925f, "page_symlink" },
	{ 0xb487ff58, "sync_dirty_buffer" },
	{ 0x6bb2a8d7, "truncate_pagecache" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0xc487bc4e, "generic_file_read_iter" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0xf96a1685, "__brelse" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c2550b3, "invalidate_inode_buffers" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x63466ab8, "generic_file_mmap" },
	{ 0x5ca65f2a, "block_write_full_page" },
	{ 0xf884550a, "block_write_end" },
	{ 0x63f0b710, "truncate_inode_pages_final" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf8c4816, "generic_write_end" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x63e245f0, "inode_newsize_ok" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0xe3e95c26, "generic_file_write_iter" },
	{ 0xd5e16552, "iput" },
	{ 0x7e884088, "read_cache_page" },
	{ 0x3fbd36de, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x25795352, "page_get_link" },
	{ 0x2d800208, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7db9305a, "current_time" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0xbb684a8b, "block_truncate_page" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x439d8734, "__bforget" },
	{ 0x913fddba, "d_make_root" },
	{ 0x33cf35e9, "__block_write_begin" },
	{ 0xae7194ac, "mark_buffer_dirty" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0xd8b7614a, "write_one_page" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0x3b0173be, "new_inode" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0x75942744, "__put_page" },
	{ 0xb63ecb4f, "generic_block_bmap" },
	{ 0xf5504e62, "iget_locked" },
	{ 0x8c564d59, "setattr_prepare" },
	{ 0xd43315ac, "generic_fillattr" },
	{ 0x81af08fb, "inode_init_owner" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xdf929370, "fs_overflowgid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B91687765C98A6D100185C5");
