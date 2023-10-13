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
	{ 0xe7750f8, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0xd8798fa9, "tty_unlock" },
	{ 0x8c51a908, "start_tty" },
	{ 0x349cba85, "strchr" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2d026771, "screen_pos" },
	{ 0x3c95e342, "tty_set_ldisc" },
	{ 0x1b199f45, "set_selection_kernel" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x38374815, "clear_selection" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xe5c90ede, "vc_cons" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0xc631580a, "console_unlock" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x78184765, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x80b37b43, "stop_tty" },
	{ 0x68202a45, "tty_write_room" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb5c844e9, "tty_kopen" },
	{ 0x648dc648, "tty_kclose" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0xeae5711f, "set_user_nice" },
	{ 0x96848186, "scnprintf" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x41238974, "inverse_translate" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x58b582a, "vt_get_leds" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x306af83c, "tty_register_ldisc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x35775925, "misc_deregister" },
	{ 0x13110126, "request_resource" },
	{ 0xd6433c0c, "tty_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92f3df13, "tty_set_termios" },
	{ 0xe914e41e, "strcpy" },
	{ 0x338d764d, "paste_selection" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F447C3F4099716C984ED17C");
