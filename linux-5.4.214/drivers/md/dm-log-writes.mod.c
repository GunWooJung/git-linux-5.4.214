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
	{ 0x378180d9, "dm_unregister_target" },
	{ 0x60f968b2, "dm_register_target" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa6191095, "bio_endio" },
	{ 0xbbd962b3, "iov_iter_revert" },
	{ 0xf4b8948, "_copy_from_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4559273a, "dax_copy_from_iter" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x754d539c, "strlen" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfed2e000, "dm_put_device" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xa1f8d155, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbb440ada, "submit_bio" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0x442f5afa, "fs_bio_set" },
	{ 0x29361773, "complete" },
	{ 0xc5850110, "printk" },
	{ 0xa239ac16, "bio_put" },
	{ 0xdf6b3d8, "bio_free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x96848186, "scnprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6238d28b, "dm_per_bio_data" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0x5652775a, "dax_copy_to_iter" },
	{ 0x26ab7c1f, "bdev_dax_pgoff" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EF3676FA3A5A2DDC0EEAB76");
