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
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0x8b2f605c, "nvme_reset_ctrl" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xbef3c09c, "nvme_stop_ctrl" },
	{ 0xb7b55579, "blk_mq_tagset_busy_iter" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0x4f85d0e4, "nvmf_register_transport" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa0fb54ad, "nvme_set_queue_count" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xf72b8ff8, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x583fb2bb, "nvme_complete_async_event" },
	{ 0x84824b5a, "nvmf_should_reconnect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6103ec6d, "blk_mq_complete_request" },
	{ 0xc2980348, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfc6fc859, "blk_mq_update_nr_hw_queues" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7bbeba88, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7681a302, "nvme_enable_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x45837452, "nvmf_connect_admin_queue" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xd8a5608d, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbf3c93b4, "nvmf_reg_read64" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9166fada, "strncpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd267dbfb, "device_create" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2b4d03e0, "kobject_uevent_env" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa741afd2, "nvme_init_ctrl" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x502c40c6, "nvme_change_ctrl_state" },
	{ 0xa916b694, "strnlen" },
	{ 0x8e17faf3, "put_device" },
	{ 0x5b11bdd, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x797bf872, "nvme_cleanup_cmd" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2c57f6ba, "nvmf_get_address" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xab19c39d, "blk_rq_map_sg" },
	{ 0x926c1cea, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x7429aaaa, "nvme_delete_ctrl" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb55d0e53, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8bf18a1c, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x610ce49f, "blk_mq_quiesce_queue" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0xd96121b, "nvmf_connect_io_queue" },
	{ 0x5e89d5ea, "blk_mq_unquiesce_queue" },
	{ 0xce7c87d3, "nvme_start_ctrl" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x4f76311c, "nvme_setup_cmd" },
	{ 0x114cf94e, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6872788e, "nvme_start_queues" },
	{ 0xd76c6a37, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb335741, "nvmf_fail_nonready_command" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x51f424c7, "nvme_complete_rq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8f5d46a5, "nvme_uninit_ctrl" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics");


MODULE_INFO(srcversion, "5C7FFE839F272DB2F312ED5");
