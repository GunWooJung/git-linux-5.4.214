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
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xbecf3c17, "v4l2_async_register_subdev_sensor_common" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x47cf577d, "v4l2_ctrl_new_int_menu" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0xde96208c, "v4l2_fwnode_endpoint_free" },
	{ 0x48509c25, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xecd1d8c5, "fwnode_graph_get_next_endpoint" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x74ae9b45, "pm_runtime_get_if_in_use" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbdc671c3, "__v4l2_ctrl_handler_setup" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x904a8908, "regmap_write" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "v4l2-fwnode,mc,videodev");

MODULE_ALIAS("of:N*T*Csony,imx214");
MODULE_ALIAS("of:N*T*Csony,imx214C*");

MODULE_INFO(srcversion, "9EA3137658EE8F32A38F20E");