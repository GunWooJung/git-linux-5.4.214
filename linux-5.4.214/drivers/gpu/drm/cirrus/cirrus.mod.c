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
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc21d3207, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0x245db7c2, "drm_atomic_helper_connector_reset" },
	{ 0x27316a09, "drm_atomic_helper_commit" },
	{ 0x6504339c, "drm_atomic_helper_check" },
	{ 0x7f12d5a4, "drm_release" },
	{ 0x57f8a74e, "drm_open" },
	{ 0xd1fd840, "drm_gem_shmem_mmap" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0xa03ebbef, "drm_read" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xcf6e8fcf, "drm_gem_shmem_dumb_create" },
	{ 0x9a133112, "drm_gem_prime_mmap" },
	{ 0xc8cd659d, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x52c31fb4, "drm_gem_prime_fd_to_handle" },
	{ 0xbc3909b2, "drm_gem_prime_handle_to_fd" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x42595e58, "vgacon_text_force" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x6843e37f, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc04d723c, "drm_atomic_helper_damage_merged" },
	{ 0xf10de535, "ioread8" },
	{ 0xea0fec8b, "drm_fbdev_generic_setup" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x2ee4116e, "drm_mode_config_reset" },
	{ 0xa9d3287b, "drm_simple_display_pipe_init" },
	{ 0x83598232, "drm_connector_init" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfee62683, "drm_dev_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xf154fa92, "vga_remove_vgacon" },
	{ 0x24f0b239, "remove_conflicting_pci_framebuffers" },
	{ 0xf3ab6c51, "drm_fb_xrgb8888_to_rgb565_dstclip" },
	{ 0x161c5d62, "drm_fb_memcpy_dstclip" },
	{ 0xb51a629d, "drm_fb_xrgb8888_to_rgb888_dstclip" },
	{ 0xeb497da, "drm_gem_shmem_vunmap" },
	{ 0x20bd81ae, "drm_gem_shmem_vmap" },
	{ 0x848d372e, "iowrite8" },
	{ 0xa16a8ba3, "drm_set_preferred_mode" },
	{ 0x81a4a35, "drm_add_modes_noedid" },
	{ 0x8e5b6fbf, "drm_gem_fb_create_with_dirty" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d0c12b, "drm_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x3006525f, "drm_dev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("pci:v00001013d000000B8sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv00005853sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "DEC12B4F2FC442A6445B8F1");
