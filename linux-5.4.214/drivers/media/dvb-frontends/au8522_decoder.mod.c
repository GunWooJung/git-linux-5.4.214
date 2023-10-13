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
	{ 0xeb72fd70, "v4l2_ctrl_subdev_log_status" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x55228b39, "au8522_readreg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7a31ce9f, "au8522_writereg" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x4f17d521, "au8522_get_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf00b8403, "au8522_release_state" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,au8522_common,mc");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "F3D48EA2D9A1B09B0F65E39");
