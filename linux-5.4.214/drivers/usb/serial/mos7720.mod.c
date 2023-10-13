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
	{ 0x1ef8f8c, "parport_ieee1284_read_byte" },
	{ 0xfa570438, "parport_ieee1284_read_nibble" },
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa4e88a5e, "parport_del_port" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x554a3a00, "parport_remove_port" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x29361773, "complete" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd71c099b, "parport_announce_port" },
	{ 0x89c19571, "parport_register_port" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x52abd340, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,usbserial");

MODULE_ALIAS("usb:v9710p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7715d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DA845DAB6E710BAC0B2B9B4");
