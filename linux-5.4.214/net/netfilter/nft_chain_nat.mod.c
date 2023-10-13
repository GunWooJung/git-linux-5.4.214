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
	{ 0x4cad0b09, "nf_nat_ipv4_unregister_fn" },
	{ 0x5145c61, "nf_nat_ipv4_register_fn" },
	{ 0x75e2135c, "nf_nat_ipv6_unregister_fn" },
	{ 0xc793e140, "nf_nat_ipv6_register_fn" },
	{ 0xe70a1ebc, "nft_unregister_chain_type" },
	{ 0xd90866f, "nft_register_chain_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe819dcdc, "nft_do_chain" },
	{ 0xcc9f9937, "ipv6_find_hdr" },
	{ 0xd2c9683d, "nf_nat_inet_register_fn" },
	{ 0x7b173a39, "nf_nat_inet_unregister_fn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "2DB9BF5F1FB2B150EDC68DF");
