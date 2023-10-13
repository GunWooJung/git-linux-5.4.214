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
	{ 0x536a3828, "xfrm6_find_1stfragopt" },
	{ 0x98e5bfd1, "ipcomp_output" },
	{ 0x213ccc87, "ipcomp_input" },
	{ 0x2e11a902, "ipcomp_destroy" },
	{ 0x8e41dd41, "xfrm6_rcv" },
	{ 0xc761fae4, "xfrm6_protocol_deregister" },
	{ 0x3f5f187c, "xfrm_unregister_type" },
	{ 0x44161af5, "xfrm6_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0xdf79e0b3, "xfrm_register_type" },
	{ 0x641a6005, "ip6_redirect" },
	{ 0x3318bc71, "ip6_update_pmtu" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0x1fcb1d54, "xfrm_state_insert" },
	{ 0x5cf05124, "xfrm_init_state" },
	{ 0xc8b54e0a, "xfrm6_tunnel_alloc_spi" },
	{ 0xd38e908c, "xfrm_state_alloc" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0x32f7459, "xfrm6_tunnel_spi_lookup" },
	{ 0x79644aa9, "ipcomp_init_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_ipcomp,xfrm6_tunnel");


MODULE_INFO(srcversion, "3FD06C69DE229434461DF73");
