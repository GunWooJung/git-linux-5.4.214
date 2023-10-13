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
	{ 0x5c9109de, "release_firmware" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x80500894, "request_firmware" },
	{ 0x21e36bf2, "smscore_registry_getmode" },
	{ 0x74ee9098, "sms_board_load_modules" },
	{ 0x21bb6ef4, "media_device_unregister" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc6fbc723, "smscore_start_device" },
	{ 0x7aaba4d8, "usb_init_urb" },
	{ 0x3abc875c, "smscore_set_board_id" },
	{ 0xb6ef266d, "smscore_register_device" },
	{ 0xf2306d34, "media_device_cleanup" },
	{ 0xea5f4b29, "__media_device_register" },
	{ 0xfa11908a, "__media_device_usb_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x465e5562, "smscore_getbuffer" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x37d91069, "smsendian_handle_tx_message" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e1582ac, "smscore_unregister_device" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf1d14fb3, "smscore_putbuffer" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xc5850110, "printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9c2225ed, "smscore_translate_msg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd24f31d, "smscore_onresponse" },
	{ 0x45284ae9, "smsendian_handle_rx_message" },
	{ 0x7c576277, "smsendian_handle_message_header" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "smsmdtv,mc");

MODULE_ALIAS("usb:v187Fp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p1700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p1800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p1801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5510d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5520d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5580d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5590d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB980d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB990d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC0A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pF5A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v187Fp0800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2p0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3275p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "99D8DD409EBAE8CA2ECF381");
