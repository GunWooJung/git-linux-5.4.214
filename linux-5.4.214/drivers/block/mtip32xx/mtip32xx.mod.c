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
	{ 0x32ee9868, "simple_open" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc5850110, "printk" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xab19c39d, "blk_rq_map_sg" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x618911fc, "numa_node" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x944c43f, "node_states" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7bbeba88, "blk_mq_init_queue" },
	{ 0x926c1cea, "blk_mq_alloc_tag_set" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x6dc65c0a, "sysfs_create_file_ns" },
	{ 0xb368018c, "bdget_disk" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x7481b184, "blk_queue_io_min" },
	{ 0x9e556921, "blk_queue_max_segment_size" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0xd107bff3, "blk_queue_physical_block_size" },
	{ 0xe55d3fc, "blk_queue_max_segments" },
	{ 0x3201e4c2, "blk_queue_flag_clear" },
	{ 0x754d539c, "strlen" },
	{ 0x71652f0f, "fsync_bdev" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xe173653a, "sysfs_remove_file_ns" },
	{ 0x2491a84f, "kobject_get" },
	{ 0x2893196a, "pcim_iounmap_regions" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7f34ad1e, "bdput" },
	{ 0xb7b55579, "blk_mq_tagset_busy_iter" },
	{ 0x5d146d64, "blk_freeze_queue_start" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x150e819b, "blk_set_queue_dying" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3d7c8e90, "blk_mq_free_request" },
	{ 0x76e61117, "blk_execute_rq" },
	{ 0xe432126e, "blk_mq_alloc_request" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x1f5448c3, "blk_abort_request" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x75b95e4, "blk_mq_end_request" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5e89d5ea, "blk_mq_unquiesce_queue" },
	{ 0xf9a482f9, "msleep" },
	{ 0x610ce49f, "blk_mq_quiesce_queue" },
	{ 0x4d2f8209, "blk_mq_tag_to_rq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6103ec6d, "blk_mq_complete_request" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001344d00005150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005153sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005163sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "463D37F86FDC90A71C08287");
