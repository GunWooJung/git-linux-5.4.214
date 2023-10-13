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
	{ 0x2d3385d3, "system_wq" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x530e0df7, "device_add_groups" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x190aaef4, "serio_unregister_driver" },
	{ 0xf1887e78, "ps2_handle_ack" },
	{ 0xe81be44c, "ps2_sendbyte" },
	{ 0x2a2891fa, "ps2_handle_response" },
	{ 0x8eef602, "input_mt_report_finger_count" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x59b6f682, "ps2_end_command" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeb7ed4b5, "i2c_for_each_dev" },
	{ 0x876b17e6, "__ps2_command" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9d1b94ae, "i2c_verify_adapter" },
	{ 0x85df9b6c, "strsep" },
	{ 0x27e60eae, "serio_interrupt" },
	{ 0x89d820f3, "i2c_new_probed_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xebeba898, "ps2_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa94ccfc0, "input_mt_report_pointer_emulation" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x66c54ff1, "input_event" },
	{ 0x7b258a2a, "serio_unregister_child_port" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x6f04f2b0, "__serio_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xe20a5553, "i2c_bus_type" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xa80e6ce6, "serio_close" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0xdab91ed4, "serio_open" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x5748356e, "device_create_file" },
	{ 0xbdee9d50, "i2c_adapter_type" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7b3af4d3, "bus_register_notifier" },
	{ 0x12a38747, "usleep_range" },
	{ 0x30760967, "ps2_command" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x963de58d, "ps2_sliced_command" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x96d7ec59, "input_mt_drop_unused" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x12b3468e, "ps2_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe88731a4, "serio_reconnect" },
	{ 0xc466e83f, "__serio_register_port" },
	{ 0xd80477bf, "device_remove_groups" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xff11e5a7, "serio_rescan" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0xda5e9bd6, "ps2_cmd_aborted" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x123406db, "i2c_client_type" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51086da0, "bus_unregister_notifier" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3b7ef0ac, "ps2_begin_command" },
	{ 0x84aa8e4a, "input_mt_assign_slots" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "54DE18E718515651A02C52A");
