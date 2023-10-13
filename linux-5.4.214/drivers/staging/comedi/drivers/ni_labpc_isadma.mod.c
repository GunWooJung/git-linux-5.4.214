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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x75846027, "comedi_isadma_alloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0x27fd24f1, "comedi_isadma_free" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xea878430, "comedi_isadma_program" },
};

MODULE_INFO(depends, "comedi,comedi_isadma");


MODULE_INFO(srcversion, "94F7A3816F9F53AE66BC895");
