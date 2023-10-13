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
	{ 0x15ba50a6, "jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0x2c89d0ad, "v4l2_ctrl_auto_cluster" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdc1f9d72, "v4l2_ctrl_handler_log_status" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:S5K6AA");

MODULE_INFO(srcversion, "623FAEBCF46D11302697E11");
