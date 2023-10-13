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
	{ 0x9fc3975e, "usb_serial_generic_write" },
	{ 0x589b99ad, "usb_serial_handle_break" },
	{ 0x1dc713a1, "usb_serial_generic_process_read_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0525p127Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D6Bp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D6Bp0011d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "50DB587AC68ABC29779D36A");
