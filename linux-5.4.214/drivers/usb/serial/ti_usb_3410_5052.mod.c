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
	{ 0xfdd1b021, "usb_serial_generic_get_icount" },
	{ 0x56f8df9a, "usb_serial_generic_tiocmiwait" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x80500894, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x27da09b6, "usb_driver_set_configuration" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x52abd340, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0451p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451pF430d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0pF115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E0p0319d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5152d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p505Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p505Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p4543d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p454Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p454Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A61p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A61p3420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10ACp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B0p3410d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D2BCC75340D67373891F228");
