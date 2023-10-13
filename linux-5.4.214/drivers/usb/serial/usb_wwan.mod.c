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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe0c8b001, "usb_get_from_anchor" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3a5e48cf, "usb_autopm_put_interface_async" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xf32be640, "usb_autopm_get_interface_async" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd8749720, "usb_autopm_get_interface_no_resume" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x83ac658, "usb_serial_port_softint" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "CF14B9A9E760C3B5E21FF4E");
