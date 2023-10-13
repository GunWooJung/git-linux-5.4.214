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
	{ 0x44fc39b6, "pn533_recv_frame" },
	{ 0xb3d5c96d, "pn533_finalize_setup" },
	{ 0x7e4224c8, "pn533_unregister_device" },
	{ 0xdecfd339, "pn533_rx_frame_is_ack" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x3e366cf4, "pn533_register_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "pn533");

MODULE_ALIAS("usb:v04CCp2533d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p5591d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp02E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v072Fp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "524EB48D4D31F9A1C8B1F39");
