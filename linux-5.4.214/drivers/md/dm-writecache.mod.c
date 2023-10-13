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
	{ 0x378180d9, "dm_unregister_target" },
	{ 0x60f968b2, "dm_register_target" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0xbb440ada, "submit_bio" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xa239ac16, "bio_put" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4f556428, "generic_make_request" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2816ff30, "dm_accept_partial_bio" },
	{ 0xece784c2, "rb_first" },
	{ 0xa6191095, "bio_endio" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xaf55d96c, "dm_suspended" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeade671, "vmap" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x64925270, "__dax_synchronous" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xa1f8d155, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xf6ae341b, "bioset_init" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xed934884, "dm_kcopyd_copy" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0xfed2e000, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x45e06ec8, "bioset_exit" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x833c3313, "__memcpy_mcsafe" },
	{ 0xe686abf, "bio_advance" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0x99c011d8, "mcsafe_key" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xca9360b5, "rb_next" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc5850110, "printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x29361773, "complete" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbbe5163, "dm_io" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A97943028D7B73CE23EA540");
