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
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x37a0cba, "kfree" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x13f79de, "fb_ddc_read" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x2489765c, "pci_ioremap_wc_bar" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0xcd646f09, "fb_validate_mode" },
	{ 0xc5850110, "printk" },
	{ 0xc631580a, "console_unlock" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x328bbfeb, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_ddc,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "671FF96E342C8A3E94428ED");
