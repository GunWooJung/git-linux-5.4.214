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
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0xac9c6d9a, "mtd_block_markbad" },
	{ 0xffd35c9, "nand_create_bbt" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdd887c35, "filp_open" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3ae5364c, "nand_release" },
	{ 0x5566c033, "nand_scan_with_ids" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x541932b5, "kernel_write" },
	{ 0x6a5c8f69, "kernel_read" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xaef28232, "filp_close" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x7ee415d5, "single_open" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xf62693fb, "write_inode_now" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0x2b5be168, "pagecache_get_page" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,nand");


MODULE_INFO(srcversion, "818BB99526E015E0E3110A7");
