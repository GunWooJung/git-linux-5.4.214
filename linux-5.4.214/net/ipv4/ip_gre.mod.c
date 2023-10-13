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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1ad4a745, "ip_tunnel_get_stats64" },
	{ 0x705b27f7, "ip_tunnel_get_iflink" },
	{ 0x73588f11, "dst_release" },
	{ 0xe8b21f69, "metadata_dst_alloc" },
	{ 0x32ca8a56, "ipv4_update_pmtu" },
	{ 0x87620b18, "ip_tunnel_lookup" },
	{ 0xafc1562a, "__ip_tunnel_change_mtu" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x899f833, "__icmp_send" },
	{ 0xb701046e, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6595f0f6, "inetdev_by_index" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7a44ffbf, "__iptunnel_pull_header" },
	{ 0xf5ae3488, "ip_tunnel_setup" },
	{ 0x6d075c18, "ip_tunnel_dellink" },
	{ 0xa5ed9517, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xd8c78f94, "ip_tunnel_delete_nets" },
	{ 0xcfe4c500, "gre_add_protocol" },
	{ 0x5b098081, "ip_tunnel_newlink" },
	{ 0xc5850110, "printk" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0xf281cbd2, "ip_tunnel_uninit" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x244920e, "gre_del_protocol" },
	{ 0xd523d85d, "skb_push" },
	{ 0x982e3830, "ip_tunnel_init" },
	{ 0x8b3ef653, "ip_tunnel_get_link_net" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x4c449fc9, "ip_tunnel_ioctl" },
	{ 0x4a2e2508, "__ip_mc_dec_group" },
	{ 0xae80da58, "ip_md_tunnel_xmit" },
	{ 0x3cd04245, "ip_tunnel_changelink" },
	{ 0x288691f9, "rtnl_configure_link" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x1739cb70, "ipv4_redirect" },
	{ 0x12e1c533, "ip_mc_inc_group" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x9d5843f4, "ip_tunnel_init_net" },
	{ 0xc3f8061f, "iptunnel_handle_offloads" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xfdd15055, "rtnl_create_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x15dd5088, "ip6_err_gen_icmpv6_unreach" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x1dfdbb8c, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe4f64574, "ip_tunnel_change_mtu" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2fe4f707, "gre_parse_header" },
	{ 0x774177b2, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre");


MODULE_INFO(srcversion, "B8422D1624A65D1B4E78953");
