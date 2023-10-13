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
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x2d3002b1, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd1da9080, "usb_hcd_check_unlink_urb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x29361773, "complete" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xbdc7c1, "usb_hcd_unlink_urb_from_ep" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6D5B5898486FB34E1D7D1C5");
