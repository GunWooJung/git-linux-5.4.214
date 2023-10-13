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
	{ 0x771e3472, "iget_failed" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe4e6e24b, "make_bad_inode" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x21c60db8, "__mark_inode_dirty" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xd96ac110, "block_write_begin" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0x13f3503, "block_read_full_page" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x93864551, "generic_read_dir" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x97f62668, "truncate_setsize" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0x132d1553, "make_kgid" },
	{ 0x177d7d58, "__insert_inode_hash" },
	{ 0x75ffe6ed, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa0bffcc2, "mpage_writepages" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe92bc7da, "setattr_copy" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb487ff58, "sync_dirty_buffer" },
	{ 0x6bb2a8d7, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xc487bc4e, "generic_file_read_iter" },
	{ 0xf96a1685, "__brelse" },
	{ 0xa916b694, "strnlen" },
	{ 0x63466ab8, "generic_file_mmap" },
	{ 0x5ca65f2a, "block_write_full_page" },
	{ 0x63f0b710, "truncate_inode_pages_final" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf8c4816, "generic_write_end" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x63e245f0, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x552dad9, "register_filesystem" },
	{ 0xe3e95c26, "generic_file_write_iter" },
	{ 0xd5e16552, "iput" },
	{ 0x3fbd36de, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7db9305a, "current_time" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x913fddba, "d_make_root" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xae7194ac, "mark_buffer_dirty" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x3b0173be, "new_inode" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0xb63ecb4f, "generic_block_bmap" },
	{ 0xbeaf53fd, "clear_nlink" },
	{ 0xf5504e62, "iget_locked" },
	{ 0x8c564d59, "setattr_prepare" },
	{ 0x81af08fb, "inode_init_owner" },
};

MODULE_INFO(depends, "crc-itu-t");


MODULE_INFO(srcversion, "C24FEBAB97DD9FFB830CD4C");
