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
	{ 0x61b7b126, "simple_strtoull" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0xc2ae5086, "kmem_cache_alloc_node" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7cc8826c, "blk_mq_run_hw_queues" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x559db65e, "blkcg_policy_register" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x50aad004, "wbt_enable_default" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbb3bb05c, "elv_rb_latter_request" },
	{ 0xea920c30, "blkg_conf_prep" },
	{ 0x5f551d66, "blkg_print_stat_ios" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4153a64, "elv_rqhash_del" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0xa579605c, "elv_rb_del" },
	{ 0xc528dec4, "elv_rb_find" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x35fe8a93, "bio_associate_blkg_from_css" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x35cd4151, "blk_mq_sched_try_insert_merge" },
	{ 0x14e252a9, "elevator_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6e24d7b, "elv_unregister" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x32fa02c8, "blkg_conf_finish" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xdbdecbf0, "blk_mq_sched_request_inserted" },
	{ 0x44afd4da, "elv_rqhash_add" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa2a10fb0, "of_css" },
	{ 0x97050e73, "ioc_lookup_icq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x89e4d5fb, "elv_register" },
	{ 0x71a516b3, "blkg_print_stat_bytes" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x3d7c8e90, "blk_mq_free_request" },
	{ 0x7f97c2e4, "elv_bio_merge_ok" },
	{ 0xb53c5af1, "__trace_note_message" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6e52ad7e, "blkg_print_stat_bytes_recursive" },
	{ 0x7de6cc23, "io_cgrp_subsys_on_dfl_key" },
	{ 0x48c716a1, "blkcg_policy_unregister" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x35d62125, "blkg_print_stat_ios_recursive" },
	{ 0x37a0cba, "kfree" },
	{ 0x62901e38, "blkcg_deactivate_policy" },
	{ 0x7996f380, "__blkg_prfill_u64" },
	{ 0x2c43943f, "blkcg_print_blkgs" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x7b4c9ba9, "sbitmap_queue_min_shallow_depth" },
	{ 0xec0517f, "kernfs_path_from_node" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8199869d, "elv_rb_former_request" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4ae60d3, "wbt_disable_default" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0x740ad107, "blk_mq_sched_try_merge" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x51899d31, "blkcg_activate_policy" },
	{ 0xb549fdd8, "elv_rb_add" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "08DAB2A2EA20109DC3784EE");
