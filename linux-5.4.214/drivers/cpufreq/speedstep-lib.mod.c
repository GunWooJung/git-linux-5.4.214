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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5850110, "printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9B76BC883D8CA47C9185B22");
