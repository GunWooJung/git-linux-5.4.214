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
	{ 0x6661789e, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0xc21d3207, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0x245db7c2, "drm_atomic_helper_connector_reset" },
	{ 0x27316a09, "drm_atomic_helper_commit" },
	{ 0x6504339c, "drm_atomic_helper_check" },
	{ 0x8e5b6fbf, "drm_gem_fb_create_with_dirty" },
	{ 0x7f12d5a4, "drm_release" },
	{ 0x57f8a74e, "drm_open" },
	{ 0x17d7f52a, "drm_gem_cma_mmap" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0xa03ebbef, "drm_read" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xf64e0203, "drm_gem_cma_dumb_create" },
	{ 0x9a133112, "drm_gem_prime_mmap" },
	{ 0x5152ceca, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0x52c31fb4, "drm_gem_prime_fd_to_handle" },
	{ 0xbc3909b2, "drm_gem_prime_handle_to_fd" },
	{ 0xa4caa12a, "drm_cma_gem_create_object_default_funcs" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xca335fc, "dma_buf_end_cpu_access" },
	{ 0xf222794c, "drm_fb_xrgb8888_to_gray8" },
	{ 0x9961e18f, "dma_buf_begin_cpu_access" },
	{ 0xe8cfa3c5, "thermal_zone_get_temp" },
	{ 0x14a01ec7, "drm_dev_enter" },
	{ 0x1437f5f0, "drm_fb_cma_get_gem_obj" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x6843e37f, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc04d723c, "drm_atomic_helper_damage_merged" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x214e849, "thermal_zone_get_zone_by_name" },
	{ 0x715662ef, "drm_dev_printk" },
	{ 0xea0fec8b, "drm_fbdev_generic_setup" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x2ee4116e, "drm_mode_config_reset" },
	{ 0xa9d3287b, "drm_simple_display_pipe_init" },
	{ 0x83598232, "drm_connector_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x8a3b60c0, "devm_drm_dev_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc9c175, "drm_dev_fini" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x214c1e9e, "drm_mode_probed_add" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0x425189d1, "drm_mode_duplicate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xc66f4477, "drm_dev_unplug" },
	{ 0xc2d8ed20, "drm_atomic_helper_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "DCE22FE386A77C9AA01E15A");
