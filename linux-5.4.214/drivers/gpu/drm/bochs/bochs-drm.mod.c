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
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0x34a5843, "drm_dev_alloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x9f8d07de, "drm_mode_config_helper_resume" },
	{ 0xb10ed45, "drm_vram_mm_file_operations_mmap" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x7194be2e, "drm_vram_helper_release_mm" },
	{ 0x2ee4116e, "drm_mode_config_reset" },
	{ 0x245db7c2, "drm_atomic_helper_connector_reset" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa16a8ba3, "drm_set_preferred_mode" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x24f0b239, "remove_conflicting_pci_framebuffers" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9b991c5f, "drm_gem_vram_mm_funcs" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x72fd5740, "drm_do_get_edid" },
	{ 0xa9d3287b, "drm_simple_display_pipe_init" },
	{ 0xc21d3207, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xea0fec8b, "drm_fbdev_generic_setup" },
	{ 0xc6ce6cd3, "drm_connector_attach_edid_property" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0x9ae7dda8, "drm_connector_update_edid_property" },
	{ 0xfd65f771, "drm_helper_connector_dpms" },
	{ 0x9d0c12b, "drm_dev_put" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3006525f, "drm_dev_unregister" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xfd539f5a, "drm_gem_vram_pin" },
	{ 0xc5850110, "printk" },
	{ 0x47600f3c, "drm_gem_fb_create" },
	{ 0xa03ebbef, "drm_read" },
	{ 0x4c2cd0cc, "drm_add_edid_modes" },
	{ 0x2a5c73ce, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0xf154fa92, "vga_remove_vgacon" },
	{ 0x8b281b7d, "drm_mode_config_helper_suspend" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x83598232, "drm_connector_init" },
	{ 0xad578594, "drm_gem_vram_unpin" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0x6504339c, "drm_atomic_helper_check" },
	{ 0x27316a09, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6843e37f, "drm_crtc_send_vblank_event" },
	{ 0x81a4a35, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc2d8ed20, "drm_atomic_helper_shutdown" },
	{ 0x3a409de2, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x9a133112, "drm_gem_prime_mmap" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe09880e6, "drm_gem_vram_driver_dumb_create" },
	{ 0xe0caebc4, "drm_connector_register" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x57f8a74e, "drm_open" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper");

MODULE_ALIAS("pci:v00001234d00001111sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001234d00001111sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "588F7631D99E87406C42AC5");
