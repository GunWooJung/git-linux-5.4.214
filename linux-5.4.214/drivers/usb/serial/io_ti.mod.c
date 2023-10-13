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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5748356e, "device_create_file" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x52abd340, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1608p0215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0244d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0247d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p1A01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1BA8883DE83B7779A65F237");
