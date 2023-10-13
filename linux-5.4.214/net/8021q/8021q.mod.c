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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdca36692, "mrp_uninit_applicant" },
	{ 0xd5092be3, "dev_change_flags" },
	{ 0x8a1dc711, "vlan_filter_push_vids" },
	{ 0xb5cc056f, "dev_mc_unsync" },
	{ 0xd6e44ce2, "mrp_request_leave" },
	{ 0x55a3bf01, "vlan_filter_drop_vids" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x76d8f2be, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3b934acc, "garp_uninit_applicant" },
	{ 0xd3a0eec8, "vlan_dev_vlan_id" },
	{ 0x389214e7, "dev_uc_add" },
	{ 0x7c4cb043, "_proc_mkdir" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x9adeae57, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xed37ffc6, "vlan_uses_dev" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xeceb2de5, "dev_set_allmulti" },
	{ 0x5a5abf5b, "vlan_vid_del" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0x5690c1f4, "vlan_vid_add" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9610d85b, "__netpoll_setup" },
	{ 0x89b2ead6, "garp_init_applicant" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xe171eab3, "proc_remove" },
	{ 0xf76c51f1, "vlan_ioctl_set" },
	{ 0xbf23496d, "netpoll_send_skb_on_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xfd3d2b80, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xdb5dcf44, "garp_register_application" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbc01d2a0, "netif_stacked_transfer_operstate" },
	{ 0x721c9d1f, "init_net" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x89bc107d, "garp_request_leave" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x82e35236, "eth_header_parse" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x75eff3b4, "mrp_init_applicant" },
	{ 0x1d0ba5ee, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xe1ac9f31, "dev_uc_unsync" },
	{ 0x67a8d5f, "__dev_get_by_name" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe23c8097, "garp_unregister_application" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xa2a604a8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x88bc15dd, "mrp_register_application" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6b2f99a2, "dev_uc_del" },
	{ 0x161f25c8, "dev_uc_sync" },
	{ 0x2acd262f, "__netpoll_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x98e23c5b, "mrp_unregister_application" },
	{ 0x7563f8a0, "mrp_request_join" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd078c3ba, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x177cfc88, "dev_get_stats" },
	{ 0x1cc490fb, "dev_set_mtu" },
};

MODULE_INFO(depends, "mrp,garp");


MODULE_INFO(srcversion, "634123A919317BAF16A45A8");
