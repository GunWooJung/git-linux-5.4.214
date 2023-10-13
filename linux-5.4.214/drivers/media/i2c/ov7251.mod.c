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
	{ 0xbdc671c3, "__v4l2_ctrl_handler_setup" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x47cf577d, "v4l2_ctrl_new_int_menu" },
	{ 0xebba9f54, "v4l2_ctrl_new_std_menu_items" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0xa1437bc1, "v4l2_fwnode_endpoint_parse" },
	{ 0xecd1d8c5, "fwnode_graph_get_next_endpoint" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x815588a6, "clk_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xf9a9ea79, "__v4l2_ctrl_modify_range" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0xdee35b3c, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Covti,ov7251");
MODULE_ALIAS("of:N*T*Covti,ov7251C*");

MODULE_INFO(srcversion, "8FC2C3135BD70DD06068D11");
