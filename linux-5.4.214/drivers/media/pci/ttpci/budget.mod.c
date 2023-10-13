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
	{ 0x765395c3, "param_ops_int" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x18cdfa7b, "ttpci_budget_irq10_handler" },
	{ 0xbed38b42, "saa7146_unregister_extension" },
	{ 0xbb8093f3, "saa7146_register_extension" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xfa124c2f, "ttpci_budget_init_hooks" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xcf0c5557, "ttpci_budget_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x80500894, "request_firmware" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xc5850110, "printk" },
	{ 0x739699af, "saa7146_setgpio" },
	{ 0x7948c222, "budget_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x144da5fb, "ttpci_budget_deinit" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "budget-core,saa7146,dvb-core");

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001004bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001005bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001013bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001016bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001018bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F60bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F61bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00005F60bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00005F61bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000014C4sd00001020bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F52bc*sc*i*");

MODULE_INFO(srcversion, "A32E7A03D51BC76F2A6EC16");
