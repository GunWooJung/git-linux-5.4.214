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
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x904a8908, "regmap_write" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xdd64e639, "strscpy" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc,videodev");

MODULE_ALIAS("i2c:lm3646");

MODULE_INFO(srcversion, "7CBC5D302C3C44CBA40E30E");
