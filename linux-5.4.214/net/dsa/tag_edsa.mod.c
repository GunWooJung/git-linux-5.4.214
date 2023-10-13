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
	{ 0x4a75ed2d, "dsa_tag_drivers_unregister" },
	{ 0x53f6f97d, "dsa_tag_drivers_register" },
	{ 0xd523d85d, "skb_push" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "78306C8CFECFDD14F15348B");
