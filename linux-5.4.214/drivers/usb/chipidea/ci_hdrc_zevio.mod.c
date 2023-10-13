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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf0c5ce57, "ci_hdrc_add_device" },
	{ 0x8d7d2ef9, "ci_hdrc_remove_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ci_hdrc");

MODULE_ALIAS("of:N*T*Clsi,zevio-usb");
MODULE_ALIAS("of:N*T*Clsi,zevio-usbC*");

MODULE_INFO(srcversion, "2B0BE04641F18972AFA0AA0");
