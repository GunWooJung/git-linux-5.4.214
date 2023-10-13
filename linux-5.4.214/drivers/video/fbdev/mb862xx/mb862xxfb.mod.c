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
	{ 0x174e203e, "device_remove_file" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5748356e, "device_create_file" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010CFd00002019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd0000201Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd0000202Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8610BC08875B664B51D84D3");
