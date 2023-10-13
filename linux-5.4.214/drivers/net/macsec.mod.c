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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xcea37297, "genl_register_family" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x63616516, "netif_rx" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x804b1301, "gro_cells_receive" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a955fde, "skb_copy" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0xcbdd2046, "skb_to_sgvec" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4d48a53e, "skb_cow_data" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xd523d85d, "skb_push" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0x1d0ba5ee, "netdev_upper_dev_link" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xbc01d2a0, "netif_stacked_transfer_operstate" },
	{ 0x1cc490fb, "dev_set_mtu" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a4497db, "kzfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xa3663702, "gro_cells_init" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xe1ac9f31, "dev_uc_unsync" },
	{ 0xb5cc056f, "dev_mc_unsync" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xa2a604a8, "dev_set_promiscuity" },
	{ 0xeceb2de5, "dev_set_allmulti" },
	{ 0x161f25c8, "dev_uc_sync" },
	{ 0xd078c3ba, "dev_mc_sync" },
	{ 0x6b2f99a2, "dev_uc_del" },
	{ 0x389214e7, "dev_uc_add" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A5D976291E9C4A0A3450CC5");
