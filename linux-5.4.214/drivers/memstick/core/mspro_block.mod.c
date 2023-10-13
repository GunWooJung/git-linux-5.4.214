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
	{ 0x765395c3, "param_ops_int" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x8bcb19ea, "memstick_unregister_driver" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xf7e914bb, "memstick_register_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x62104b22, "blk_queue_logical_block_size" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9e556921, "blk_queue_max_segment_size" },
	{ 0xe55d3fc, "blk_queue_max_segments" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0xfce9e157, "blk_mq_init_sq_queue" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfdb93f70, "memstick_set_rw_addr" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4a4e5778, "memstick_init_req_sg" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfd94814e, "complete_all" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x629c2edd, "__blk_mq_end_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab19c39d, "blk_rq_map_sg" },
	{ 0xd2128f34, "blk_update_request" },
	{ 0x96848186, "scnprintf" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96ae205d, "memstick_new_req" },
	{ 0xae50437c, "memstick_init_req" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4336fb28, "blk_mq_stop_hw_queues" },
	{ 0x4da1c31c, "blk_mq_start_hw_queues" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "memstick");


MODULE_INFO(srcversion, "C22634497601BB91CFE572E");
