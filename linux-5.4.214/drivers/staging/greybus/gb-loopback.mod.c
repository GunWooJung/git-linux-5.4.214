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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x94618474, "gb_connection_latency_tag_disable" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xa36a5a27, "gb_connection_latency_tag_enable" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x2fa96f27, "device_create_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xc40eea66, "gb_operation_request_send" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xe1bfac46, "greybus_register_driver" },
	{ 0x66ea175b, "greybus_deregister_driver" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe7c8c0fc, "gb_operation_request_send_sync_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2f29cc3d, "gb_operation_result" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x267c9a75, "gb_operation_response_alloc" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x22683675, "gb_operation_get_payload_size_max" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x70117f57, "gb_operation_put" },
	{ 0x5c8c319a, "gb_operation_create_flags" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "7EE7B96CFB826A1157CE79A");
