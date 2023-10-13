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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x47cf577d, "v4l2_ctrl_new_int_menu" },
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0xebba9f54, "v4l2_ctrl_new_std_menu_items" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdee35b3c, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x904a8908, "regmap_write" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:mt9v022");
MODULE_ALIAS("i2c:mt9v022m");
MODULE_ALIAS("i2c:mt9v024");
MODULE_ALIAS("i2c:mt9v024m");
MODULE_ALIAS("i2c:mt9v032");
MODULE_ALIAS("i2c:mt9v032m");
MODULE_ALIAS("i2c:mt9v034");
MODULE_ALIAS("i2c:mt9v034m");

MODULE_INFO(srcversion, "677C7C3217ACC355107AACF");
