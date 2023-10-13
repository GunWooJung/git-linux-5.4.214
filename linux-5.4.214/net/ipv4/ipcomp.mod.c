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
	{ 0x98e5bfd1, "ipcomp_output" },
	{ 0x213ccc87, "ipcomp_input" },
	{ 0x2e11a902, "ipcomp_destroy" },
	{ 0xfc408ce, "xfrm_input" },
	{ 0xa14db5ec, "xfrm4_rcv" },
	{ 0xea80f9d3, "xfrm4_protocol_deregister" },
	{ 0x3f5f187c, "xfrm_unregister_type" },
	{ 0x9fbaf1bc, "xfrm4_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0xdf79e0b3, "xfrm_register_type" },
	{ 0x32ca8a56, "ipv4_update_pmtu" },
	{ 0x1739cb70, "ipv4_redirect" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1fcb1d54, "xfrm_state_insert" },
	{ 0x5cf05124, "xfrm_init_state" },
	{ 0xd38e908c, "xfrm_state_alloc" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0x79644aa9, "ipcomp_init_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "0951BE07630704C8C1376DE");
