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
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc8b5efda, "get_tree_bdev" },
	{ 0xcd953ebe, "page_symlink_inode_operations" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd6e37258, "set_nlink" },
	{ 0xa07a37f0, "memchr" },
	{ 0xcd14d462, "generic_ro_fops" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0xf96a1685, "__brelse" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x3290abba, "logfc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x913fddba, "d_make_root" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0xf5504e62, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C4BA2E08C93DFBD3388D5E");
