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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f12d5a4, "drm_release" },
	{ 0x4a958f0a, "drm_fb_helper_set_par" },
	{ 0xe92c0ea0, "drm_fb_helper_ioctl" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xab7a3b22, "drm_crtc_helper_set_config" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0x53b954a2, "up_read" },
	{ 0x75c8be16, "drm_gem_put_pages" },
	{ 0x6da45ff8, "drm_get_edid" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x1f15f485, "drm_fb_helper_cfb_fillrect" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x82109e14, "drm_fb_helper_initial_config" },
	{ 0xc5e74216, "release_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x969d6892, "pci_unmap_rom" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x242f3bba, "vmf_insert_mixed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4ad46234, "drm_gem_fb_create_handle" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x410d30ac, "drm_mode_destroy" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x239ebb26, "drm_property_create_range" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x81c51606, "drm_fb_helper_debug_leave" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0xf16d58c7, "drm_crtc_vblank_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xab8f3b, "drm_gem_free_mmap_offset" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x999e8297, "vfree" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0xb3fcbe27, "drm_vblank_init" },
	{ 0xdce46902, "set_pages_array_wc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x52e0db4b, "drm_encoder_init" },
	{ 0xba400561, "drm_object_property_set_value" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x60373db5, "drm_detect_monitor_audio" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6aa3c338, "drm_get_format_info" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x668b19a1, "down_read" },
	{ 0xcfaa5c56, "drm_fb_helper_unregister_fbi" },
	{ 0x5963e0af, "drm_fb_helper_pan_display" },
	{ 0x6fe2cce8, "drm_handle_vblank" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x9ae7dda8, "drm_connector_update_edid_property" },
	{ 0xfd65f771, "drm_helper_connector_dpms" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xfdb71260, "drm_irq_install" },
	{ 0x4eb92e44, "drm_fb_helper_cfb_copyarea" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0x2968d89f, "drm_helper_mode_fill_fb_struct" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x55669d4b, "drm_object_attach_property" },
	{ 0x425189d1, "drm_mode_duplicate" },
	{ 0x7bacac19, "drm_put_dev" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0x4253b0fa, "drm_gem_handle_create" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xc5f08363, "pci_map_rom" },
	{ 0x282b2842, "drm_gem_object_put_unlocked" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0x727baddd, "drm_gem_object_release" },
	{ 0xa03ebbef, "drm_read" },
	{ 0x4c2cd0cc, "drm_add_edid_modes" },
	{ 0xc72b9bc7, "drm_property_add_enum" },
	{ 0x24d273d1, "add_timer" },
	{ 0xce807a25, "up_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x83598232, "drm_connector_init" },
	{ 0xcf7a410d, "drm_fb_helper_prepare" },
	{ 0x7eeb1057, "drm_gem_vm_open" },
	{ 0xeb294f1d, "drm_gem_vm_close" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4b26fdf6, "drm_helper_crtc_in_use" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xb26bf25d, "drm_mode_set_crtcinfo" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0x4297dbd5, "drm_fb_helper_output_poll_changed" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x90d6056a, "drm_gem_mmap" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7b02888, "set_pages_array_wb" },
	{ 0x9b15c923, "drm_mode_create_scaling_mode_property" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0xc10fa2b2, "drm_framebuffer_unregister_private" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9af089e5, "drm_fb_helper_check_var" },
	{ 0x32183db, "drm_gem_private_object_init" },
	{ 0x554bec0, "drm_object_property_get_value" },
	{ 0x9e3047d0, "drm_fb_helper_blank" },
	{ 0x352047fd, "drm_get_pci_dev" },
	{ 0x597f57dd, "drm_crtc_helper_set_mode" },
	{ 0x521c94e8, "drm_mode_debug_printmodeline" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd8efeca2, "set_pages_wb" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x4d14b2c8, "drm_connector_attach_encoder" },
	{ 0x5897922a, "drm_gem_object_lookup" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x67e84c91, "drm_fb_helper_alloc_fbi" },
	{ 0x76182e4b, "drm_detect_hdmi_monitor" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfc7b77dc, "drm_crtc_init" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3290fb69, "drm_connector_unregister" },
	{ 0x3b861904, "drm_gem_object_init" },
	{ 0x2538dd86, "drm_encoder_cleanup" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xe5c58e39, "drm_fb_helper_fill_info" },
	{ 0x6be1222d, "drm_crtc_cleanup" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0xe93e7472, "drm_fb_helper_cfb_imageblit" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x81c252f4, "set_pages_uc" },
	{ 0x7b1140f3, "drm_fb_helper_fini" },
	{ 0x342f4c52, "drm_modeset_lock_all" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x214c1e9e, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x466723f, "drm_modeset_unlock_all" },
	{ 0xd77bffb8, "drm_helper_disable_unused_functions" },
	{ 0xcce39874, "drm_fb_helper_setcmap" },
	{ 0x93992eab, "drm_property_create" },
	{ 0xe783b531, "drm_fb_helper_lastclose" },
	{ 0x4ee53bea, "drm_framebuffer_init" },
	{ 0xc0522cdb, "drm_kms_helper_poll_init" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xd8c202b9, "drm_gem_get_pages" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xe0caebc4, "drm_connector_register" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0xd3d43789, "drm_mode_crtc_set_gamma_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x62c70f60, "vmf_insert_pfn" },
	{ 0x1ad23797, "drm_fb_helper_debug_enter" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0x67d77d81, "drm_fb_helper_init" },
	{ 0xe484e35f, "ioread32" },
	{ 0x57f8a74e, "drm_open" },
	{ 0xa08dadf6, "drm_kms_helper_poll_fini" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x2c09fd8a, "drm_gem_fb_destroy" },
	{ 0x24599bd1, "drm_framebuffer_cleanup" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,video,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00008108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008109sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AFE4708546B7CC7522E0B27");