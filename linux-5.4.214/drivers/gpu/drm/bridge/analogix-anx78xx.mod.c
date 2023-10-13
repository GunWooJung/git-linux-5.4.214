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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xcfb181dc, "regmap_multi_reg_write" },
	{ 0xfa17aa02, "drm_dp_link_configure" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0x3bf1d802, "drm_dp_dpcd_write" },
	{ 0xaba63d91, "drm_dp_link_power_up" },
	{ 0x58e3d51c, "drm_dp_link_probe" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x57e4c632, "drm_helper_hpd_irq_event" },
	{ 0x6264cd69, "drm_bridge_add" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x87c51d11, "i2c_new_dummy" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x9ae7dda8, "drm_connector_update_edid_property" },
	{ 0x6da45ff8, "drm_get_edid" },
	{ 0xc4980c16, "drm_dp_dpcd_read" },
	{ 0x4c2cd0cc, "drm_add_edid_modes" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0xb6605c5e, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x904a8908, "regmap_write" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x4d14b2c8, "drm_connector_attach_encoder" },
	{ 0xe0caebc4, "drm_connector_register" },
	{ 0x83598232, "drm_connector_init" },
	{ 0xcb94180f, "drm_dp_aux_register" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x5c6e7a88, "drm_bridge_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("i2c:anx7814");

MODULE_INFO(srcversion, "C39C7C0125D2BF53A883673");
