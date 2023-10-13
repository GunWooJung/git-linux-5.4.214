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
	{ 0x765395c3, "param_ops_int" },
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83ac658, "usb_serial_port_softint" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v091Ep0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CAD2366243637A3F3900A9B");
