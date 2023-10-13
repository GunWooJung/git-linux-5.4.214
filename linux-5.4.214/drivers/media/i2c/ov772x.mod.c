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
	{ 0x86efd0ac, "v4l2_event_subdev_unsubscribe" },
	{ 0x1f67a456, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xeb72fd70, "v4l2_ctrl_subdev_log_status" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x56470118, "__warn_printk" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x41187327, "clk_get" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x318f25cc, "__devm_regmap_init_sccb" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0x9bfdcbb2, "gpiod_get_optional" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x904a8908, "regmap_write" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,regmap-sccb");

MODULE_ALIAS("of:N*T*Covti,ov7725");
MODULE_ALIAS("of:N*T*Covti,ov7725C*");
MODULE_ALIAS("of:N*T*Covti,ov7720");
MODULE_ALIAS("of:N*T*Covti,ov7720C*");
MODULE_ALIAS("i2c:ov772x");

MODULE_INFO(srcversion, "1ED0F84FCDF0352AA278C7E");
