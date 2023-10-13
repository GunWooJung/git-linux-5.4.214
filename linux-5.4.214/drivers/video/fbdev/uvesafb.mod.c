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
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x2b87fb78, "param_ops_invbool" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x32302331, "driver_remove_file" },
	{ 0x4c99581b, "driver_create_file" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x4f84b8cc, "cn_add_callback" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x29361773, "complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xedce4c5a, "fb_get_mode" },
	{ 0xce4cdb8e, "fb_find_best_mode" },
	{ 0xcd646f09, "fb_validate_mode" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x77358855, "iomem_resource" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FCB568C40893687BDCBC8A9");
