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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9bfdcbb2, "gpiod_get_optional" },
	{ 0x41187327, "clk_get" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:rj54n1cb0c");

MODULE_INFO(srcversion, "E1B8840BD96CC5391A59085");
