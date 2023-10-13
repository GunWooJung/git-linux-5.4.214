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
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x37b8b39e, "screen_info" },
	{ 0xc683da81, "set_memory_decrypted" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x686de290, "restore_vga" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vgastate");


MODULE_INFO(srcversion, "058EF05BF4A6AC8CFD03676");
