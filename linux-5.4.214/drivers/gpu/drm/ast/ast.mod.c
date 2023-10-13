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
	{ 0x42595e58, "vgacon_text_force" },
	{ 0x7f12d5a4, "drm_release" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0xab7a3b22, "drm_crtc_helper_set_config" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0xf0202ca, "drm_helper_resume_force_mode" },
	{ 0x6da45ff8, "drm_get_edid" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0xb10ed45, "drm_vram_mm_file_operations_mmap" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x922c77ba, "drm_gem_vram_kunmap" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x7194be2e, "drm_vram_helper_release_mm" },
	{ 0x2ee4116e, "drm_mode_config_reset" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52e0db4b, "drm_encoder_init" },
	{ 0x9b991c5f, "drm_gem_vram_mm_funcs" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0xea0fec8b, "drm_fbdev_generic_setup" },
	{ 0xdfb81755, "drm_gem_vram_create" },
	{ 0x9ae7dda8, "drm_connector_update_edid_property" },
	{ 0xfd65f771, "drm_helper_connector_dpms" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0xf10de535, "ioread8" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xfd539f5a, "drm_gem_vram_pin" },
	{ 0xc5850110, "printk" },
	{ 0x7bacac19, "drm_put_dev" },
	{ 0x47600f3c, "drm_gem_fb_create" },
	{ 0x282b2842, "drm_gem_object_put_unlocked" },
	{ 0xa03ebbef, "drm_read" },
	{ 0x4c2cd0cc, "drm_add_edid_modes" },
	{ 0x371b6689, "drm_connector_init_with_ddc" },
	{ 0x2a5c73ce, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xb57ae103, "drm_kms_helper_poll_enable" },
	{ 0xad578594, "drm_gem_vram_unpin" },
	{ 0xcc86d8f9, "drm_gem_vram_kmap" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2657fe39, "drm_fb_helper_set_suspend_unlocked" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0x352047fd, "drm_get_pci_dev" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x4d14b2c8, "drm_connector_attach_encoder" },
	{ 0x5897922a, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xfc7b77dc, "drm_crtc_init" },
	{ 0x80c94e7e, "drm_gem_vram_offset" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0x3290fb69, "drm_connector_unregister" },
	{ 0x2538dd86, "drm_encoder_cleanup" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x6be1222d, "drm_crtc_cleanup" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x3a409de2, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x9a133112, "drm_gem_prime_mmap" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe09880e6, "drm_gem_vram_driver_dumb_create" },
	{ 0xe0caebc4, "drm_connector_register" },
	{ 0xd3d43789, "drm_mode_crtc_set_gamma_size" },
	{ 0x1ec8533f, "drm_kms_helper_poll_disable" },
	{ 0xf163c166, "drm_mode_object_find" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6661bd33, "drm_mode_vrefresh" },
	{ 0x57f8a74e, "drm_open" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper,i2c-algo-bit");

MODULE_ALIAS("pci:v00001A03d00002000sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00001A03d00002010sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "217868C931F001805D5CC38");
