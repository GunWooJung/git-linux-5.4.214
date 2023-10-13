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
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x35775925, "misc_deregister" },
	{ 0x45e06ec8, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x5fd264df, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xf6ae341b, "bioset_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x6058fddc, "bio_list_copy_data" },
	{ 0x2b433d2b, "clear_wb_congested" },
	{ 0xece784c2, "rb_first" },
	{ 0x4f556428, "generic_make_request" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xeae5711f, "set_user_nice" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0x7542f943, "bio_reset" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xf07719f6, "bio_devname" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0x420e5e3b, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x78e3eb49, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xb54e249b, "bio_chain" },
	{ 0x8d104b58, "bio_split" },
	{ 0xd4c4db5e, "blk_queue_split" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0xfa3a11e8, "bd_set_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xd267dbfb, "device_create" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x62104b22, "blk_queue_logical_block_size" },
	{ 0x165f438e, "blk_queue_make_request" },
	{ 0xe3bac60c, "set_blocksize" },
	{ 0x6f395e65, "__module_get" },
	{ 0x6017cc7a, "bdevname" },
	{ 0xffed57c, "blkdev_get" },
	{ 0xdccfa9f4, "bdget" },
	{ 0x60c75e05, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6b984e25, "__blkdev_driver_ioctl" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xa6191095, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca9360b5, "rb_next" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xa239ac16, "bio_put" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0xc5850110, "printk" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x65e83bab, "blkdev_put" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7ee415d5, "single_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x94a245fa, "blk_rq_map_kern" },
	{ 0xe14b3ea8, "blk_put_request" },
	{ 0x76e61117, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x7c3860dc, "blk_get_request" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F7ED0C59BE5A77176529C3F");
