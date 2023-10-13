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
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc5e0801a, "fb_firmware_edid" },
	{ 0x328bbfeb, "fb_set_suspend" },
	{ 0xf93fd09c, "fb_find_mode_cvt" },
	{ 0xc631580a, "console_unlock" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xab781570, "fb_get_options" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x686de290, "restore_vga" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0xedce4c5a, "fb_get_mode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xce4cdb8e, "fb_find_best_mode" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xd04364dd, "fb_set_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13f79de, "fb_ddc_read" },
	{ 0xcd646f09, "fb_validate_mode" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "vgastate,i2c-algo-bit,fb_ddc");

MODULE_ALIAS("pci:v00005333d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00009102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C13sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D04sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "01F278CAAFBA88D026DD705");
