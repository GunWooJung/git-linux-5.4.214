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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa6393efb, "inet_select_addr" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x7e60ec8f, "ip6_dst_lookup_flow" },
	{ 0x54021726, "nf_hook_slow" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0xc2f29a5a, "ipv6_stub" },
	{ 0xad263612, "consume_skb" },
	{ 0x59efc5b3, "skb_set_owner_w" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0x72bd5852, "arp_tbl" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf5f1f564, "__neigh_create" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c2ef1a4, "nd_tbl" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6a23674b, "dev_queue_xmit_nit" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xd523d85d, "skb_push" },
	{ 0x57eab2ed, "netdev_master_upper_dev_link" },
	{ 0x4054b1d2, "netdev_master_upper_dev_get" },
	{ 0xb966b66d, "netdev_lower_get_next" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0xd5092be3, "dev_change_flags" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x216cc777, "netdev_err" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xa67916d5, "ip6_dst_alloc" },
	{ 0x6815d995, "fib6_new_table" },
	{ 0xc97dcd27, "rt_dst_alloc" },
	{ 0x42c24e25, "fib_new_table" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x73588f11, "dst_release" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd45dae07, "ip6_pol_route" },
	{ 0xd5e4225f, "fib_nl_delrule" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7e470555, "fib_nl_newrule" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3A0EBA618EED38241DB5D74");
