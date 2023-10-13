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
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x9ed2150b, "matroxfb_vgaHWrestore" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x618051aa, "matroxfb_vgaHWinit" },
	{ 0x2bc166bd, "matroxfb_DAC_out" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x185df99a, "matroxfb_DAC_in" },
	{ 0x25cf8049, "matroxfb_PLL_calcclock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matroxfb_misc");


MODULE_INFO(srcversion, "009C295D924A1096375F7B6");
