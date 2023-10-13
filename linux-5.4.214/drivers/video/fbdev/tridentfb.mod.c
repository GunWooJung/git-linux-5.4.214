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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x13f79de, "fb_ddc_read" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_ddc,i2c-algo-bit");

MODULE_ALIAS("pci:v00001023d00009880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009397sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d0000939Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009910sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009930sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "361F1D1C9125FC02B98B8EA");
