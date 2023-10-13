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
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xebba9f54, "v4l2_ctrl_new_std_menu_items" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9116bddd, "v4l2_subdev_notify_event" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x30740d7d, "media_device_unregister_entity" },
	{ 0x22914a7d, "media_create_pad_link" },
	{ 0x34cc83c4, "media_device_register_entity" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "70829B65CC3343BC04AA06D");
