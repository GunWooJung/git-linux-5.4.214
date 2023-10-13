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
	{ 0x746500fd, "usbatm_usb_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x4b358e06, "atm_dev_signal_change" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x29361773, "complete" },
	{ 0x80500894, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4c448223, "usb_string" },
	{ 0xa2d33a1d, "usbatm_usb_probe" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc6cbbc89, "capable" },
	{ 0x754d539c, "strlen" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v0572pCAFEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pCB07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p3457d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1803p5510d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p330Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0659p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0509p0812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100DpCB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp3342d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DACCC001076DE3A239B6B50");
