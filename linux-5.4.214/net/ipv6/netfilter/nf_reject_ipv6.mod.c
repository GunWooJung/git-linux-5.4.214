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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x73588f11, "dst_release" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0xcc92f447, "nf_ct_attach" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x9c9b5b47, "l3mdev_master_ifindex_rcu" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xbec4c087, "ip6_local_out" },
	{ 0x8ba1c4f2, "ip6_dst_hoplimit" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf888b4dd, "xfrm_lookup" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xabd5f5c3, "nf_ip6_checksum" },
	{ 0x47c7b75d, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EE3C9ED3747E193AAFF85F7");
