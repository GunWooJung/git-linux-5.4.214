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
	{ 0x758f081b, "comedi_driver_unregister" },
	{ 0xe73c2838, "comedi_driver_register" },
	{ 0x9da58c85, "labpc_init_dma_chan" },
	{ 0x6eb23485, "labpc_common_attach" },
	{ 0x264153bb, "comedi_request_region" },
	{ 0xce6c434a, "comedi_legacy_detach" },
	{ 0xa59c0609, "labpc_common_detach" },
	{ 0xcac5d6ad, "labpc_free_dma_chan" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,ni_labpc_isadma,ni_labpc_common");


MODULE_INFO(srcversion, "84C4BB1D512FDAD7F79C739");
