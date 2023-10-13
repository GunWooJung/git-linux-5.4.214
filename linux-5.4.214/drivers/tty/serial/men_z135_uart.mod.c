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
	{ 0x765395c3, "param_ops_int" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xbc6e4433, "mcb_unregister_driver" },
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0x49b48d49, "__mcb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5335c503, "do_SAK" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79c26afa, "uart_handle_dcd_change" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdbc50fe3, "uart_handle_cts_change" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x97b943e0, "tty_buffer_request_room" },
	{ 0x848d372e, "iowrite8" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb7a0d56a, "uart_write_wakeup" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6c798fbc, "uart_add_one_port" },
	{ 0xda324510, "mcb_get_irq" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf10de535, "ioread8" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xb1fcb4ff, "uart_update_timeout" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb3a8c206, "uart_get_baud_rate" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xedc03953, "iounmap" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x23c6a94e, "mcb_request_mem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "2D92F3DA81C684AA51A73AC");
