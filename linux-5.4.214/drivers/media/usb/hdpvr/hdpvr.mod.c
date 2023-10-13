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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd6f99ee8, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings");

MODULE_ALIAS("usb:v2040p4900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4982d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4903d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1F0BA33485A557D86D9B278");
