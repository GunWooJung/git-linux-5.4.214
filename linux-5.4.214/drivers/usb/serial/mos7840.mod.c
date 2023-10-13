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
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v9710p7840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7843d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC42d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pAC44d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0856pBC03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p7820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap2210d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D6C0EB8196738DB194FA243");
