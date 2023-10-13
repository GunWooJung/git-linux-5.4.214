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
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0x589b99ad, "usb_serial_handle_break" },
	{ 0x80ccb755, "usb_serial_handle_sysrq_char" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3e062bec, "usb_serial_generic_open" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x52abd340, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5bf1bfde, "usb_serial_generic_resume" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xe52c344f, "usb_serial_generic_close" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xb66162d5, "usb_serial_handle_dcd_change" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "46A3092E8BADC4F07F65591");
