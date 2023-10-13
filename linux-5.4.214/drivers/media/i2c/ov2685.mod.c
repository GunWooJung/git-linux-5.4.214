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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbdc671c3, "__v4l2_ctrl_handler_setup" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xebba9f54, "v4l2_ctrl_new_std_menu_items" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x47cf577d, "v4l2_ctrl_new_int_menu" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf9a9ea79, "__v4l2_ctrl_modify_range" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x74ae9b45, "pm_runtime_get_if_in_use" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "F9F28A64742E1D1AFA081DA");
