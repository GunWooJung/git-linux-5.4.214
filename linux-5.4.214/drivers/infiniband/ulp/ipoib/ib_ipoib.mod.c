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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc9613585, "ib_send_cm_rej" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xd5092be3, "dev_change_flags" },
	{ 0x26431d8b, "ib_attach_mcast" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x6a424ee, "ib_set_vf_link_state" },
	{ 0xbfe6032, "ipv6_chk_addr" },
	{ 0x9bf6dd1e, "ib_find_pkey" },
	{ 0x25c77496, "ib_dealloc_pd_user" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8be2d76a, "rdma_init_netdev" },
	{ 0x326015ac, "ib_sa_join_multicast" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x53092dcc, "ib_send_cm_req" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x72bd5852, "arp_tbl" },
	{ 0x7390213f, "ib_send_cm_rtu" },
	{ 0xec31828f, "rdma_set_cq_moderation" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2d9d51ba, "ib_query_pkey" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x9ec657f8, "netdev_master_upper_dev_get_rcu" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x899f833, "__icmp_send" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x95624a16, "in_dev_finish_destroy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7997fbf0, "netdev_walk_all_upper_dev_rcu" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0xe7866372, "ib_modify_qp" },
	{ 0x668b19a1, "down_read" },
	{ 0x9d94943e, "ib_destroy_cq_user" },
	{ 0xc2b1d2fb, "ib_get_device_fw_str" },
	{ 0xc5af0a6b, "ib_create_srq" },
	{ 0x4e90435c, "ib_sa_free_multicast" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xa4237c66, "rdma_destroy_ah_user" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0x438cfdc0, "ib_send_cm_drep" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x1e1ef99c, "ib_get_vf_stats" },
	{ 0xbf5c04a2, "ib_cm_init_qp_attr" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc5622172, "ib_destroy_qp_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd26cdcd5, "__ib_create_cq" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d4ca59e, "ib_send_cm_rep" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x925b1648, "ib_query_port" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x577cb7ed, "inet_confirm_addr" },
	{ 0xce807a25, "up_write" },
	{ 0x5f28d099, "rdma_alloc_netdev" },
	{ 0x57bc19d2, "down_write" },
	{ 0x968a9719, "ib_set_client_data" },
	{ 0x5181b8f4, "rdma_destroy_ah_attr" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5efa6669, "ib_sa_unregister_client" },
	{ 0xd1392076, "ib_create_cm_id" },
	{ 0x855970e9, "ib_sa_path_rec_get" },
	{ 0x5748356e, "device_create_file" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49f0406b, "ib_register_client" },
	{ 0xda0d50ec, "ib_sa_cancel_query" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xe6c35a74, "ib_unregister_event_handler" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xffe7d76d, "ib_sa_get_mcmember_rec" },
	{ 0x12a38747, "usleep_range" },
	{ 0x31c625fe, "ib_detach_mcast" },
	{ 0x7b3fe368, "ib_register_event_handler" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2d45b8d4, "ib_find_cached_pkey" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xae179a95, "ib_destroy_srq_user" },
	{ 0x54f5b24a, "rdma_create_ah" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x5c870e6d, "ib_find_gid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xad128a84, "ib_destroy_cm_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2dc8fc7f, "ib_query_qp" },
	{ 0xab027aa7, "ib_get_vf_config" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x70e4cae0, "ib_cm_listen" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xa9a07159, "rdma_query_gid" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0xb9f96d3, "ib_sa_register_client" },
	{ 0x492f5370, "ib_sa_sendonly_fullmem_support" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0xa8064d4, "__ib_alloc_pd" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xdcb92628, "ib_create_qp_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x7cdb00f9, "ib_set_vf_guid" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x5c729d9a, "ib_init_ah_attr_from_path" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x47c7b75d, "icmp6_send" },
	{ 0xd35dc02d, "ib_unregister_client" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x1cc490fb, "dev_set_mtu" },
};

MODULE_INFO(depends, "ib_cm,ib_core");


MODULE_INFO(srcversion, "24F454D0E6D1F6D9D16183C");
