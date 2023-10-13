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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "7059AB609C64F3D46E87BDD");
