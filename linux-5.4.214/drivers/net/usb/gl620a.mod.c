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
	{ 0x33b023e7, "usbnet_resume" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd523d85d, "skb_push" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v05E3p0502d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D52ABA6EBE9B511DB659C6E");
