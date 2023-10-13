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
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x2489765c, "pci_ioremap_wc_bar" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000104Ad00000010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4E0716F9B70FBD1CC23B608");
