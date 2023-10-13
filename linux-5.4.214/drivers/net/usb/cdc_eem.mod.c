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
	{ 0x3fe052de, "usbnet_get_endpoints" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xbda8d5fd, "usbnet_device_suggests_idle" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xad263612, "consume_skb" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd523d85d, "skb_push" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "6E94BB6D70A70DE46C39C66");
