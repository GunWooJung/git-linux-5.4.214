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
	{ 0x7ae21060, "rdma_rw_ctx_init" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8c11ebf4, "nvmet_req_uninit" },
	{ 0x25c77496, "ib_dealloc_pd_user" },
	{ 0xd19d0ad8, "nvmet_ctrl_fatal_error" },
	{ 0x66979fd2, "ib_drain_qp" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xa8198878, "__rdma_create_id" },
	{ 0x463ac158, "nvmet_sq_init" },
	{ 0xae316914, "rdma_destroy_id" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5af0a6b, "ib_create_srq" },
	{ 0x61f8b9fc, "nvmet_req_execute" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xc47d8e9a, "__rdma_accept" },
	{ 0xc5622172, "ib_destroy_qp_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xc96d535e, "__ib_alloc_cq_user" },
	{ 0x98ab7bb6, "rdma_destroy_qp" },
	{ 0x4a0b1193, "rdma_listen" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x998dfdfc, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0x1fc7daa8, "rdma_set_afonly" },
	{ 0x9e9ce95d, "rdma_notify" },
	{ 0xb52aecf0, "nvmet_register_transport" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x721c9d1f, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x76a1dd49, "rdma_rw_ctx_wrs" },
	{ 0xcc657a0, "nvmet_req_free_sgl" },
	{ 0xe6977f13, "rdma_create_qp" },
	{ 0x2a25e351, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x49f0406b, "ib_register_client" },
	{ 0x9197013a, "rdma_bind_addr" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x6ebaf85e, "nvmet_unregister_transport" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x679eeb0, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xae179a95, "ib_destroy_srq_user" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaec30595, "rdma_disconnect" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8a43c928, "rdma_reject" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x1b2b718b, "rdma_rw_ctx_post" },
	{ 0x37a0cba, "kfree" },
	{ 0x3644bd22, "nvmet_req_alloc_sgl" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xaf403515, "nvmet_req_complete" },
	{ 0xa8064d4, "__ib_alloc_pd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x5b8c1e70, "rdma_rw_ctx_destroy" },
	{ 0x69ae3722, "rdma_reject_msg" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xd35dc02d, "ib_unregister_client" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xdb099f5f, "ib_free_cq_user" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core,nvmet,rdma_cm");


MODULE_INFO(srcversion, "076BDB6D26C840D7BEAB328");
