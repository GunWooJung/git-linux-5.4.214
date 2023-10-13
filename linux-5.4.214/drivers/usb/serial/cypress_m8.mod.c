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
	{ 0x56f8df9a, "usb_serial_generic_tiocmiwait" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x83ac658, "usb_serial_port_softint" },
	{ 0xfb578fc5, "memset" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x91b8e435, "usb_reset_configuration" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x61178382, "tty_hangup" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x52abd340, "tty_encode_baud_rate" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1163p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1163p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17DDp5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Fp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6737p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p4101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "60623733B69EAF0B79A2D00");
