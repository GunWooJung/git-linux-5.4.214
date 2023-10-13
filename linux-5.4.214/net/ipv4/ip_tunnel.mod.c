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
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5736ddb, "iptun_encaps" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x73588f11, "dst_release" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2f33c53, "dst_cache_get_ip4" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x899f833, "__icmp_send" },
	{ 0x62333053, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x64660e8f, "iptunnel_xmit" },
	{ 0x804b1301, "gro_cells_receive" },
	{ 0x721c9d1f, "init_net" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x87ba5f87, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa3663702, "gro_cells_init" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x5c4733d5, "dst_cache_set_ip4" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x47c7b75d, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1cc490fb, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EB12861BD20AE52FBB9F391");
