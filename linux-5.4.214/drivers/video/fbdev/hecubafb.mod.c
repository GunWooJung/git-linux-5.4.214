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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x90b152c8, "sys_fillrect" },
	{ 0xb77d54c9, "sys_copyarea" },
	{ 0x7a545545, "sys_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x4b958150, "fb_deferred_io_init" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x999e8297, "vfree" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xf9d4cba7, "fb_deferred_io_cleanup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");


MODULE_INFO(srcversion, "499D718CB5F922AD4A17F23");
