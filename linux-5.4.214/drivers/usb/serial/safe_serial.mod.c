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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x2c511b92, "usb_serial_deregister_drivers" },
	{ 0xbff05d80, "usb_serial_register_drivers" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v049FpFFFFd*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v03F0p2101d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v04DDp8001d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v04DDp8002d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v04DDp8003d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v04DDp8004d*dc02dsc*dp*icFFisc02ip*in*");
MODULE_ALIAS("usb:v05F9pFFFFd*dc02dsc*dp*icFFisc02ip*in*");

MODULE_INFO(srcversion, "E8C6515AD6D298DA7A73B6A");
