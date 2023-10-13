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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeecc3d39, "dev_forward_skb" },
	{ 0xb5cc056f, "dev_mc_unsync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x389214e7, "dev_uc_add" },
	{ 0xee542fec, "__dev_forward_skb" },
	{ 0xaf8e1d97, "dev_mc_add_excl" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0x7d23a66a, "dev_uc_add_excl" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeceb2de5, "dev_set_allmulti" },
	{ 0x5a5abf5b, "vlan_vid_del" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0x5690c1f4, "vlan_vid_add" },
	{ 0x9610d85b, "__netpoll_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x63616516, "netif_rx" },
	{ 0xbf23496d, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0xa6c8dbac, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xd48f1ae9, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xfd3d2b80, "__ethtool_get_link_ksettings" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd5e2ee54, "dev_mc_del" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0xe5f366fb, "ndo_dflt_fdb_dump" },
	{ 0xbc01d2a0, "netif_stacked_transfer_operstate" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x721c9d1f, "init_net" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6dc988f4, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0x82e35236, "eth_header_parse" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x88ff8671, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d0ba5ee, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xe1ac9f31, "dev_uc_unsync" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xa2a604a8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xc30e33f3, "dev_change_proto_down_generic" },
	{ 0x7201e16a, "eth_header_cache" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6b2f99a2, "dev_uc_del" },
	{ 0x161f25c8, "dev_uc_sync" },
	{ 0x2acd262f, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x19f2ddf0, "dev_queue_xmit_accel" },
	{ 0x24adc7f9, "netdev_is_rx_handler_busy" },
	{ 0xd078c3ba, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x1cc490fb, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D37EBBED69D1EBDA3940F8");
