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
	{ 0xe7750f8, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0x8082397, "get_net_ns_by_fd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xe428c6a2, "netlink_has_listeners" },
	{ 0x50be748d, "security_ib_free_security" },
	{ 0x349cba85, "strchr" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9da0ba4, "xa_set_mark" },
	{ 0xbfe6032, "ipv6_chk_addr" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd3a0eec8, "vlan_dev_vlan_id" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf738d1be, "register_blocking_lsm_notifier" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x2f2e91b2, "security_ib_alloc_security" },
	{ 0xf2158c24, "rdmacg_uncharge" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc824197d, "netlink_ns_capable" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x9ec657f8, "netdev_master_upper_dev_get_rcu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x866515d9, "kthread_destroy_worker" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7997fbf0, "netdev_walk_all_upper_dev_rcu" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa0ebc08, "__xa_cmpxchg" },
	{ 0xf13651c8, "netdev_has_upper_dev_all_rcu" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x991bf609, "dev_printk_emit" },
	{ 0x7f18313d, "__neigh_event_send" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xfe01d957, "__get_task_comm" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xce2f01d5, "device_del" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x131a6146, "xa_clear_mark" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xfd3d2b80, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xe698f19a, "netlink_kernel_release" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xc2f29a5a, "ipv6_stub" },
	{ 0xce807a25, "up_write" },
	{ 0x721c9d1f, "init_net" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6d88f1e3, "vlan_dev_real_dev" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xa52ed0cd, "__task_pid_nr_ns" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x3f89071b, "security_ib_pkey_access" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc2637667, "netlink_capable" },
	{ 0x2bac761d, "kthread_queue_work" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0xe58090ca, "security_ib_endport_manage_subnet" },
	{ 0xcf377500, "net_ns_type_operations" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x489f6e0b, "rdma_dim" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xaa8cb09, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xab3ce9ef, "netlink_ack" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x88822d38, "unregister_blocking_lsm_notifier" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x54deb792, "init_pid_ns" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0xec6bedce, "__netlink_kernel_create" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xed422f8, "in6_dev_finish_destroy" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x535449e7, "device_initialize" },
	{ 0xde09a94d, "xas_find" },
	{ 0x1b777357, "rdmacg_unregister_device" },
	{ 0x4075ebdd, "__put_task_struct" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x809e726c, "__ip_dev_find" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa1691b63, "xas_find_marked" },
	{ 0xcb24416c, "task_active_pid_ns" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x1b6865c, "xa_get_mark" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x8ba1c4f2, "ip6_dst_hoplimit" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x17b6aadc, "kthread_create_worker" },
	{ 0x8cc5e266, "netdev_walk_all_lower_dev_rcu" },
	{ 0xee1eedcf, "rdmacg_try_charge" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1757935, "rdmacg_register_device" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B8DA1BBF879E15745731C7E");
