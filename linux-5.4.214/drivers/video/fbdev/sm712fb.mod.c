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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xab781570, "fb_get_options" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb23de490, "pci_request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0xedc03953, "iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc631580a, "console_unlock" },
	{ 0x328bbfeb, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000126Fd00000710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00000712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00000720sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4AA017F26C54F9A47A6CFBD");
