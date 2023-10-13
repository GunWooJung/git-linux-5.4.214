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
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xcea37297, "genl_register_family" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x72b619a9, "dev_disable_lro" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa5976e4f, "dev_base_lock" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x719e9a9c, "debugfs_rename" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xd523d85d, "skb_push" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x82e35236, "eth_header_parse" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x4356de1b, "__pskb_copy_fclone" },
	{ 0x87ba5f87, "netdev_state_change" },
	{ 0xab3ce9ef, "netlink_ack" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xa2a604a8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xb0e602eb, "memmove" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xccc39a23, "eth_header" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x1cc490fb, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EC9CCB4675B871649B2490E");
