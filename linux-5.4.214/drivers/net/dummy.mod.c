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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd0a68084, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x168eb124, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xad263612, "consume_skb" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8F7329D4C6C1036EB140F20");
