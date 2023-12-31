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
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaa3caba2, "rt2x00lib_dmastart" },
	{ 0xc5850110, "printk" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x777a9f0, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ae95457, "rt2x00lib_rxdone" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd25d357a, "rt2x00lib_dmadone" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "rt2x00lib");


MODULE_INFO(srcversion, "47A0720FD6D73402368D85B");
