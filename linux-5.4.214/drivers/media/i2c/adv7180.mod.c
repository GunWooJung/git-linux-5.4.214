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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x28bf0b4e, "i2c_new_dummy_device" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x1f67a456, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xabae5543, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x9116bddd, "v4l2_subdev_notify_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:adv7180");
MODULE_ALIAS("i2c:adv7180cp");
MODULE_ALIAS("i2c:adv7180st");
MODULE_ALIAS("i2c:adv7182");
MODULE_ALIAS("i2c:adv7280");
MODULE_ALIAS("i2c:adv7280-m");
MODULE_ALIAS("i2c:adv7281");
MODULE_ALIAS("i2c:adv7281-m");
MODULE_ALIAS("i2c:adv7281-ma");
MODULE_ALIAS("i2c:adv7282");
MODULE_ALIAS("i2c:adv7282-m");

MODULE_INFO(srcversion, "6D42648BE83D463CC2FFE9B");
