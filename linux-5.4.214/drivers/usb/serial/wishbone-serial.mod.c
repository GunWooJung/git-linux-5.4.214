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
	{ 0x9a4c322, "_dev_err" },
	{ 0x3e062bec, "usb_serial_generic_open" },
	{ 0xe52c344f, "usb_serial_generic_close" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1D50p6062d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "10CC4DD4EB901941E5CA187");
