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
	{ 0xc20d6c3d, "unregister_md_personality" },
	{ 0x82e38d1b, "register_md_personality" },
	{ 0x3201e4c2, "blk_queue_flag_clear" },
	{ 0xd1001a14, "md_unregister_thread" },
	{ 0x22bdce45, "blk_queue_max_write_zeroes_sectors" },
	{ 0x415bb6ed, "blk_queue_max_write_same_sectors" },
	{ 0x4ecf451e, "mddev_init_writes_pending" },
	{ 0x72f81a61, "md_register_thread" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf6ae341b, "bioset_init" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2eb58a7f, "md_allow_write" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4bb3abfb, "md_bitmap_close_sync" },
	{ 0x2cb4dc6b, "md_bitmap_cond_end_sync" },
	{ 0xa4d15d40, "md_bitmap_start_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9e45c8d2, "md_flush_request" },
	{ 0x56fd7ecd, "md_write_start" },
	{ 0xaac4e1a0, "md_wait_for_blocked_rdev" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x56d039f8, "bio_alloc_mddev" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xe41e24bb, "md_bitmap_startwrite" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf07719f6, "bio_devname" },
	{ 0x33dee790, "submit_bio_wait" },
	{ 0xda8da516, "bio_trim" },
	{ 0x39e67bad, "rdev_clear_badblocks" },
	{ 0x124a568e, "md_check_recovery" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x722603f1, "bio_copy_data" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0x7542f943, "bio_reset" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb54e249b, "bio_chain" },
	{ 0x8d104b58, "bio_split" },
	{ 0xfb578fc5, "memset" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x420e5e3b, "bio_clone_fast" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2a5fecc1, "md_cluster_ops" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6fa58088, "md_integrity_register" },
	{ 0xb53c5af1, "__trace_note_message" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x45e06ec8, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xd665786b, "badblocks_check" },
	{ 0x8222b91e, "md_done_sync" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xe1c81d6e, "md_error" },
	{ 0x7ba11376, "rdev_set_badblocks" },
	{ 0x88d09bce, "sync_page_io" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x6720ee52, "disk_stack_limits" },
	{ 0xf39c5b09, "md_integrity_add_rdev" },
	{ 0x4753da3f, "kernfs_notify" },
	{ 0xad84b03e, "md_set_array_sectors" },
	{ 0xd43a8401, "md_bitmap_resize" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x6017cc7a, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4f6a560, "md_bitmap_end_sync" },
	{ 0xa7696816, "md_wakeup_thread" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4f556428, "generic_make_request" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0x86143142, "md_bitmap_unplug" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xa6191095, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa239ac16, "bio_put" },
	{ 0xdf6b3d8, "bio_free_pages" },
	{ 0xabb677fc, "md_write_end" },
	{ 0xa51341c7, "md_bitmap_endwrite" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B20A681E0AC35567A2ADCA");
