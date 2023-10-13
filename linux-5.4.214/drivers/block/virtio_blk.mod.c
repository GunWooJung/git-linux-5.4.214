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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x580796e, "unregister_virtio_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xba3f45f1, "register_virtio_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd107bff3, "blk_queue_physical_block_size" },
	{ 0xdcf85dac, "blk_queue_alignment_offset" },
	{ 0x7481b184, "blk_queue_io_min" },
	{ 0xf1099208, "blk_queue_io_opt" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x268a3de7, "blk_queue_max_discard_segments" },
	{ 0xe2a6db01, "blk_queue_max_discard_sectors" },
	{ 0x22bdce45, "blk_queue_max_write_zeroes_sectors" },
	{ 0x918904e3, "set_disk_ro" },
	{ 0x62104b22, "blk_queue_logical_block_size" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x9e556921, "blk_queue_max_segment_size" },
	{ 0x85788c65, "virtio_max_dma_size" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0xe55d3fc, "blk_queue_max_segments" },
	{ 0x7bbeba88, "blk_mq_init_queue" },
	{ 0x926c1cea, "blk_mq_alloc_tag_set" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x5e89d5ea, "blk_mq_unquiesce_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2b4d03e0, "kobject_uevent_env" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x48a91171, "string_get_size" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3957f4ce, "blk_mq_stop_hw_queue" },
	{ 0x4dcd739, "virtqueue_add_sgs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x49ebd2, "virtqueue_kick" },
	{ 0xab19c39d, "blk_rq_map_sg" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x24977d49, "revalidate_disk" },
	{ 0xb6adb12a, "blk_queue_write_cache" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa7556a63, "virtio_check_driver_offered_feature" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xffb7c514, "ida_free" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x76e61117, "blk_execute_rq" },
	{ 0x754d539c, "strlen" },
	{ 0xe14b3ea8, "blk_put_request" },
	{ 0x94a245fa, "blk_rq_map_kern" },
	{ 0x7c3860dc, "blk_get_request" },
	{ 0x254ca682, "virtqueue_notify" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xf3cdabc9, "virtqueue_kick_prepare" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x75b95e4, "blk_mq_end_request" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x2b5e6b23, "blk_mq_virtio_map_queues" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x610ce49f, "blk_mq_quiesce_queue" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe23ce96b, "blk_mq_start_stopped_hw_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x19c11c2c, "virtqueue_enable_cb" },
	{ 0x42651f42, "virtqueue_is_broken" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0x6103ec6d, "blk_mq_complete_request" },
	{ 0x977beaa3, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000002v*");

MODULE_INFO(srcversion, "C6238C01FBF3D9A7856BE01");
