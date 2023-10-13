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
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x328c9837, "media_device_usb_allocate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdf77f75f, "__media_pipeline_start" },
	{ 0x22e8408b, "media_device_unregister_entity_notify" },
	{ 0x4dd3885d, "_vb2_fop_release" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x30740d7d, "media_device_unregister_entity" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0x9e6e4b91, "dvb_create_media_graph" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7ac306ff, "dvb_frontend_suspend" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x408d30b0, "dvb_frontend_resume" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0x2afd787f, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x501621eb, "v4l_disable_media_source" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xd0b96e09, "media_device_delete" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc34d0d44, "media_entity_setup_link" },
	{ 0x4d1ba4cc, "media_get_pad_index" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd18e1306, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4bf1d28, "tveeprom_read" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xc1383123, "v4l_enable_media_source" },
	{ 0x34cc83c4, "media_device_register_entity" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xc6008dc2, "media_device_register_entity_notify" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1b139e38, "__media_pipeline_stop" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x22914a7d, "media_create_pad_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xea5f4b29, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x336f0977, "__media_entity_setup_link" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0xd55b19f0, "ir_raw_event_store" },
	{ 0x249b8396, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,rc-core,dvb-core,tveeprom,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3022BB669E2C8FCE23EB53F");
