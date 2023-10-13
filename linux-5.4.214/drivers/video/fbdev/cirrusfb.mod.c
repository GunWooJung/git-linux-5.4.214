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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x5792f848, "strlcpy" },
	{ 0x85bd1608, "__request_region" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001013d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00000038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C2675C5D585468769A3A0AC");
