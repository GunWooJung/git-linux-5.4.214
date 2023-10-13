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
	{ 0x8b3ef653, "ip_tunnel_get_link_net" },
	{ 0x6d075c18, "ip_tunnel_dellink" },
	{ 0x705b27f7, "ip_tunnel_get_iflink" },
	{ 0x1ad4a745, "ip_tunnel_get_stats64" },
	{ 0xe4f64574, "ip_tunnel_change_mtu" },
	{ 0xf281cbd2, "ip_tunnel_uninit" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0xea80f9d3, "xfrm4_protocol_deregister" },
	{ 0x8b68b196, "xfrm4_tunnel_deregister" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x33a7b8d7, "xfrm4_tunnel_register" },
	{ 0x9fbaf1bc, "xfrm4_protocol_register" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x774177b2, "ip_tunnel_rcv" },
	{ 0x7a44ffbf, "__iptunnel_pull_header" },
	{ 0xfc408ce, "xfrm_input" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0x32ca8a56, "ipv4_update_pmtu" },
	{ 0x1739cb70, "ipv4_redirect" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0x87620b18, "ip_tunnel_lookup" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0x899f833, "__icmp_send" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x62333053, "skb_scrub_packet" },
	{ 0x47c7b75d, "icmp6_send" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x363fe3fe, "ip_route_output_key_hash" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x73588f11, "dst_release" },
	{ 0xf888b4dd, "xfrm_lookup" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0x7c340f43, "__xfrm_decode_session" },
	{ 0x9d5843f4, "ip_tunnel_init_net" },
	{ 0xd8c78f94, "ip_tunnel_delete_nets" },
	{ 0x982e3830, "ip_tunnel_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4c449fc9, "ip_tunnel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf5ae3488, "ip_tunnel_setup" },
	{ 0x5b098081, "ip_tunnel_newlink" },
	{ 0x3cd04245, "ip_tunnel_changelink" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "E0011F03B3DE39875F93978");
