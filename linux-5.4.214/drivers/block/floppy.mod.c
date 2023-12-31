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
	{ 0x72b243d4, "free_dma" },
	{ 0x7054a3e4, "request_dma" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x15b8e28e, "platform_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x85bd1608, "__request_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9e64fbfe, "rtc_cmos_read" },
	{ 0x7040fff9, "rtc_lock" },
	{ 0xc352bff6, "blk_register_region" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x2c8218b3, "blk_queue_bounce_limit" },
	{ 0xfce9e157, "blk_mq_init_sq_queue" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x868acba5, "get_options" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0x754d539c, "strlen" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3c944d7, "__invalidate_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x629c2edd, "__blk_mq_end_request" },
	{ 0xd2128f34, "blk_update_request" },
	{ 0x57019b76, "check_disk_change" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x999e8297, "vfree" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd9efd73d, "get_disk_and_module" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbb440ada, "submit_bio" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0xfd7af9ef, "bio_init" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x29361773, "complete" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pnp:dPNP0700*");
MODULE_ALIAS("acpi*:PNP0700:*");

MODULE_INFO(srcversion, "FB230282B1FE09CCCC1F89C");
