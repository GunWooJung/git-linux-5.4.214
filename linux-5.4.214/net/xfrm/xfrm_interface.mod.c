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
	{ 0x8e41dd41, "xfrm6_rcv" },
	{ 0xfc408ce, "xfrm_input" },
	{ 0xa14db5ec, "xfrm4_rcv" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x8392632, "xfrm_if_register_cb" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x44161af5, "xfrm6_protocol_register" },
	{ 0x9fbaf1bc, "xfrm4_protocol_register" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x32ca8a56, "ipv4_update_pmtu" },
	{ 0x1739cb70, "ipv4_redirect" },
	{ 0x641a6005, "ip6_redirect" },
	{ 0x3318bc71, "ip6_update_pmtu" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0x9699a1aa, "__xfrm_policy_check" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc25fb4c5, "icmp_ndo_send" },
	{ 0x4e123258, "icmpv6_ndo_send" },
	{ 0x363fe3fe, "ip_route_output_key_hash" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x2f8e3ee4, "xfrm_lookup_with_ifid" },
	{ 0x7c340f43, "__xfrm_decode_session" },
	{ 0x73588f11, "dst_release" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5c3a332e, "__skb_ext_del" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x87ba5f87, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc761fae4, "xfrm6_protocol_deregister" },
	{ 0xea80f9d3, "xfrm4_protocol_deregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa3663702, "gro_cells_init" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "42C18A3AAAF83E70840D6E4");
