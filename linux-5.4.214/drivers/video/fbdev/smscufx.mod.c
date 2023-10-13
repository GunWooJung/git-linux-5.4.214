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
	{ 0xa6334991, "fb_sys_read" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9d4cba7, "fb_deferred_io_cleanup" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4b958150, "fb_deferred_io_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x9ea17a36, "fb_sys_write" },
	{ 0x90b152c8, "sys_fillrect" },
	{ 0xb77d54c9, "sys_copyarea" },
	{ 0x7a545545, "sys_imageblit" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xcf2a6966, "up" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("usb:v0424p9D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9D01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B9B46D4C157B29D68497700");
