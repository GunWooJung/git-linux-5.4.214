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
	{ 0x68a41536, "param_ops_bool" },
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc21d3207, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0x245db7c2, "drm_atomic_helper_connector_reset" },
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
	{ 0x27316a09, "drm_atomic_helper_commit" },
	{ 0x6504339c, "drm_atomic_helper_check" },
	{ 0x8e5b6fbf, "drm_gem_fb_create_with_dirty" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xea0fec8b, "drm_fbdev_generic_setup" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x2ee4116e, "drm_mode_config_reset" },
	{ 0xa9d3287b, "drm_simple_display_pipe_init" },
	{ 0x83598232, "drm_connector_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0xfee62683, "drm_dev_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x715662ef, "drm_dev_printk" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0xeb497da, "drm_gem_shmem_vunmap" },
	{ 0xca335fc, "dma_buf_end_cpu_access" },
	{ 0x9961e18f, "dma_buf_begin_cpu_access" },
	{ 0x20bd81ae, "drm_gem_shmem_vmap" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c2cd0cc, "drm_add_edid_modes" },
	{ 0x9ae7dda8, "drm_connector_update_edid_property" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbc9c175, "drm_dev_fini" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x6843e37f, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc04d723c, "drm_atomic_helper_damage_merged" },
	{ 0xe034e96b, "drm_mode_object_get" },
	{ 0x9d0c12b, "drm_dev_put" },
	{ 0xc66f4477, "drm_dev_unplug" },
	{ 0x7667cb01, "drm_mode_object_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("usb:v1DE1pC102d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "43A54364B5059ADD66213BB");
