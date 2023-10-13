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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8cdc4811, "mtd_point" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x242f3bba, "vmf_insert_mixed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc8b5efda, "get_tree_bdev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcd953ebe, "page_symlink_inode_operations" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x132d1553, "make_kgid" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcd14d462, "generic_ro_fops" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x4bb8047f, "wait_on_page_bit" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0xc487bc4e, "generic_file_read_iter" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x46091b06, "kill_mtd_super" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3290abba, "logfc" },
	{ 0x8487ac12, "generic_file_readonly_mmap" },
	{ 0x9ca5085f, "mtd_unpoint" },
	{ 0x7e884088, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0x913fddba, "d_make_root" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0x2a014eef, "get_tree_mtd" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0x75942744, "__put_page" },
	{ 0xf5504e62, "iget_locked" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "B70DDCA38FD0722D56ABA8B");
