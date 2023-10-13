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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe1bfac46, "greybus_register_driver" },
	{ 0x66ea175b, "greybus_deregister_driver" },
	{ 0xd267dbfb, "device_create" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe7c8c0fc, "gb_operation_request_send_sync_timeout" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0x267c9a75, "gb_operation_response_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xd995a57d, "gb_spilib_master_init" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x80500894, "request_firmware" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5328374d, "__class_create" },
	{ 0x22683675, "gb_operation_get_payload_size_max" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x70117f57, "gb_operation_put" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x5c8c319a, "gb_operation_create_flags" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x15e82f88, "gb_spilib_master_exit" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x174a5d7a, "gb_interface_request_mode_switch" },
};

MODULE_INFO(depends, "greybus,gb-spilib");


MODULE_INFO(srcversion, "AB5D7751CE48BCA40DA081B");
