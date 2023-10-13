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
	{ 0xbbeb606d, "nft_unregister_obj" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0x8b325c55, "nft_register_obj" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xd279774b, "synproxy_send_client_synack" },
	{ 0x207c955e, "synproxy_send_client_synack_ipv6" },
	{ 0xebe3eed1, "synproxy_recv_client_ack" },
	{ 0xad263612, "consume_skb" },
	{ 0xa6863b59, "synproxy_recv_client_ack_ipv6" },
	{ 0xe1b6425b, "synproxy_parse_options" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xa65722e8, "nf_ip_checksum" },
	{ 0x2d341bb4, "nf_synproxy_ipv6_init" },
	{ 0xba4c7309, "nf_synproxy_ipv4_init" },
	{ 0xedca43ba, "nf_ct_netns_get" },
	{ 0xbc55d57e, "nf_synproxy_ipv6_fini" },
	{ 0x11f3e50e, "nf_ct_netns_put" },
	{ 0x2b2dbdc3, "nf_synproxy_ipv4_fini" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "5AEED70BA11778EF402E963");
