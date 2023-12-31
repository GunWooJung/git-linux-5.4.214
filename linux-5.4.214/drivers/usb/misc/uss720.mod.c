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
	{ 0x1ef8f8c, "parport_ieee1284_read_byte" },
	{ 0xfa570438, "parport_ieee1284_read_nibble" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xd71c099b, "parport_announce_port" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0x89c19571, "parport_register_port" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x83df46f6, "parport_put_port" },
	{ 0x554a3a00, "parport_remove_port" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x4d2a941b, "parport_ieee1284_interrupt" },
	{ 0x29361773, "complete" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");

MODULE_ALIAS("usb:v047Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06C6p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0729p1284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1293p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "59002ED72313805B3AE63D8");
