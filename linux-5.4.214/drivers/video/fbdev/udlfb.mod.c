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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x713aee13, "device_create_bin_file" },
	{ 0x5748356e, "device_create_file" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa6334991, "fb_sys_read" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0x3c4dda6e, "usb_get_descriptor" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0x90d56164, "device_remove_bin_file" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x6626afca, "down" },
	{ 0x4b958150, "fb_deferred_io_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9ea17a36, "fb_sys_write" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9d4cba7, "fb_deferred_io_cleanup" },
	{ 0x90b152c8, "sys_fillrect" },
	{ 0xb77d54c9, "sys_copyarea" },
	{ 0x7a545545, "sys_imageblit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xcf2a6966, "up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "FD7483AEEE526965A69C87B");
