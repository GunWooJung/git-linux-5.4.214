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
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xe1e76060, "iscsi_host_remove" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8f903b3f, "ib_fmr_pool_map_phys" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x25c77496, "ib_dealloc_pd_user" },
	{ 0x3794e54e, "iscsi_queuecommand" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x26c53b85, "iscsi_conn_stop" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa8198878, "__rdma_create_id" },
	{ 0xa42abdf9, "iscsi_eh_recover_target" },
	{ 0x9551809a, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x1343058e, "iscsi_session_teardown" },
	{ 0xae316914, "rdma_destroy_id" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x20a57515, "iscsi_host_add" },
	{ 0xc32b59ff, "ib_destroy_fmr_pool" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6ab8a6c9, "iscsi_host_alloc" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xef735d71, "iscsi_lookup_endpoint" },
	{ 0xcc1a175a, "rdma_connect" },
	{ 0xde47d450, "iscsi_itt_to_ctask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdee8133b, "iscsi_conn_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc96d535e, "__ib_alloc_cq_user" },
	{ 0x720d6915, "ib_check_mr_status" },
	{ 0x98ab7bb6, "rdma_destroy_qp" },
	{ 0x36be89e8, "iscsi_conn_send_pdu" },
	{ 0x8cdb4c5e, "iscsi_session_get_param" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7a46b404, "iscsi_host_set_param" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xaf9b0ece, "iscsi_conn_teardown" },
	{ 0x542dfa62, "iscsi_put_task" },
	{ 0xab8926d2, "iscsi_host_free" },
	{ 0xc809c147, "iscsi_conn_get_param" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5c579670, "iscsi_destroy_endpoint" },
	{ 0x721c9d1f, "init_net" },
	{ 0x292eb9f8, "ib_alloc_mr_integrity" },
	{ 0x27455683, "ib_map_mr_sg" },
	{ 0xe6977f13, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9279ff47, "iscsi_set_param" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xe6c35a74, "ib_unregister_event_handler" },
	{ 0xd8897522, "rdma_resolve_route" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x7b3fe368, "ib_register_event_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x38c97622, "iscsi_register_transport" },
	{ 0xf4ae3b36, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xb2a89d3c, "ib_drain_sq" },
	{ 0xd118d9b1, "ib_alloc_mr_user" },
	{ 0xbe5a043d, "iscsi_prep_data_out_pdu" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaec30595, "rdma_disconnect" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xf241a08f, "iscsi_complete_pdu" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8891bb40, "iscsi_conn_failure" },
	{ 0x2dc8fc7f, "ib_query_qp" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x20c430f8, "iscsi_eh_cmd_timed_out" },
	{ 0x84834e9e, "iscsi_suspend_queue" },
	{ 0x639fbaf4, "ib_dereg_mr_user" },
	{ 0x6f6bac3f, "iscsi_create_endpoint" },
	{ 0xee72f1bc, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x131081e5, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9f337c8f, "ib_create_fmr_pool" },
	{ 0x30222528, "ib_map_mr_sg_pi" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x42b02a1a, "rdma_resolve_addr" },
	{ 0xf1ed9eb1, "iscsi_session_setup" },
	{ 0xbf463a3, "iscsi_host_get_param" },
	{ 0xa8064d4, "__ib_alloc_pd" },
	{ 0x56a525e3, "iscsi_conn_bind" },
	{ 0xf7e00959, "iscsi_target_alloc" },
	{ 0x71d91930, "ib_fmr_pool_unmap" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x69ae3722, "rdma_reject_msg" },
	{ 0x19ba7f74, "iscsi_session_recovery_timedout" },
	{ 0xbac1dbb6, "iscsi_conn_setup" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xdb099f5f, "ib_free_cq_user" },
};

MODULE_INFO(depends, "libiscsi,ib_core,rdma_cm,scsi_transport_iscsi");


MODULE_INFO(srcversion, "7824EF4C15269C219585C68");
