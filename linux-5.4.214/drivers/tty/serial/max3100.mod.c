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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xb7a0d56a, "uart_write_wakeup" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x6c798fbc, "uart_add_one_port" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb1fcb4ff, "uart_update_timeout" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa6626805, "uart_resume_port" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41d40b, "uart_insert_char" },
	{ 0xdbc50fe3, "uart_handle_cts_change" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37a0cba, "kfree" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x94625ee8, "uart_suspend_port" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9FAFC90243168E965B96E01");
