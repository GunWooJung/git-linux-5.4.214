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
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xedd81743, "spi_bitbang_stop" },
	{ 0xc5850110, "printk" },
	{ 0x14b80dd0, "spi_new_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8e17faf3, "put_device" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0x1f85bb35, "parport_release" },
	{ 0x671b6dd3, "spi_bitbang_start" },
	{ 0xf9a482f9, "msleep" },
	{ 0x16b41dd, "parport_claim" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0x15051d2b, "__spi_alloc_controller" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,spi-bitbang");


MODULE_INFO(srcversion, "AEEE8D02BFCFB7DCE6541C1");
