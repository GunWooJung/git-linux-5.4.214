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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x771e3472, "iget_failed" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8e6f784, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xb6e0c8ca, "unload_nls" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2657f4bc, "iget5_locked" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x2b5be168, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7cb22b73, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xcd953ebe, "page_symlink_inode_operations" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x5e22538e, "__getblk_gfp" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0x132d1553, "make_kgid" },
	{ 0x75ffe6ed, "mpage_readpages" },
	{ 0xc2367efe, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x84ebb57, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3e2dfaa8, "__wait_on_buffer" },
	{ 0xa07a37f0, "memchr" },
	{ 0xcd14d462, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0xf96a1685, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb58b489a, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd5e16552, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x913fddba, "d_make_root" },
	{ 0x9f070845, "ioctl_by_bdev" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0x75942744, "__put_page" },
	{ 0xb63ecb4f, "generic_block_bmap" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B4CA2928B68BE9B708CAED4");
