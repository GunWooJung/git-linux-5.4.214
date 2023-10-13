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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x239ebb26, "drm_property_create_range" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0xba400561, "drm_object_property_set_value" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x55669d4b, "drm_object_attach_property" },
	{ 0x425189d1, "drm_mode_duplicate" },
	{ 0xcf80748c, "drm_mode_create_tv_properties" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x597f57dd, "drm_crtc_helper_set_mode" },
	{ 0x523e0cf2, "drm_i2c_encoder_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x146c3aba, "drm_property_destroy" },
	{ 0x214c1e9e, "drm_mode_probed_add" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("i2c:ch7006");

MODULE_INFO(srcversion, "2E136D47188C67686B2B9F3");
