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
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeecc3d39, "dev_forward_skb" },
	{ 0xd5092be3, "dev_change_flags" },
	{ 0xb5cc056f, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x6f4fadf7, "ip_local_out" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xeceb2de5, "dev_set_allmulti" },
	{ 0x5a5abf5b, "vlan_vid_del" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0x5690c1f4, "vlan_vid_add" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x62333053, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x63616516, "netif_rx" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xfd3d2b80, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc09e8ca4, "nf_unregister_net_hooks" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0xbc01d2a0, "netif_stacked_transfer_operstate" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbafac945, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0xdeb0eda5, "nf_register_net_hooks" },
	{ 0x6dc988f4, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x82e35236, "eth_header_parse" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x1d0ba5ee, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xe1ac9f31, "dev_uc_unsync" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x7201e16a, "eth_header_cache" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x161f25c8, "dev_uc_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbec4c087, "ip6_local_out" },
	{ 0xad263612, "consume_skb" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x24adc7f9, "netdev_is_rx_handler_busy" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xd078c3ba, "dev_mc_sync" },
	{ 0xe5d994a, "dev_pre_changeaddr_notify" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe51b313, "ip6_route_input_lookup" },
	{ 0xf105fed9, "__do_once_done" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "212B3D0C11545A5CB3F5A03");
