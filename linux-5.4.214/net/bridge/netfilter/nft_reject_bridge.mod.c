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
	{ 0xa5f71562, "nft_reject_policy" },
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0x8535cc15, "nf_reject_ip_tcphdr_put" },
	{ 0xd2e9147d, "nf_reject_ip_tcphdr_get" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x439feff6, "nf_reject_ip6_tcphdr_put" },
	{ 0xfd6553bb, "nf_reject_ip6_tcphdr_get" },
	{ 0x2124474, "ip_send_check" },
	{ 0x6193416a, "nf_reject_iphdr_put" },
	{ 0xa65722e8, "nf_ip_checksum" },
	{ 0xa1713526, "pskb_trim_rcsum_slow" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x59c52a4f, "br_forward" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x9e40c437, "nf_reject_ip6hdr_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xabd5f5c3, "nf_ip6_checksum" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xd523d85d, "skb_push" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6,bridge");


MODULE_INFO(srcversion, "443BE7A938A7A786F1CE19B");
