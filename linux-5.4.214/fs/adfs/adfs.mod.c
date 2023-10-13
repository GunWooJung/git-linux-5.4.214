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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x21c60db8, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x1027f50f, "generic_delete_inode" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x13f3503, "block_read_full_page" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x93864551, "generic_read_dir" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97f62668, "truncate_setsize" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0x132d1553, "make_kgid" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd6e37258, "set_nlink" },
	{ 0xb487ff58, "sync_dirty_buffer" },
	{ 0x6bb2a8d7, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xc487bc4e, "generic_file_read_iter" },
	{ 0xf96a1685, "__brelse" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x63466ab8, "generic_file_mmap" },
	{ 0x5ca65f2a, "block_write_full_page" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf8c4816, "generic_write_end" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0xe3e95c26, "generic_file_write_iter" },
	{ 0xb33f6809, "cont_write_begin" },
	{ 0x3fbd36de, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7db9305a, "current_time" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x913fddba, "d_make_root" },
	{ 0xae7194ac, "mark_buffer_dirty" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x3b0173be, "new_inode" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0xb63ecb4f, "generic_block_bmap" },
	{ 0x8c564d59, "setattr_prepare" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D9C3DDBDD875653F51F3C7E");
