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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x4b958150, "fb_deferred_io_init" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x90b152c8, "sys_fillrect" },
	{ 0xb77d54c9, "sys_copyarea" },
	{ 0x7a545545, "sys_imageblit" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xf9d4cba7, "fb_deferred_io_cleanup" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sysfillrect,syscopyarea,sysimgblt");


MODULE_INFO(srcversion, "63DCED94C20FEA0BB647A87");
