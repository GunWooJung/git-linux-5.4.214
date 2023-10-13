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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x85df9b6c, "strsep" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x328bbfeb, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x5a921311, "strncmp" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x61651be, "strcat" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000126Fd00000750sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1687C6525D945BF4E6C12A6");
