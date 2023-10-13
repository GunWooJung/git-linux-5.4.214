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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8e6f784, "sb_min_blocksize" },
	{ 0xb6e0c8ca, "unload_nls" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x785adce, "generic_fh_to_parent" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x13f3503, "block_read_full_page" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xcd953ebe, "page_symlink_inode_operations" },
	{ 0x93864551, "generic_read_dir" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0x132d1553, "make_kgid" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xdc856bab, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x84ebb57, "d_obtain_alias" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x165ab360, "kmem_cache_create_usercopy" },
	{ 0xcd14d462, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0xfc81d1b7, "simple_symlink_inode_operations" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0xf96a1685, "__brelse" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xb58b489a, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x962f4536, "load_nls_default" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0x2cbbbb98, "sb_set_blocksize" },
	{ 0x913fddba, "d_make_root" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0xa7e3d5f7, "generic_fh_to_dentry" },
	{ 0xb63ecb4f, "generic_block_bmap" },
	{ 0xf5504e62, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3A0F600283F6052BDD500A4");
