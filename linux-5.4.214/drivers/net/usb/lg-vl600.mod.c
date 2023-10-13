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
	{ 0xb29fec76, "usbnet_cdc_status" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x7f8c0aa2, "usbnet_cdc_bind" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5dd7fe34, "usbnet_cdc_unbind" },
	{ 0x37a0cba, "kfree" },
	{ 0xad263612, "consume_skb" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xd523d85d, "skb_push" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cdc_ether,usbnet");

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "65838F3ED38F36951C1D174");
