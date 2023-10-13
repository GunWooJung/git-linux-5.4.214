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
	{ 0xeb8a3378, "matroxfb_g450_setpll_cond" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x9ed2150b, "matroxfb_vgaHWrestore" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x618051aa, "matroxfb_vgaHWinit" },
	{ 0x1934921, "g450_mnp2f" },
	{ 0x2bc166bd, "matroxfb_DAC_out" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x185df99a, "matroxfb_DAC_in" },
	{ 0x25cf8049, "matroxfb_PLL_calcclock" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x2b00037b, "matroxfb_g450_setclk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "g450_pll,matroxfb_misc");


MODULE_INFO(srcversion, "54FC625E16ACFC1924E90D8");
