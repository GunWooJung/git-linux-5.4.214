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
	{ 0x705b27f7, "ip_tunnel_get_iflink" },
	{ 0x1ad4a745, "ip_tunnel_get_stats64" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x33a7b8d7, "xfrm4_tunnel_register" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x8b68b196, "xfrm4_tunnel_deregister" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x47c7b75d, "icmp6_send" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x5c4733d5, "dst_cache_set_ip4" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x64660e8f, "iptunnel_xmit" },
	{ 0xc5736ddb, "iptun_encaps" },
	{ 0xad263612, "consume_skb" },
	{ 0x59efc5b3, "skb_set_owner_w" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0x2f33c53, "dst_cache_get_ip4" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0xbabc2de, "ipv6_chk_prefix" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x63616516, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa8c32dff, "ipv6_chk_custom_prefix" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x73588f11, "dst_release" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0x774177b2, "ip_tunnel_rcv" },
	{ 0x7a44ffbf, "__iptunnel_pull_header" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xb701046e, "ip_tunnel_xmit" },
	{ 0xc3f8061f, "iptunnel_handle_offloads" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x721c9d1f, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1739cb70, "ipv4_redirect" },
	{ 0x15dd5088, "ip6_err_gen_icmpv6_unreach" },
	{ 0x32ca8a56, "ipv4_update_pmtu" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x1dfdbb8c, "ip_tunnel_encap_setup" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x87ba5f87, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "E62E554834386055E4A8F0C");
