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
	{ 0x765395c3, "param_ops_int" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x4292fab8, "si470x_set_freq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0xe91df0a1, "si470x_viddev_template" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x46e7dc2, "si470x_ctrl_ops" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa4a93fdb, "si470x_start" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x11b17c98, "si470x_stop" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x3530ac2, "v4l2_fh_is_singular" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x29361773, "complete" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "3B97B063F39A5DF95B406C2");
