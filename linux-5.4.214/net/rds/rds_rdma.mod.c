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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0xb67ea190, "rds_trans_register" },
	{ 0x585f567b, "rds_message_populate_header" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0xf73cd43a, "rds_message_put" },
	{ 0x150eafc3, "rdma_consumer_reject_data" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfe6032, "ipv6_chk_addr" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xecb2e22, "rds_connect_complete" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x25c77496, "ib_dealloc_pd_user" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x3a312232, "rds_conn_path_drop" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x93a5d64f, "rds_message_unmapped" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x36087aa4, "rds_stats" },
	{ 0x70b8e2f0, "rds_conn_create" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe0b3b32, "rdma_read_gids" },
	{ 0xa8198878, "__rdma_create_id" },
	{ 0xae316914, "rdma_destroy_id" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x55ba70cc, "rds_recv_incoming" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbea19a52, "set_page_dirty" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe7866372, "ib_modify_qp" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xdb1f1e00, "rds_inc_init" },
	{ 0x668b19a1, "down_read" },
	{ 0xcc1a175a, "rdma_connect" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9d94943e, "ib_destroy_cq_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e491a04, "ib_unmap_fmr" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc47d8e9a, "__rdma_accept" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd26cdcd5, "__ib_create_cq" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa0b79326, "copy_page_to_iter" },
	{ 0x7b399e66, "rds_page_remainder_alloc" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x98ab7bb6, "rdma_destroy_qp" },
	{ 0x41ae16e, "rds_info_register_func" },
	{ 0x4a0b1193, "rdma_listen" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x9e9ce95d, "rdma_notify" },
	{ 0x2b0d543c, "rds_message_add_extension" },
	{ 0xfb481954, "vprintk" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdbf3d04e, "rds_inc_put" },
	{ 0x85e4e520, "rds_stats_info_copy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x24e3eff1, "rds_send_xmit" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x165ab360, "kmem_cache_create_usercopy" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xce807a25, "up_write" },
	{ 0x2c959af1, "rds_send_drop_acked" },
	{ 0x721c9d1f, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x968a9719, "ib_set_client_data" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfc5e9980, "rds_rdma_send_complete" },
	{ 0x27455683, "ib_map_mr_sg" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x3e7102a2, "rds_conn_destroy" },
	{ 0xe6977f13, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49f0406b, "ib_register_client" },
	{ 0x9197013a, "rdma_bind_addr" },
	{ 0x3aa90dc1, "rds_conn_connect_if_down" },
	{ 0x9b5a4fe, "rds_atomic_send_complete" },
	{ 0xb9d025c9, "llist_del_first" },
	{ 0xd8897522, "rdma_resolve_route" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x9ad28d84, "ib_dealloc_fmr" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa467af, "rds_wq" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x582fe5cf, "rds_message_add_rdma_dest_extension" },
	{ 0xe4782cf4, "rds_for_each_conn_info" },
	{ 0xd118d9b1, "ib_alloc_mr_user" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaec30595, "rdma_disconnect" },
	{ 0xfde00f4a, "ib_alloc_fmr" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8a43c928, "rdma_reject" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x639fbaf4, "ib_dereg_mr_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x6c9e7da5, "rds_info_deregister_func" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xa28c1025, "rds_trans_unregister" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x7b38b7e7, "rdma_set_service_type" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x42b02a1a, "rdma_resolve_addr" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa8064d4, "__ib_alloc_pd" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xd9534151, "rds_message_addref" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd35dc02d, "ib_unregister_client" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x75942744, "__put_page" },
	{ 0xdf68ef6, "rds_conn_drop" },
	{ 0xfd22dd56, "rds_cong_map_updated" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x200b2041, "in6addr_any" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "rds,rdma_cm,ib_core");


MODULE_INFO(srcversion, "1A75E02A450CAAF25BD0BDC");