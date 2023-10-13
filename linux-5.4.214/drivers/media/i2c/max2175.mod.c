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
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdd64e639, "strscpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x904a8908, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Cmaxim,max2175");
MODULE_ALIAS("of:N*T*Cmaxim,max2175C*");
MODULE_ALIAS("i2c:max2175");

MODULE_INFO(srcversion, "0AB276601F256CC767B36FE");
