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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x377d5bbf, "nanddev_mtd_max_bad_blocks" },
	{ 0x23699dcb, "mtd_ooblayout_get_databytes" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe7c31d4d, "spi_mem_supports_op" },
	{ 0xbdc313c6, "spi_mem_adjust_op_size" },
	{ 0x6d8d7950, "nanddev_isreserved" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x73abdacc, "devm_spi_mem_dirmap_create" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd70a882a, "nanddev_isbad" },
	{ 0xaceb5bc, "mtd_ooblayout_set_databytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf5fd2356, "nanddev_markbad" },
	{ 0xfb578fc5, "memset" },
	{ 0x417313c3, "mtd_ooblayout_count_freebytes" },
	{ 0x78a618f6, "spi_mem_driver_unregister" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9cbe3233, "spi_mem_dirmap_write" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xce4eec3, "nanddev_mtd_erase" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x7b36ee46, "nanddev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfe4ac1, "nanddev_cleanup" },
	{ 0x5cc57419, "spi_mem_exec_op" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0x8ee42bb3, "spi_mem_dirmap_read" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xac9b4c80, "spi_mem_driver_register_with_owner" },
};

MODULE_INFO(depends, "nandcore,mtd");

MODULE_ALIAS("spi:spi-nand");

MODULE_INFO(srcversion, "A89ED7697A5DA190D838471");
