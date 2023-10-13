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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0x754d539c, "strlen" },
	{ 0x199305a0, "nf_osf_find" },
	{ 0x35eff5e0, "nf_osf_fingers" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xe7dc3153, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc16f4eb8, "nft_dump_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink_osf");


MODULE_INFO(srcversion, "5E300EA3EBA97600CB590DD");
