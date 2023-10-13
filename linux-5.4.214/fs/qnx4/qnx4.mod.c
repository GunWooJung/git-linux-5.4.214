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
	{ 0x3fe2ccbe, "memweight" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x13f3503, "block_read_full_page" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0xcd953ebe, "page_symlink_inode_operations" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x132d1553, "make_kgid" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x5a921311, "strncmp" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd6e37258, "set_nlink" },
	{ 0xcd14d462, "generic_ro_fops" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0xf96a1685, "__brelse" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x3fbd36de, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x913fddba, "d_make_root" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0xb63ecb4f, "generic_block_bmap" },
	{ 0xf5504e62, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A7ABBA87BCA4016E2DB7451");
