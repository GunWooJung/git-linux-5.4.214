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
	{ 0x7b40cb30, "transport_class_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7e199ab7, "scsi_remove_target" },
	{ 0x5f3d4f66, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8f10901d, "scsi_flush_work" },
	{ 0x7cc8826c, "blk_mq_run_hw_queues" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x29311881, "transport_destroy_device" },
	{ 0x6228529d, "bsg_job_put" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeef16a02, "attribute_container_unregister" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9e169519, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x570355ce, "bsg_job_get" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xce2f01d5, "device_del" },
	{ 0xddc16852, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd2e33a2c, "transport_add_device" },
	{ 0xc5850110, "printk" },
	{ 0xa2a96a84, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x690737c8, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x1c2a4651, "transport_class_unregister" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfb0d883e, "scsi_target_unblock" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x6b6ac946, "scsi_host_get" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb6613e14, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x75b95e4, "blk_mq_end_request" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x2275ee97, "__scsi_init_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x535449e7, "device_initialize" },
	{ 0x78ddafb2, "scsi_is_target_device" },
	{ 0xa85be03a, "scsi_nl_sock" },
	{ 0xcb60ab8c, "transport_remove_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbfc30f0b, "scsi_target_block" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x1cbf0608, "bsg_remove_queue" },
	{ 0x33dfc005, "bsg_setup_queue" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "933B32C63DC87EA8829348F");
