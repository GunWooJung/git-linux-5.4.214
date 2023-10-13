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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0x2ebef684, "vm_map_pages_zero" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbf1a9899, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x535449e7, "device_initialize" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "crc-itu-t");


MODULE_INFO(srcversion, "292D39A01CF8EAD7E86071E");
