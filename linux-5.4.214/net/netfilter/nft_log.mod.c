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
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0x114265de, "audit_log_start" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x516e4446, "nf_log_packet" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "5ECD9403004F36B5D8C766E");
