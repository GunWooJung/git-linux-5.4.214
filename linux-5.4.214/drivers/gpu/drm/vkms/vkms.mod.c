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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7f12d5a4, "drm_release" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0x75c8be16, "drm_gem_put_pages" },
	{ 0x6bcc8934, "drm_calc_timestamping_constants" },
	{ 0x844e785e, "drm_atomic_helper_update_plane" },
	{ 0x1a605b96, "drm_crtc_arm_vblank_event" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x2ee4116e, "drm_mode_config_reset" },
	{ 0x245db7c2, "drm_atomic_helper_connector_reset" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe0a0cafe, "drm_atomic_helper_commit_hw_done" },
	{ 0xa16a8ba3, "drm_set_preferred_mode" },
	{ 0xb45ffea4, "drm_atomic_helper_page_flip" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xcee8a2c4, "drm_crtc_handle_vblank" },
	{ 0x825840c1, "__drm_atomic_helper_crtc_reset" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0xf16d58c7, "drm_crtc_vblank_off" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb3fcbe27, "drm_vblank_init" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x52e0db4b, "drm_encoder_init" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbc9c175, "drm_dev_fini" },
	{ 0x347b46e0, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x491d5834, "drm_universal_plane_init" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x3f4e1ffe, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0xc21d3207, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x76d82aaf, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x8414330d, "drm_atomic_helper_set_config" },
	{ 0x655775d7, "drm_gem_fb_prepare_fb" },
	{ 0x9d0c12b, "drm_dev_put" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3006525f, "drm_dev_unregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc0249e71, "drm_crtc_init_with_planes" },
	{ 0x96ea2c0d, "drm_atomic_helper_check_plane_state" },
	{ 0xa086ab99, "drm_gem_fb_get_obj" },
	{ 0x47600f3c, "drm_gem_fb_create" },
	{ 0x4253b0fa, "drm_gem_handle_create" },
	{ 0xeade671, "vmap" },
	{ 0x282b2842, "drm_gem_object_put_unlocked" },
	{ 0xa6b2271a, "drm_crtc_vblank_on" },
	{ 0x8b6e9cc8, "shmem_read_mapping_page_gfp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x727baddd, "drm_gem_object_release" },
	{ 0xa03ebbef, "drm_read" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xbd6d5ce1, "drm_atomic_helper_fake_vblank" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x83598232, "drm_connector_init" },
	{ 0x7eeb1057, "drm_gem_vm_open" },
	{ 0xeb294f1d, "drm_gem_vm_close" },
	{ 0x24ee7185, "drm_atomic_get_crtc_state" },
	{ 0x3d9a0ba5, "drm_plane_cleanup" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0x90d6056a, "drm_gem_mmap" },
	{ 0xcdd5b819, "drm_atomic_helper_wait_for_vblanks" },
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0xde293c4a, "__drm_atomic_helper_plane_destroy_state" },
	{ 0x6504339c, "drm_atomic_helper_check" },
	{ 0x27316a09, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfee62683, "drm_dev_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x763cd190, "drm_crtc_accurate_vblank_count" },
	{ 0x34285e1f, "drm_atomic_helper_commit_modeset_disables" },
	{ 0x4d14b2c8, "drm_connector_attach_encoder" },
	{ 0x6843e37f, "drm_crtc_send_vblank_event" },
	{ 0x3db36002, "drm_crtc_vblank_get" },
	{ 0x7667cb01, "drm_mode_object_put" },
	{ 0x81a4a35, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3b861904, "drm_gem_object_init" },
	{ 0x2538dd86, "drm_encoder_cleanup" },
	{ 0x6be1222d, "drm_crtc_cleanup" },
	{ 0x24955f66, "drm_atomic_helper_commit_planes" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe034e96b, "drm_mode_object_get" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x28201ebe, "drm_atomic_helper_cleanup_planes" },
	{ 0xc2d8ed20, "drm_atomic_helper_shutdown" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xdf03a337, "drm_atomic_helper_disable_plane" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x60539fe9, "drm_atomic_add_affected_planes" },
	{ 0xd8c202b9, "drm_gem_get_pages" },
	{ 0x7e264af9, "drm_atomic_helper_commit_modeset_enables" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0x57f8a74e, "drm_open" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x55aaf3a6, "drm_crtc_add_crc_entry" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "4206DCFC7C756F83B3057DC");
