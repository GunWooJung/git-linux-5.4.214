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
	{ 0x958767a4, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7e4d52be, "xfrm6_tunnel_deregister" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x73588f11, "dst_release" },
	{ 0xe8b21f69, "metadata_dst_alloc" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc9bcab71, "dst_cache_set_ip6" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x59efc5b3, "skb_set_owner_w" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x899f833, "__icmp_send" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0x62333053, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x641a6005, "ip6_redirect" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7a44ffbf, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3ecf667a, "dst_cache_get" },
	{ 0xd523d85d, "skb_push" },
	{ 0x804b1301, "gro_cells_receive" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x76314ed4, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbafac945, "ip_route_input_noref" },
	{ 0x358bd0b7, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xebe0a0eb, "__get_hash_from_flowi6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x3318bc71, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x87ba5f87, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xc3f8061f, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa3663702, "gro_cells_init" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x80c2eef5, "rt6_lookup" },
	{ 0xbe79b562, "ip6tun_encaps" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xbec4c087, "ip6_local_out" },
	{ 0xad263612, "consume_skb" },
	{ 0x8ba1c4f2, "ip6_dst_hoplimit" },
	{ 0x35081cb2, "xfrm6_tunnel_register" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf888b4dd, "xfrm_lookup" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x817bf17e, "ipv6_push_frag_opts" },
	{ 0x47c7b75d, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6");


MODULE_INFO(srcversion, "35712D25D998888CF89DD7C");
