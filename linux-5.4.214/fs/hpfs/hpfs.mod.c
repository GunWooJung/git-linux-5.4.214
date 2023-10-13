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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x87b013c, "drop_nlink" },
	{ 0xe4e6e24b, "make_bad_inode" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xcd953ebe, "page_symlink_inode_operations" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x5e22538e, "__getblk_gfp" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x97f62668, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0x132d1553, "make_kgid" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x177d7d58, "__insert_inode_hash" },
	{ 0x75ffe6ed, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5518745, "from_kuid" },
	{ 0xc2367efe, "mpage_readpage" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0xa0bffcc2, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x3edcee5d, "from_kgid" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x3e2dfaa8, "__wait_on_buffer" },
	{ 0xe92bc7da, "setattr_copy" },
	{ 0xb487ff58, "sync_dirty_buffer" },
	{ 0x6bb2a8d7, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0xc487bc4e, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0xf96a1685, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x38fd1d77, "file_write_and_wait_range" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x70771f7c, "generic_block_fiemap" },
	{ 0x63466ab8, "generic_file_mmap" },
	{ 0x5ca65f2a, "block_write_full_page" },
	{ 0x57cb88d1, "sync_blockdev" },
	{ 0x63f0b710, "truncate_inode_pages_final" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf8c4816, "generic_write_end" },
	{ 0x883c5e16, "__breadahead" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x63e245f0, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0xe3e95c26, "generic_file_write_iter" },
	{ 0xd5e16552, "iput" },
	{ 0xb33f6809, "cont_write_begin" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x913fddba, "d_make_root" },
	{ 0xfce4a2eb, "__find_get_block" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xae7194ac, "mark_buffer_dirty" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0x3b0173be, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0xb63ecb4f, "generic_block_bmap" },
	{ 0xbeaf53fd, "clear_nlink" },
	{ 0xf5504e62, "iget_locked" },
	{ 0x8c564d59, "setattr_prepare" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6894275D7F956A98B4A6CAB");
