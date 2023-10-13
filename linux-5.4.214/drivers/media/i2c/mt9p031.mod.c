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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x86a6ef4c, "aptina_pll_calculate" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x2570d49a, "v4l2_ctrl_find" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0xebba9f54, "v4l2_ctrl_new_std_menu_items" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd6f99ee8, "v4l2_ctrl_activate" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "aptina-pll,videodev,mc");

MODULE_ALIAS("i2c:mt9p031");
MODULE_ALIAS("i2c:mt9p031m");

MODULE_INFO(srcversion, "EF813F64DDB7DDCF17B055B");
