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
	{ 0xed2a89e5, "lowpan_nhc_del" },
	{ 0x480f8e51, "lowpan_nhc_add" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd523d85d, "skb_push" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "6lowpan");


MODULE_INFO(srcversion, "F8A517649AA6070920BAA3F");
