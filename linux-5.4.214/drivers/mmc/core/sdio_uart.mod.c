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
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0xc5850110, "printk" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0x477c6c7a, "tty_standard_install" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3885862f, "seq_putc" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x6b83a15e, "tty_port_tty_hangup" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x406e189e, "sdio_writeb" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0x225ecbd1, "sdio_readb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1d0147b9, "tty_port_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");

MODULE_INFO(srcversion, "F71EA00D7DECD686DE010F5");
