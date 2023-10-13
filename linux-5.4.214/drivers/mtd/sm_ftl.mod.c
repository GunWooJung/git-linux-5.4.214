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
	{ 0x765395c3, "param_ops_int" },
	{ 0x62b71abe, "deregister_mtd_blktrans" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2c0a8f1, "register_mtd_blktrans" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7843fc5, "add_mtd_blktrans_dev" },
	{ 0x754d539c, "strlen" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x614e67b5, "mtd_erase" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfb957b7f, "mtd_write_oob" },
	{ 0xa43d1c72, "__nand_correct_data" },
	{ 0xb636dd73, "__nand_calculate_ecc" },
	{ 0x92fb829d, "mtd_read_oob" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a6923cc, "del_mtd_blktrans_dev" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9166fada, "strncpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd,nand_ecc");


MODULE_INFO(srcversion, "02499C221A8EC1E3C819395");
