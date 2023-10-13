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
	{ 0x75bdecd8, "dev_mc_sync_multiple" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcea37297, "genl_register_family" },
	{ 0xb5cc056f, "dev_mc_unsync" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x72b619a9, "dev_disable_lro" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xed37ffc6, "vlan_uses_dev" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeceb2de5, "dev_set_allmulti" },
	{ 0x5a5abf5b, "vlan_vid_del" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5690c1f4, "vlan_vid_add" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9610d85b, "__netpoll_setup" },
	{ 0xa28e6d25, "vlan_vids_del_by_dev" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x56c43db7, "vlan_vids_add_by_dev" },
	{ 0x57eab2ed, "netdev_master_upper_dev_link" },
	{ 0xc4e58348, "netdev_lower_state_changed" },
	{ 0xded93d72, "netdev_change_features" },
	{ 0xbf23496d, "netpoll_send_skb_on_dev" },
	{ 0xe793331b, "netdev_has_upper_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa6c8dbac, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x11089ac7, "_ctype" },
	{ 0xfd3d2b80, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5561600b, "dev_close" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0xbbe9a4cb, "dev_mc_flush" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x62aa6169, "dev_open" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x60d51688, "dev_uc_flush" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x88ff8671, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xe1ac9f31, "dev_uc_unsync" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xa2a604a8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x67f7a4af, "dev_uc_sync_multiple" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2acd262f, "__netpoll_free" },
	{ 0xad263612, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x1cc490fb, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0FB371AE979AB1EDE69796C");
