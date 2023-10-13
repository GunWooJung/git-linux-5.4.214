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
	{ 0xd922cd9, "ip6_tnl_get_link_net" },
	{ 0x3165c53, "ip6_tnl_get_iflink" },
	{ 0x1ad4a745, "ip_tunnel_get_stats64" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x4be7801, "inet6_del_protocol" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0xda9fc6bc, "inet6_add_protocol" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x899f833, "__icmp_send" },
	{ 0xc3f8061f, "iptunnel_handle_offloads" },
	{ 0xc691ff34, "ip6_tnl_xmit_ctl" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa5ed9517, "skb_checksum" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x811eba5, "ip6_tnl_xmit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x87ba5f87, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe8b21f69, "metadata_dst_alloc" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x884204c4, "ip6_tnl_rcv" },
	{ 0x7a44ffbf, "__iptunnel_pull_header" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3318bc71, "ip6_update_pmtu" },
	{ 0x641a6005, "ip6_redirect" },
	{ 0x2fe4f707, "gre_parse_header" },
	{ 0x47c7b75d, "icmp6_send" },
	{ 0x11cbf457, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xebe0a0eb, "__get_hash_from_flowi6" },
	{ 0xd523d85d, "skb_push" },
	{ 0x9775a9ab, "ip6_tnl_encap_setup" },
	{ 0x808dd983, "ip6_tnl_change_mtu" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x721c9d1f, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa3663702, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x754d539c, "strlen" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x73588f11, "dst_release" },
	{ 0x80c2eef5, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xe891b6df, "ip6_tnl_get_cap" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel,gre");


MODULE_INFO(srcversion, "E8B66003AD4091C973BBCF5");
