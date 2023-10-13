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
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x3fe052de, "usbnet_get_endpoints" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9562bc6, "usbnet_defer_kevent" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x4a9cf770, "mii_ethtool_gset" },
	{ 0x6083fda9, "mii_check_media" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v1A86pE092d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0488E44AF73C8D569D5D565");
