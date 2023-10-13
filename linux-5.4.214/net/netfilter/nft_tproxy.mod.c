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
	{ 0x35691b46, "nf_tproxy_handle_time_wait4" },
	{ 0x1f087f2, "nf_tproxy_handle_time_wait6" },
	{ 0xa5c2eadd, "sock_gen_put" },
	{ 0xbe90f636, "sock_edemux" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x52ebe0b7, "nf_tproxy_laddr6" },
	{ 0x7faea6a9, "nf_tproxy_get_sock_v6" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6e7b48f5, "nf_tproxy_laddr4" },
	{ 0xaa99091b, "nf_tproxy_get_sock_v4" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x8cab0ded, "nf_defrag_ipv6_enable" },
	{ 0x8e1243e1, "nf_defrag_ipv4_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc16f4eb8, "nft_dump_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv6,nf_defrag_ipv4");


MODULE_INFO(srcversion, "BDE97426C0C3D0DA0CCEC3C");
