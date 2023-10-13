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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x33b023e7, "usbnet_resume" },
	{ 0x411f5480, "usbnet_probe" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5dd7fe34, "usbnet_cdc_unbind" },
	{ 0xaba5ef4f, "usbnet_disconnect" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x44ff7b00, "usbnet_generic_cdc_bind" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x59533824, "usbnet_stop" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3955ca2c, "usbnet_get_stats64" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xbcd6a603, "usbnet_start_xmit" },
	{ 0xf112359, "usbnet_suspend" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7b701397, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf046e480, "usbnet_skb_return" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0x8e802ca9, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x75dd0647, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xb0e602eb, "memmove" },
	{ 0x820db7ec, "eth_mac_addr" },
};

MODULE_INFO(depends, "usbnet,cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v238Bp*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "9FF783A90C3F84F84817BD8");
