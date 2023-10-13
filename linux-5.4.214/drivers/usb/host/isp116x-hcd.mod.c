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
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2d3002b1, "usb_hcd_link_urb_to_ep" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb22b81f, "usb_hc_died" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5bf4ef75, "usb_hcd_resume_root_hub" },
	{ 0xd1da9080, "usb_hcd_check_unlink_urb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdc7c1, "usb_hcd_unlink_urb_from_ep" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7ee415d5, "single_open" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD8C484A4B537F894334124");
