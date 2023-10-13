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
	{ 0xd922cd9, "ip6_tnl_get_link_net" },
	{ 0x3165c53, "ip6_tnl_get_iflink" },
	{ 0x1ad4a745, "ip_tunnel_get_stats64" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0xc761fae4, "xfrm6_protocol_deregister" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x44161af5, "xfrm6_protocol_register" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x889a3e2b, "xfrm6_rcv_tnl" },
	{ 0xfa741670, "ip6_tnl_rcv_ctl" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0x641a6005, "ip6_redirect" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3318bc71, "ip6_update_pmtu" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x47c7b75d, "icmp6_send" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x62333053, "skb_scrub_packet" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0x899f833, "__icmp_send" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc691ff34, "ip6_tnl_xmit_ctl" },
	{ 0xf888b4dd, "xfrm_lookup" },
	{ 0x363fe3fe, "ip_route_output_key_hash" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7c340f43, "__xfrm_decode_session" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x721c9d1f, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x87ba5f87, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x73588f11, "dst_release" },
	{ 0x80c2eef5, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0xe891b6df, "ip6_tnl_get_cap" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xe914e41e, "strcpy" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel");


MODULE_INFO(srcversion, "9296E925D6100F6DF8B6E82");
