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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1A0Ap0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0108d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CAA2CDA2BBC7E1CF69F8A81");
