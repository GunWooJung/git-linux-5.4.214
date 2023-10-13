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
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1a08f6f2, "ib_create_ah_from_wc" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x9bf6dd1e, "ib_find_pkey" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa0039fa, "ib_register_mad_agent" },
	{ 0x16ab71d3, "ib_free_recv_mad" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x91b2b41d, "ib_free_send_mad" },
	{ 0xa4237c66, "rdma_destroy_ah_user" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xc5850110, "printk" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x968a9719, "ib_set_client_data" },
	{ 0x228dba14, "ib_create_send_mad" },
	{ 0xcd2d4c76, "ib_post_send_mad" },
	{ 0x29f66da9, "ib_unregister_mad_agent" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49f0406b, "ib_register_client" },
	{ 0xe6c35a74, "ib_unregister_event_handler" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7b3fe368, "ib_register_event_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54f5b24a, "rdma_create_ah" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x25204a67, "eth_commit_mac_addr_change" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x945fcc28, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xd35dc02d, "ib_unregister_client" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x1cc490fb, "dev_set_mtu" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "EF492556E87EA79321D9594");
