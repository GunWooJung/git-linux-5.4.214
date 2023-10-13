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
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x3e062bec, "usb_serial_generic_open" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xe52c344f, "usb_serial_generic_close" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v6547p0232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18ECp3118d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C7BCDCAF99D3911A4F0320A");
