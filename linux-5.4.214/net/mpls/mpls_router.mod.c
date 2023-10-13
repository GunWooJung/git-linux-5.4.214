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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x76d8f2be, "dev_get_flags" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x73588f11, "dst_release" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9aa9b4d1, "rtnl_notify" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x7fcbbf45, "ip_tunnel_encap_del_ops" },
	{ 0x9ff4f57b, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0x54947aef, "__skb_warn_lro_forwarding" },
	{ 0xcd279169, "nla_find" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xd523d85d, "skb_push" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0xa33a29ec, "rtnl_af_unregister" },
	{ 0x41804f72, "nla_reserve_nohdr" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xc2f29a5a, "ipv6_stub" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x76b379ce, "ip_valid_fib_dump_req" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a11e584, "rtnl_unicast" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x44dd60b7, "rtnl_set_sk_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x6453541f, "rtnl_af_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9f9e2969, "neigh_xmit" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0xad263612, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0x6c87045c, "skb_gso_validate_network_len" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb7ba62fc, "ip_tunnel_encap_add_ops" },
	{ 0xf219c1c5, "netlink_strict_get_check" },
};

MODULE_INFO(depends, "ip_tunnel");


MODULE_INFO(srcversion, "F6C69BA4DCC825D3E986C63");
