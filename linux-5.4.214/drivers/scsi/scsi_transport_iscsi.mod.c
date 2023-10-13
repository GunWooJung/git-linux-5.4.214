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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7b40cb30, "transport_class_register" },
	{ 0x5128f95e, "class_find_device" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7e199ab7, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0x57490dd6, "scsi_host_lookup" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x29311881, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeef16a02, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9e169519, "scsi_scan_target" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xce2f01d5, "device_del" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xddc16852, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd2e33a2c, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbf1a9899, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xe698f19a, "netlink_kernel_release" },
	{ 0xffb7c514, "ida_free" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x690737c8, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x5fe1c3f, "device_add" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x1c2a4651, "transport_class_unregister" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x721c9d1f, "init_net" },
	{ 0x5fd264df, "__class_register" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc2637667, "netlink_capable" },
	{ 0xfb0d883e, "scsi_target_unblock" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x6b6ac946, "scsi_host_get" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb6613e14, "transport_setup_device" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x2275ee97, "__scsi_init_queue" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0xec6bedce, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x535449e7, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xcb60ab8c, "transport_remove_device" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbfc30f0b, "scsi_target_block" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x1cbf0608, "bsg_remove_queue" },
	{ 0x33dfc005, "bsg_setup_queue" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5A597A8540E19FCF5D2204D");
