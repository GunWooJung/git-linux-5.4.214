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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x85bd1608, "__request_region" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0F7615637A9ED983B04DE1");
