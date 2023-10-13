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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b3ef653, "ip_tunnel_get_link_net" },
	{ 0x6d075c18, "ip_tunnel_dellink" },
	{ 0x705b27f7, "ip_tunnel_get_iflink" },
	{ 0x1ad4a745, "ip_tunnel_get_stats64" },
	{ 0xe4f64574, "ip_tunnel_change_mtu" },
	{ 0xf281cbd2, "ip_tunnel_uninit" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x8b68b196, "xfrm4_tunnel_deregister" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x33a7b8d7, "xfrm4_tunnel_register" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0xe8b21f69, "metadata_dst_alloc" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0x774177b2, "ip_tunnel_rcv" },
	{ 0x7a44ffbf, "__iptunnel_pull_header" },
	{ 0xb701046e, "ip_tunnel_xmit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xae80da58, "ip_md_tunnel_xmit" },
	{ 0xc3f8061f, "iptunnel_handle_offloads" },
	{ 0x3cd04245, "ip_tunnel_changelink" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x9d5843f4, "ip_tunnel_init_net" },
	{ 0xd8c78f94, "ip_tunnel_delete_nets" },
	{ 0x1739cb70, "ipv4_redirect" },
	{ 0x32ca8a56, "ipv4_update_pmtu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x87620b18, "ip_tunnel_lookup" },
	{ 0x982e3830, "ip_tunnel_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4c449fc9, "ip_tunnel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf5ae3488, "ip_tunnel_setup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5b098081, "ip_tunnel_newlink" },
	{ 0x1dfdbb8c, "ip_tunnel_encap_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "55E70B4184606B39B33BD93");
