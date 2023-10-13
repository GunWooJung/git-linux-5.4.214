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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x245db7c2, "drm_atomic_helper_connector_reset" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xbc9c175, "drm_dev_fini" },
	{ 0x392872de, "drm_fb_memcpy" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0xa9d3287b, "drm_simple_display_pipe_init" },
	{ 0xc21d3207, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa33ab01d, "drm_mode_copy" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x425189d1, "drm_mode_duplicate" },
	{ 0xa086ab99, "drm_gem_fb_get_obj" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6154269c, "drm_fb_swab16" },
	{ 0x8e5b6fbf, "drm_gem_fb_create_with_dirty" },
	{ 0xc04d723c, "drm_atomic_helper_damage_merged" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x83598232, "drm_connector_init" },
	{ 0x586583b8, "spi_sync" },
	{ 0x20645642, "drm_debug" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9961e18f, "dma_buf_begin_cpu_access" },
	{ 0x715662ef, "drm_dev_printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0x6504339c, "drm_atomic_helper_check" },
	{ 0x27316a09, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6843e37f, "drm_crtc_send_vblank_event" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x214c1e9e, "drm_mode_probed_add" },
	{ 0xca335fc, "dma_buf_end_cpu_access" },
	{ 0xd7e56b43, "drm_plane_enable_fb_damage_clips" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x14a01ec7, "drm_dev_enter" },
	{ 0x63106ada, "drm_fb_xrgb8888_to_rgb565" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "5B93F9CFBB3AC54BD101AC6");
