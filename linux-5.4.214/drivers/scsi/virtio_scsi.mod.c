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
	{ 0x580796e, "unregister_virtio_driver" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xba3f45f1, "register_virtio_driver" },
	{ 0x1953c958, "mempool_create" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xad92de27, "virtqueue_get_vring_size" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb18acd9, "blk_mq_unique_tag" },
	{ 0xacc03556, "scsi_rescan_device" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x17d0ff05, "__scsi_execute" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0xc5850110, "printk" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xa7556a63, "virtio_check_driver_offered_feature" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4dcd739, "virtqueue_add_sgs" },
	{ 0x254ca682, "virtqueue_notify" },
	{ 0xf3cdabc9, "virtqueue_kick_prepare" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x2b5e6b23, "blk_mq_virtio_map_queues" },
	{ 0x49ebd2, "virtqueue_kick" },
	{ 0x4a62a2a0, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x29361773, "complete" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x19c11c2c, "virtqueue_enable_cb" },
	{ 0x42651f42, "virtqueue_is_broken" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x977beaa3, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000008v*");

MODULE_INFO(srcversion, "DB6ADC47D43F143E8CB42C3");
