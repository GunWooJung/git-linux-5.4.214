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
	{ 0xd111bb59, "_dev_info" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xebba9f54, "v4l2_ctrl_new_std_menu_items" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0xf9a9ea79, "__v4l2_ctrl_modify_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x904a8908, "regmap_write" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:IMX274");
MODULE_ALIAS("of:N*T*Csony,imx274");
MODULE_ALIAS("of:N*T*Csony,imx274C*");

MODULE_INFO(srcversion, "7B2F09998FC8B3B9C828899");
