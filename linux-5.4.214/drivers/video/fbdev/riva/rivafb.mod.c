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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xcd26959c, "fb_bl_default_curve" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x4351577a, "fb_parse_edid" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0x686de290, "restore_vga" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0xedce4c5a, "fb_get_mode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xce4cdb8e, "fb_find_best_mode" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x61ea189b, "fb_pad_aligned_buffer" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x13f79de, "fb_ddc_read" },
	{ 0xcd646f09, "fb_validate_mode" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "vgastate,i2c-algo-bit,fb_ddc");

MODULE_ALIAS("pci:v000012D2d00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000113sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000153sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000172sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000174sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000175sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000176sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000179sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000017Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000017Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000017Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000251sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000253sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000258sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000259sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000025Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000329sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DA8DBE7372D58493806E8BD");
