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
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x74ae9b45, "pm_runtime_get_if_in_use" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbdc671c3, "__v4l2_ctrl_handler_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2c89d0ad, "v4l2_ctrl_auto_cluster" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("of:N*T*Connn,mt9m001");
MODULE_ALIAS("of:N*T*Connn,mt9m001C*");
MODULE_ALIAS("i2c:mt9m001");

MODULE_INFO(srcversion, "74E3049E6C1108058AFF111");
