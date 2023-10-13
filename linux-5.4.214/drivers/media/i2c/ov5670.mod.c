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
	{ 0x4767aa1f, "v4l2_subdev_link_validate" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xbecf3c17, "v4l2_async_register_subdev_sensor_common" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xebba9f54, "v4l2_ctrl_new_std_menu_items" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x47cf577d, "v4l2_ctrl_new_int_menu" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x74ae9b45, "pm_runtime_get_if_in_use" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xf9a9ea79, "__v4l2_ctrl_modify_range" },
	{ 0xdee35b3c, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdc671c3, "__v4l2_ctrl_handler_setup" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc");

MODULE_ALIAS("acpi*:INT3479:*");

MODULE_INFO(srcversion, "5B7418E3DDCA653261D5EC4");