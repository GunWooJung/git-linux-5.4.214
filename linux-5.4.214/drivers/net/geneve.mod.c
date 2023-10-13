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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3361e58c, "gro_find_receive_by_type" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1ad4a745, "ip_tunnel_get_stats64" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x81a8db86, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x66628bf3, "ip_tunnel_metadata_cnt" },
	{ 0x73588f11, "dst_release" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x467fdfba, "udp_tunnel_xmit_skb" },
	{ 0xc9bcab71, "dst_cache_set_ip6" },
	{ 0x771cf3f2, "udp_tun_rx_dst" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x2f33c53, "dst_cache_get_ip4" },
	{ 0x92047010, "dst_cache_get_ip6" },
	{ 0x62333053, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x68920b, "udp_sock_create6" },
	{ 0x7435bb7d, "setup_udp_tunnel_sock" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x7a44ffbf, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9bfe7887, "udp_tunnel_sock_release" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5cdb0378, "udp_tunnel_push_rx_port" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x804b1301, "gro_cells_receive" },
	{ 0xb67c80c8, "gro_find_complete_by_type" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xc2f29a5a, "ipv6_stub" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x288691f9, "rtnl_configure_link" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xf531b60d, "udp_tunnel_notify_add_rx_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xc67f60cb, "udp_tunnel_drop_rx_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xc3f8061f, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xfdd15055, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa3663702, "gro_cells_init" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x80c2eef5, "rt6_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x1c89c705, "udp_tunnel6_xmit_skb" },
	{ 0x5c4733d5, "dst_cache_set_ip4" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x83d8f38c, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xad263612, "consume_skb" },
	{ 0x8ba1c4f2, "ip6_dst_hoplimit" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "76AD5F67F6BEA9052274DB9");
