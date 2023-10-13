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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f12d5a4, "drm_release" },
	{ 0xa96c72b2, "drm_prime_gem_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0x75c8be16, "drm_gem_put_pages" },
	{ 0x34a5843, "drm_dev_alloc" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3ea8b5a3, "xenbus_frontend_closed" },
	{ 0x418342ee, "xenbus_dev_error" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x2ee4116e, "drm_mode_config_reset" },
	{ 0x245db7c2, "drm_atomic_helper_connector_reset" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x4b931968, "xen_features" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0xaaffc87e, "drm_gem_mmap_obj" },
	{ 0x9354d71a, "vm_map_pages" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0xbc9c175, "drm_dev_fini" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xa9d3287b, "drm_simple_display_pipe_init" },
	{ 0xc21d3207, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0x5fb97286, "drm_gem_fb_create_with_funcs" },
	{ 0x9d0c12b, "drm_dev_put" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3006525f, "drm_dev_unregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x433b4459, "drm_prime_pages_to_sg" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6e3b5ee, "xenbus_free_evtchn" },
	{ 0x4253b0fa, "drm_gem_handle_create" },
	{ 0xeade671, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xea7b22c7, "xen_front_pgdir_shbuf_unmap" },
	{ 0x282b2842, "drm_gem_object_put_unlocked" },
	{ 0x7514cd74, "xenbus_unregister_driver" },
	{ 0xbd2ca76, "xen_front_pgdir_shbuf_alloc" },
	{ 0x20b2099, "alloc_xenballooned_pages" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x727baddd, "drm_gem_object_release" },
	{ 0xa03ebbef, "drm_read" },
	{ 0xec55cbce, "drm_display_mode_from_videomode" },
	{ 0x7bf7a9e8, "__xenbus_register_frontend" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x83598232, "drm_connector_init" },
	{ 0xc66f4477, "drm_dev_unplug" },
	{ 0x7eeb1057, "drm_gem_vm_open" },
	{ 0xeb294f1d, "drm_gem_vm_close" },
	{ 0xc450ca24, "free_xenballooned_pages" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x52c31fb4, "drm_gem_prime_fd_to_handle" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe2fce310, "xenbus_alloc_evtchn" },
	{ 0xd0458ccb, "xenbus_strstate" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0xff856760, "drm_mode_create" },
	{ 0x90d6056a, "drm_gem_mmap" },
	{ 0x9944644a, "xen_front_pgdir_shbuf_free" },
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0x6504339c, "drm_atomic_helper_check" },
	{ 0x27316a09, "drm_atomic_helper_commit" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96ec6791, "xenbus_grant_ring" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6843e37f, "drm_crtc_send_vblank_event" },
	{ 0x5897922a, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbc3909b2, "drm_gem_prime_handle_to_fd" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3b861904, "drm_gem_object_init" },
	{ 0x587138e0, "xenbus_switch_state" },
	{ 0xd20a0bf2, "xen_front_pgdir_shbuf_map" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x22e0fb6, "xen_front_pgdir_shbuf_get_dir_start" },
	{ 0x6661789e, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0xc2d8ed20, "drm_atomic_helper_shutdown" },
	{ 0x75362760, "xenbus_dev_fatal" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0xed0de0b0, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x214c1e9e, "drm_mode_probed_add" },
	{ 0x29361773, "complete" },
	{ 0xc0522cdb, "drm_kms_helper_poll_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd8c202b9, "drm_gem_get_pages" },
	{ 0x14a01ec7, "drm_dev_enter" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0x57f8a74e, "drm_open" },
	{ 0xa08dadf6, "drm_kms_helper_poll_fini" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x2c09fd8a, "drm_gem_fb_destroy" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,xen-front-pgdir-shbuf");


MODULE_INFO(srcversion, "C462F26E045789F720F98E9");