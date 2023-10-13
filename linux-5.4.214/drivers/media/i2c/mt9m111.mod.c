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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x95b7ca2a, "v4l2_clk_put" },
	{ 0xebba9f54, "v4l2_ctrl_new_std_menu_items" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x4f6b2ee, "v4l2_clk_get" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0xa1437bc1, "v4l2_fwnode_endpoint_parse" },
	{ 0xecd1d8c5, "fwnode_graph_get_next_endpoint" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xe580fcb5, "v4l2_clk_disable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xedf2c684, "v4l2_clk_enable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-fwnode");

MODULE_ALIAS("i2c:mt9m111");
MODULE_ALIAS("of:N*T*Cmicron,mt9m111");
MODULE_ALIAS("of:N*T*Cmicron,mt9m111C*");

MODULE_INFO(srcversion, "B0DE3539559E2C751C1AA06");
