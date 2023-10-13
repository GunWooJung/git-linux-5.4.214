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
	{ 0x7551b46e, "dm_tm_open_with_sm" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x442f5afa, "fs_bio_set" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x4a2115c6, "__blkdev_issue_discard" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x87c934be, "dm_tm_inc" },
	{ 0x3646e38f, "dm_tm_issue_prefetches" },
	{ 0xc6cabe2a, "dm_cell_visit_release" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0x33dee790, "submit_bio_wait" },
	{ 0x48e323be, "dm_bm_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0x49081644, "dm_btree_remove" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa1f8d155, "dm_get_device" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0x70987b60, "dm_table_get_md" },
	{ 0xf398644f, "dm_btree_lookup_next" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x764567c8, "dm_btree_find_highest_key" },
	{ 0x688d422d, "dm_bm_block_size" },
	{ 0xfe31a96e, "dm_bio_prison_free_cell" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x357315d2, "bio_uninit" },
	{ 0x88295b96, "dm_tm_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x60f968b2, "dm_register_target" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xed934884, "dm_kcopyd_copy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0xd163cade, "dm_tm_commit" },
	{ 0x6791a44e, "dm_deferred_entry_dec" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x24621ca3, "dm_sm_disk_open" },
	{ 0x9172fb51, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0x2417c5c4, "dm_btree_empty" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb70b342a, "dm_bio_prison_destroy" },
	{ 0x5ab5fd4f, "dm_cell_release" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x7542f943, "bio_reset" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xa616f9e1, "dm_kcopyd_zero" },
	{ 0x2f40da68, "dm_bm_set_read_write" },
	{ 0xfd7af9ef, "bio_init" },
	{ 0x4740c60c, "dm_set_target_max_io_len" },
	{ 0x4f477261, "dm_bm_checksum" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xe4627ca6, "dm_get_md" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x72289260, "dm_block_manager_destroy" },
	{ 0x2a5f5ead, "zero_fill_bio_iter" },
	{ 0xfdd92a79, "dm_internal_resume" },
	{ 0x378180d9, "dm_unregister_target" },
	{ 0xb54e249b, "bio_chain" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xca2e3a88, "dm_deferred_entry_inc" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x5375ca71, "dm_bm_write_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xaf55d96c, "dm_suspended" },
	{ 0x4f556428, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe3a53f4c, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9e798e22, "dm_bm_set_read_only" },
	{ 0x88a501e3, "dm_bio_prison_alloc_cell" },
	{ 0xa6191095, "bio_endio" },
	{ 0xa239ac16, "bio_put" },
	{ 0x7b047bd9, "dm_tm_create_non_blocking_clone" },
	{ 0x7ade1071, "dm_tm_destroy" },
	{ 0x7485935a, "dm_btree_lookup" },
	{ 0xe781f874, "dm_tm_dec" },
	{ 0x30c37cc0, "dm_bm_write_lock_zero" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbb440ada, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0xcae2e5a9, "dm_cell_release_no_holder" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xd51c29f1, "dm_sm_disk_create" },
	{ 0x6017cc7a, "bdevname" },
	{ 0x5cf0d0bb, "dm_tm_create_with_sm" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b6b3af5, "dm_bm_read_lock" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4a4cb558, "dm_btree_insert_notify" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x2eb01e04, "dm_deferred_set_destroy" },
	{ 0x28c093eb, "dm_device_name" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6f2fe3c4, "dm_btree_remove_leaves" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x54f69d, "dm_tm_pre_commit" },
	{ 0xefa76503, "dm_cell_error" },
	{ 0x84267aa, "dm_bio_from_per_bio_data" },
	{ 0x5475ba9e, "dm_block_location" },
	{ 0x37a0cba, "kfree" },
	{ 0x932a6ffc, "dm_tm_shadow_block" },
	{ 0xb6d5c65d, "dm_deferred_set_add_work" },
	{ 0x4bec64a6, "dm_internal_suspend_noflush" },
	{ 0x3a797d19, "dm_btree_del" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x753e20b2, "dm_bio_prison_create" },
	{ 0x172b3519, "dm_block_manager_create" },
	{ 0x95a52abd, "dm_bm_is_read_only" },
	{ 0xca9360b5, "rb_next" },
	{ 0xfed2e000, "dm_put_device" },
	{ 0x6238d28b, "dm_per_bio_data" },
	{ 0x85d6b552, "dm_noflush_suspending" },
	{ 0x1e3f728d, "dm_block_data" },
	{ 0x9290e07a, "dm_tm_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xe198232, "dm_btree_insert" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x17dd39d6, "dm_deferred_set_create" },
	{ 0xd26df782, "dm_bio_detain" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-persistent-data,dm-bio-prison");


MODULE_INFO(srcversion, "427BB3163FAB2EE56CA496E");