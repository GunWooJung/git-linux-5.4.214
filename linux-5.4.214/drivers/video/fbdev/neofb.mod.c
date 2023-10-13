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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37a0cba, "kfree" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x686de290, "restore_vga" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vgastate");

MODULE_ALIAS("pci:v000010C8d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00000016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "240D54B3BEB63ADD6A2EC8A");
