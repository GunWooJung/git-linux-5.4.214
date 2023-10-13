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
	{ 0x131e5561, "param_ops_charp" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xe484e35f, "ioread32" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Copencores,ocfb");
MODULE_ALIAS("of:N*T*Copencores,ocfbC*");

MODULE_INFO(srcversion, "49F9DB175CF401A2321E9B4");
