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
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xce2f01d5, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x148604fd, "tty_ldisc_deref" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8249b0a5, "usb_unpoison_urb" },
	{ 0x693a12d4, "usb_poison_urb" },
	{ 0x3885862f, "seq_putc" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x72a2e4be, "tty_vhangup" },
	{ 0x241978e0, "tty_ldisc_ref" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa6bb71c6, "usb_store_new_id" },
	{ 0x9863683c, "usb_match_id" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x94363551, "usb_get_intf" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x61178382, "tty_hangup" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x477c6c7a, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x535449e7, "device_initialize" },
	{ 0x2975b13b, "usb_match_one_id" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa4731577, "driver_attach" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x20978fb9, "idr_find" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x2ccdf080, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD14EE38A11E09A5E7CC930");
