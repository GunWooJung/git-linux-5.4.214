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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x207c2627, "cec_delete_adapter" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x4b080ad0, "cec_register_adapter" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc7b2393b, "cec_allocate_adapter" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c13585f, "cec_transmit_attempt_done_ts" },
	{ 0x5330a196, "cec_received_msg_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x9116bddd, "v4l2_subdev_notify_event" },
	{ 0xbb3bd805, "cec_s_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xb172111a, "cec_unregister_adapter" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x17fa78ec, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0x1f67a456, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xabae5543, "v4l2_src_change_event_subdev_subscribe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-dv-timings");

MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "B28329E7C85CDC9C80AD942");
