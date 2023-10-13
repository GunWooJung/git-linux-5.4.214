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
	{ 0x984a1729, "svga_get_tilemax" },
	{ 0x6aab73e5, "svga_tileblit" },
	{ 0xa15527f6, "svga_tilefill" },
	{ 0x116a1d77, "svga_tilecopy" },
	{ 0x98f94655, "svga_get_caps" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x83a41489, "svga_set_timings" },
	{ 0x1be6dc30, "svga_set_textmode_vga_regs" },
	{ 0x4ab38ef2, "svga_set_default_crt_regs" },
	{ 0x17f3f471, "svga_set_default_seq_regs" },
	{ 0xd22ca511, "svga_set_default_atc_regs" },
	{ 0xe28d2a49, "svga_set_default_gfx_regs" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x9ac59436, "pcibios_bus_to_resource" },
	{ 0xadbf4dd2, "pci_iomap_wc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xd6ec2c44, "svga_compute_pll" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x686de290, "restore_vga" },
	{ 0xc5850110, "printk" },
	{ 0xb0ab2b2e, "svga_check_timings" },
	{ 0x84c97d2a, "svga_match_format" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x84c337c2, "svga_wcrt_multi" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xfe00f05c, "unregister_framebuffer" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x328bbfeb, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb59c75a7, "svga_tilecursor" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "svgalib,vgastate");

MODULE_ALIAS("pci:v0000EDD8d0000A099sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EBFF093FBC42D2DBE81C522");
