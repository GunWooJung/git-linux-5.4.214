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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x132d1553, "make_kgid" },
	{ 0xc049ae64, "__quota_error" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x6f915a45, "dqstats" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3a9c63ab, "make_kprojid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5d56c7e, "mark_info_dirty" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x7ce18c9f, "from_kqid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "97B8643900B55D8926C1055");
