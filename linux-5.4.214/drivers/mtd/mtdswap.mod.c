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
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x62b71abe, "deregister_mtd_blktrans" },
	{ 0x2c0a8f1, "register_mtd_blktrans" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7843fc5, "add_mtd_blktrans_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3cbea2d0, "mtd_block_isbad" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x52223c66, "mtd_blktrans_cease_background" },
	{ 0xfc2d02cc, "mtd_write" },
	{ 0x92fb829d, "mtd_read_oob" },
	{ 0xfb578fc5, "memset" },
	{ 0xece784c2, "rb_first" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8e97cbb1, "mtd_read" },
	{ 0xfb957b7f, "mtd_write_oob" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x760a0f4f, "yield" },
	{ 0x614e67b5, "mtd_erase" },
	{ 0xac9c6d9a, "mtd_block_markbad" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7ee415d5, "single_open" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x7a6923cc, "del_mtd_blktrans_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd");


MODULE_INFO(srcversion, "55E2920964B9B27CB84736E");
