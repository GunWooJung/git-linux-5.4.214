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
	{ 0x86efd0ac, "v4l2_event_subdev_unsubscribe" },
	{ 0x4767aa1f, "v4l2_subdev_link_validate" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0x9116bddd, "v4l2_subdev_notify_event" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcafeb74a, "devm_i2c_new_dummy_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x370cfe6e, "v4l2_dv_timings_presets" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1f67a456, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xabae5543, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0xef15cc44, "v4l2_hdmi_rx_colorimetry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17fa78ec, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings,snd-soc-core,mc,snd-pcm");

MODULE_ALIAS("of:N*T*Cnxp,tda19971");
MODULE_ALIAS("of:N*T*Cnxp,tda19971C*");
MODULE_ALIAS("of:N*T*Cnxp,tda19973");
MODULE_ALIAS("of:N*T*Cnxp,tda19973C*");
MODULE_ALIAS("i2c:tda19971");
MODULE_ALIAS("i2c:tda19973");

MODULE_INFO(srcversion, "6B5E9846136D324B3B9699F");
