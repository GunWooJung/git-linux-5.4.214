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
	{ 0x7a545545, "sys_imageblit" },
	{ 0xb77d54c9, "sys_copyarea" },
	{ 0x90b152c8, "sys_fillrect" },
	{ 0x9ea17a36, "fb_sys_write" },
	{ 0xa6334991, "fb_sys_read" },
	{ 0xecb2e5d, "cfag12864b_disable" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x3389f926, "cfag12864b_enable" },
	{ 0x2ff9464, "cfag12864b_isinited" },
	{ 0xc5850110, "printk" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2ebef684, "vm_map_pages_zero" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc48e9d95, "cfag12864b_buffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b");


MODULE_INFO(srcversion, "492E23B4176913D75EE9A2D");
