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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x879724cb, "param_get_int" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb0e3bc0b, "badblocks_clear" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xd665786b, "badblocks_check" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xd2237016, "radix_tree_delete_item" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb3051965, "config_item_put" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2dedef9e, "blk_queue_chunk_sectors" },
	{ 0x6103ec6d, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x37b8a926, "blk_alloc_queue_node" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0x7bbeba88, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe2a6db01, "blk_queue_max_discard_sectors" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4336fb28, "blk_mq_stop_hw_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x89a604c7, "configfs_register_subsystem" },
	{ 0xb8db9661, "blk_revalidate_disk_zones" },
	{ 0xe23ce96b, "blk_mq_start_stopped_hw_queues" },
	{ 0xa6191095, "bio_endio" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3201e4c2, "blk_queue_flag_clear" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0xbef101c7, "badblocks_show" },
	{ 0x165f438e, "blk_queue_make_request" },
	{ 0xd107bff3, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ee15676, "badblocks_init" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x926c1cea, "blk_mq_alloc_tag_set" },
	{ 0x28aee8ad, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7818e757, "blk_queue_required_elevator_features" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x75b95e4, "blk_mq_end_request" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb6adb12a, "blk_queue_write_cache" },
	{ 0x20e14b35, "badblocks_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x82c87ad5, "nr_online_nodes" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xbc11883d, "badblocks_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x77bc13a0, "strim" },
	{ 0x62104b22, "blk_queue_logical_block_size" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x664f4f51, "config_group_init" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E11798F816D98F876C61B25");
