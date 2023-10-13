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
	{ 0xf6e6b0fa, "nf_nat_setup_info" },
	{ 0xedca43ba, "nf_ct_netns_get" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x11f3e50e, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc16f4eb8, "nft_dump_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbe811175, "nft_chain_validate_dependency" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "53D1ADF941F3E9B74C0FF7D");
