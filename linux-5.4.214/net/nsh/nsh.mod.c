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
	{ 0xde22cd47, "dev_add_offload" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xf961a3fc, "dev_remove_offload" },
	{ 0xd523d85d, "skb_push" },
	{ 0x393296d2, "skb_mac_gso_segment" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0xe113bbbc, "csum_partial" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4F6C8CC2CE322FCF066423");
