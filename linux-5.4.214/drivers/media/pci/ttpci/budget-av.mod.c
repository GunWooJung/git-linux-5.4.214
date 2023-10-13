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
	{ 0x947be5cd, "param_ops_short" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xbed38b42, "saa7146_unregister_extension" },
	{ 0xbb8093f3, "saa7146_register_extension" },
	{ 0xfa124c2f, "ttpci_budget_init_hooks" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x2a2c35b6, "dvb_ca_en50221_init" },
	{ 0x9abc6f9, "saa7146_set_hps_source_and_sync" },
	{ 0xb97c21bd, "saa7146_register_device" },
	{ 0xb2e18b60, "saa7146_vv_init" },
	{ 0xcf0c5557, "ttpci_budget_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf88a5971, "ttpci_budget_debiwrite" },
	{ 0xe5b94725, "dvb_frontend_reinitialise" },
	{ 0x25200fa2, "ttpci_budget_debiread" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4893ed2e, "ttpci_budget_set_video_port" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x80500894, "request_firmware" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a05c758, "saa7146_vv_release" },
	{ 0xd0f6faa1, "saa7146_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x48a93420, "dvb_ca_en50221_release" },
	{ 0x739699af, "saa7146_setgpio" },
	{ 0x37a0cba, "kfree" },
	{ 0x144da5fb, "ttpci_budget_deinit" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x18cdfa7b, "ttpci_budget_irq10_handler" },
	{ 0xc5850110, "printk" },
	{ 0x7948c222, "budget_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,budget-core,dvb-core,saa7146_vv");

MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F56bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000015bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Dbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000003Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000021bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000022bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000028bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000023bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000030bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001154bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001155bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001156bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001176bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001157bc*sc*i*");

MODULE_INFO(srcversion, "A1FD59C515C01A5949FDC2C");
