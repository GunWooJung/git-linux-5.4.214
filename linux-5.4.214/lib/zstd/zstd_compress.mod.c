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
	{ 0x3f0eabd2, "xxh64_update" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x658ce1a8, "xxh64_reset" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xe32ab4d8, "xxh64_digest" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D3CB10700B5827BEAE4C4B");
