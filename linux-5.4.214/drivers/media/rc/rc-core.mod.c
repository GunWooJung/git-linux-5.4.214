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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3c414d30, "led_trigger_event" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6932b09e, "stream_open" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xce2f01d5, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca669996, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6a58d2ee, "cdev_device_add" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5ea7b752, "led_trigger_unregister_simple" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd0ef71ad, "kobject_get_path" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x535449e7, "device_initialize" },
	{ 0x50a90e8d, "bsearch" },
	{ 0x8885b2f5, "led_trigger_register_simple" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x93f79281, "cdev_device_del" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5328374d, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x719e0e44, "add_uevent_var" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AF48D0D70DBAC15FEF94ED1");
