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
	{ 0xbed38b42, "saa7146_unregister_extension" },
	{ 0xbb8093f3, "saa7146_register_extension" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x18cdfa7b, "ttpci_budget_irq10_handler" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x2a2c35b6, "dvb_ca_en50221_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xfa124c2f, "ttpci_budget_init_hooks" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0xcf0c5557, "ttpci_budget_init" },
	{ 0x7948c222, "budget_debug" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x48a93420, "dvb_ca_en50221_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x144da5fb, "ttpci_budget_deinit" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0x80500894, "request_firmware" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4893ed2e, "ttpci_budget_set_video_port" },
	{ 0x885fb8a1, "dvb_ca_en50221_frda_irq" },
	{ 0x4cc83ca3, "dvb_ca_en50221_camready_irq" },
	{ 0x4de77495, "dvb_ca_en50221_camchange_irq" },
	{ 0x739699af, "saa7146_setgpio" },
	{ 0x25200fa2, "ttpci_budget_debiread" },
	{ 0xf88a5971, "ttpci_budget_debiwrite" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,budget-core,rc-core,dvb-core");

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Fbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001012bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001017bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Bbc*sc*i*");

MODULE_INFO(srcversion, "3909D1EFB94CD7C663D044D");
