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
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x52abd340, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v05C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C5p0004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7522DFDC312F48B0C8CB344");
