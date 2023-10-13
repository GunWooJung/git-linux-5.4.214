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
	{ 0x62b71abe, "deregister_mtd_blktrans" },
	{ 0x2c0a8f1, "register_mtd_blktrans" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7843fc5, "add_mtd_blktrans_dev" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x92fb829d, "mtd_read_oob" },
	{ 0xfb578fc5, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3cbea2d0, "mtd_block_isbad" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8e97cbb1, "mtd_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a6923cc, "del_mtd_blktrans_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd");


MODULE_INFO(srcversion, "0E96A5372C10C1FE2302AC3");
