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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x6d6b9626, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x442f5afa, "fs_bio_set" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5cab9945, "unregister_xenbus_watch" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0x1ea8def5, "xenbus_map_ring_valloc" },
	{ 0x9f3aba5e, "gnttab_map_refs" },
	{ 0x349cba85, "strchr" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x418342ee, "xenbus_dev_error" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x10b55bd8, "xenbus_dev_is_online" },
	{ 0xc6401070, "gnttab_alloc_pages" },
	{ 0xc778d97f, "gnttab_unmap_refs" },
	{ 0x4b931968, "xen_features" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x8e4eefd9, "filemap_write_and_wait" },
	{ 0x2ce7b8e0, "gnttab_unmap_refs_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x94869962, "invalidate_inode_pages2" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfc26a83, "gnttab_unmap_refs_async" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbf975ac, "xenbus_unmap_ring_vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9af0e090, "gnttab_free_pages" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xf23ce906, "__xenbus_register_backend" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x3090cb05, "bind_interdomain_evtchn_to_irqhandler_lateeoi" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0x50daa240, "xenbus_watch_pathfmt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x1ad5f958, "blkdev_get_by_dev" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa239ac16, "bio_put" },
	{ 0x5748356e, "device_create_file" },
	{ 0xc2c5802, "work_busy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd0458ccb, "xenbus_strstate" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xbb440ada, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x9f984513, "strrchr" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x65e83bab, "blkdev_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x6f395e65, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x587138e0, "xenbus_switch_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x75362760, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C57F86DECBCBF5D8F5FA18C");
