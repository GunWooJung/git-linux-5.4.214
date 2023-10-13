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
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2fdbb091, "unregister_mtd_user" },
	{ 0x5aa281a6, "register_mtd_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x999e8297, "vfree" },
	{ 0x8e97cbb1, "mtd_read" },
	{ 0x9b4f6661, "kmsg_dump_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xac9c6d9a, "mtd_block_markbad" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x614e67b5, "mtd_erase" },
	{ 0x3cbea2d0, "mtd_block_isbad" },
	{ 0x374c2088, "kmsg_dump_get_buffer" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xed814ec1, "kmsg_dump_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc2d02cc, "mtd_write" },
	{ 0xfb578fc5, "memset" },
	{ 0x85e410ca, "mtd_panic_write" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "ABAE152131AA97734CE81F5");
