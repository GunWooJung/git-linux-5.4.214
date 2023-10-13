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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x118ffb36, "nvme_get_features" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x8b2f605c, "nvme_reset_ctrl" },
	{ 0x879724cb, "param_get_int" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xc9a60d21, "pci_sriov_configure_simple" },
	{ 0xe2569725, "device_release_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4b1e60bc, "nvme_wait_reset" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xbef3c09c, "nvme_stop_ctrl" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x83271891, "nvme_unfreeze" },
	{ 0xb7b55579, "blk_mq_tagset_busy_iter" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0x26690844, "nvme_set_features" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x35ed15f3, "nvme_shutdown_ctrl" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa0fb54ad, "nvme_set_queue_count" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xf72b8ff8, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4d2f8209, "blk_mq_tag_to_rq" },
	{ 0x583fb2bb, "nvme_complete_async_event" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf8329ec5, "nvme_kill_queues" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x50d4a390, "param_set_int" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x6103ec6d, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfc6fc859, "blk_mq_update_nr_hw_queues" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x8a9c70ed, "nvme_sec_submit" },
	{ 0x7bbeba88, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x369bfb7c, "nvme_try_sched_reset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x7681a302, "nvme_enable_ctrl" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xcaccfdea, "blk_put_queue" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0x881e0352, "sysfs_remove_file_from_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0xd8a5608d, "nvme_init_identify" },
	{ 0x7f97ac6, "nvme_remove_namespaces" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd673be15, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4fac3710, "blk_execute_rq_nowait" },
	{ 0x3559fcf8, "pci_load_saved_state" },
	{ 0xdfb7f21b, "pci_request_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3ae98b1e, "blk_get_queue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa741afd2, "nvme_init_ctrl" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x502c40c6, "nvme_change_ctrl_state" },
	{ 0x3d7c8e90, "blk_mq_free_request" },
	{ 0x54085d0d, "__tracepoint_nvme_sq" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9c122bcf, "mempool_create_node" },
	{ 0x2ab81d97, "pci_free_irq" },
	{ 0x8e17faf3, "put_device" },
	{ 0xf1ed6272, "dma_max_mapping_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc89f5ee6, "nvme_sync_queues" },
	{ 0x797bf872, "nvme_cleanup_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xae5d9e1a, "nvme_cancel_request" },
	{ 0xeff96f81, "nvme_wait_freeze" },
	{ 0x9d618faf, "blk_mq_pci_map_queues" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xab19c39d, "blk_rq_map_sg" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x926c1cea, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x764a24b9, "nvme_disable_ctrl" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x610ce49f, "blk_mq_quiesce_queue" },
	{ 0xafb12156, "nvme_submit_sync_cmd" },
	{ 0x5e89d5ea, "blk_mq_unquiesce_queue" },
	{ 0xedc03953, "iounmap" },
	{ 0xce7c87d3, "nvme_start_ctrl" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x552cf0a1, "nvme_start_freeze" },
	{ 0x96848186, "scnprintf" },
	{ 0x4f76311c, "nvme_setup_cmd" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xe6ea02f4, "nvme_alloc_request" },
	{ 0x6872788e, "nvme_start_queues" },
	{ 0xd76c6a37, "blk_mq_tagset_wait_completed_request" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0xca30ab0b, "nvme_wait_freeze_timeout" },
	{ 0x731cdee3, "pci_release_selected_regions" },
	{ 0x2ca6d6fe, "pci_request_selected_regions" },
	{ 0x51f424c7, "nvme_complete_rq" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8f5d46a5, "nvme_uninit_ctrl" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc667bcba, "pcie_aspm_enabled" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xf105fed9, "__do_once_done" },
};

MODULE_INFO(depends, "nvme-core");

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00001092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00001F1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Cd00001504sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");
MODULE_ALIAS("pci:v00002646d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D8CC3DBDBAF719372D6C1BA");
