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
	{ 0xf9a482f9, "msleep" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x969d6892, "pci_unmap_rom" },
	{ 0xcd26959c, "fb_bl_default_curve" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf4a68187, "fb_pan_display" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x4351577a, "fb_parse_edid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf915b474, "cfb_fillrect" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x328bbfeb, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3967b466, "cfb_imageblit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc5f08363, "pci_map_rom" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf00c52b4, "fb_find_mode" },
	{ 0x12a38747, "usleep_range" },
	{ 0x40d04664, "console_trylock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd2823390, "__pci_complete_power_transition" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xd04364dd, "fb_set_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xded9b275, "cfb_copyarea" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x13f79de, "fb_ddc_read" },
	{ 0xcd646f09, "fb_validate_mode" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "i2c-algo-bit,fb_ddc");

MODULE_ALIAS("pci:v00001002d00005955sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005975sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005159sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000515Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000515Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004336sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004137sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004437sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004237sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005148sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000514Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000514Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005158sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004966sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004967sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005A62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005C63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005961sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005962sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005964sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004146sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004147sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004153sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004156sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004148sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000414Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000414Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003E50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003E54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005460sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005464sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005548sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005549sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000554Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000554Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005552sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005554sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005D57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005146sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005147sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7DFD059704247AACA3641A9");
