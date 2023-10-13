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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe21d630c, "spi_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x586583b8, "spi_sync" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x47cf577d, "v4l2_ctrl_new_int_menu" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc1f9d72, "v4l2_ctrl_handler_log_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2c89d0ad, "v4l2_ctrl_auto_cluster" },
	{ 0xcc8b5292, "v4l2_device_register_subdev" },
	{ 0x22914a7d, "media_create_pad_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x6746e6dd, "v4l2_subdev_init" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x80500894, "request_firmware" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:S5C73M3");
MODULE_ALIAS("of:N*T*Csamsung,s5c73m3");
MODULE_ALIAS("of:N*T*Csamsung,s5c73m3C*");

MODULE_INFO(srcversion, "50545A50B291AA0D6CF466A");
