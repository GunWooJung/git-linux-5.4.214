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
	{ 0x8b68b196, "xfrm4_tunnel_deregister" },
	{ 0x3f5f187c, "xfrm_unregister_type" },
	{ 0x33a7b8d7, "xfrm4_tunnel_register" },
	{ 0xc5850110, "printk" },
	{ 0xdf79e0b3, "xfrm_register_type" },
	{ 0xfc408ce, "xfrm_input" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tunnel4");


MODULE_INFO(srcversion, "30D96239C28F6F8E12362AA");
