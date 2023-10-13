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
	{ 0x1ad4a745, "ip_tunnel_get_stats64" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xcea37297, "genl_register_family" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x467fdfba, "udp_tunnel_xmit_skb" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xad263612, "consume_skb" },
	{ 0xc25fb4c5, "icmp_ndo_send" },
	{ 0x73588f11, "dst_release" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0x8082397, "get_net_ns_by_fd" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x63616516, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7a44ffbf, "__iptunnel_pull_header" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x285c8d25, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7435bb7d, "setup_udp_tunnel_sock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xca669996, "fput" },
	{ 0xa0554d18, "release_sock" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udp_tunnel");


MODULE_INFO(srcversion, "A9DB006861B03D315B91740");
