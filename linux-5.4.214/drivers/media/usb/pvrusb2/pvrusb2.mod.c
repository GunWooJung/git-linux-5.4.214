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
	{ 0xa24f23d8, "__request_module" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x60b5afd5, "dvb_module_probe" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdaff62f9, "cx2341x_fill_defaults" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc889377e, "cx2341x_log_status" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0x8d3a49fd, "cx2341x_ctrl_get_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xe46a68e7, "v4l2_s_ctrl" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xde7d6c64, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb9c8f3f1, "cx2341x_update" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd52f19ab, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0x5fd264df, "__class_register" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xd5145120, "usb_urb_ep_type_check" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7f6f442, "dvb_module_release" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e17faf3, "put_device" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb854f47, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x96848186, "scnprintf" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0xf4d81106, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "dvb-core,videodev,tveeprom,cx2341x");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B4E11632F16B0709B7CEB87");
