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
	{ 0xeb34993b, "mipi_dbi_pipe_update" },
	{ 0x53c7861d, "mipi_dbi_pipe_disable" },
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
	{ 0x38789cd4, "mipi_dbi_debugfs_init" },
	{ 0xa1b4b05a, "mipi_dbi_release" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x715662ef, "drm_dev_printk" },
	{ 0xea0fec8b, "drm_fbdev_generic_setup" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x2ee4116e, "drm_mode_config_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x476e842d, "mipi_dbi_dev_init" },
	{ 0x1eb26d39, "mipi_dbi_spi_init" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xa81712ff, "devm_of_find_backlight" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x8a3b60c0, "devm_drm_dev_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xeed251e2, "mipi_dbi_enable_flush" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4400df05, "mipi_dbi_command_stackbuf" },
	{ 0x9b9c3c17, "mipi_dbi_poweron_conditional_reset" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x14a01ec7, "drm_dev_enter" },
	{ 0x8b281b7d, "drm_mode_config_helper_suspend" },
	{ 0x9f8d07de, "drm_mode_config_helper_resume" },
	{ 0xc66f4477, "drm_dev_unplug" },
	{ 0xc2d8ed20, "drm_atomic_helper_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm_mipi_dbi,drm");

MODULE_ALIAS("spi:mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qtC*");

MODULE_INFO(srcversion, "C116DA682C3C37E55E727EB");
