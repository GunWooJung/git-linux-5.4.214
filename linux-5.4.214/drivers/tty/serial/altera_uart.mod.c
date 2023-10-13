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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0xb7a0d56a, "uart_write_wakeup" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x5335c503, "do_SAK" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41d40b, "uart_insert_char" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6c798fbc, "uart_add_one_port" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb1fcb4ff, "uart_update_timeout" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xb3a8c206, "uart_get_baud_rate" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xedc03953, "iounmap" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B82C2441E8F2D4331A502A0");
