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
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x5327bc40, "unregister_hdlc_protocol" },
	{ 0xb7a88cf6, "register_hdlc_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x675dcd63, "attach_hdlc_protocol" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");


MODULE_INFO(srcversion, "F0EAA38DA293A762A3FE9B9");
