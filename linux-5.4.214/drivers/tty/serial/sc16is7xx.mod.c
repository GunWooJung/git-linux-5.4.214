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
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0xe21d630c, "spi_setup" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x6c798fbc, "uart_add_one_port" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x10fd61cc, "sched_setscheduler" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x91221fd5, "__kthread_init_worker" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5335c503, "do_SAK" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x41d40b, "uart_insert_char" },
	{ 0x3c50fe65, "regmap_raw_read" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb1fcb4ff, "uart_update_timeout" },
	{ 0xb3a8c206, "uart_get_baud_rate" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb7a0d56a, "uart_write_wakeup" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0x6b6947f4, "regcache_cache_bypass" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf1f8e714, "kthread_flush_worker" },
	{ 0x904a8908, "regmap_write" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x2bac761d, "kthread_queue_work" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "17C090287E4439D8C84DEBE");
