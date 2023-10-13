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
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x3aa68d7a, "v4l2_find_dv_timings_cap" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x28bf0b4e, "i2c_new_dummy_device" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x69acdf38, "memcpy" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xc5850110, "printk" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings,mc");

MODULE_ALIAS("i2c:ad9389b");
MODULE_ALIAS("i2c:ad9889b");

MODULE_INFO(srcversion, "7F814F8981DE85486648531");
