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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2d3002b1, "usb_hcd_link_urb_to_ep" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xd1da9080, "usb_hcd_check_unlink_urb" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x5bf4ef75, "usb_hcd_resume_root_hub" },
	{ 0x543eed24, "usb_hcd_poll_rh_status" },
	{ 0x89ecded2, "usb_root_hub_lost_power" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x41187327, "clk_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20978fb9, "idr_find" },
	{ 0x790be0b9, "usb_bus_idr" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd3bfa753, "usb_bus_idr_lock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdc7c1, "usb_hcd_unlink_urb_from_ep" },
	{ 0x66a35e8f, "usb_hub_find_child" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xedc03953, "iounmap" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5534d64, "ioread16" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "019589BA62B5BABFA5F908B");
