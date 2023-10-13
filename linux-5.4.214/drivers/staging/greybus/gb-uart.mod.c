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
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xfd05907, "gb_gbphy_register_driver" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc724a027, "gb_connection_disable_rx" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1d0147b9, "tty_port_put" },
	{ 0x2ddbf8ad, "gb_gbphy_deregister_driver" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x4889d2e8, "gb_connection_enable_tx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x72a2e4be, "tty_vhangup" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x477c6c7a, "tty_standard_install" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x20978fb9, "idr_find" },
	{ 0x22683675, "gb_operation_get_payload_size_max" },
	{ 0x281823c5, "__kfifo_out_peek" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "C75DCD2FF937FFDEF0E70B2");
