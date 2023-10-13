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
	{ 0x4287a13, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x37e68967, "i2c_mux_add_adapter" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xf60cd5c5, "videobuf_mmap_mapper" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2b98a5bc, "i2c_mux_del_adapters" },
	{ 0xc2b8f6a3, "usb_reset_endpoint" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0xfa11908a, "__media_device_usb_init" },
	{ 0x8387bc00, "cx2341x_handler_set_50hz" },
	{ 0xdd2dd4d, "cx2341x_handler_init" },
	{ 0x8fa68e93, "videobuf_queue_vmalloc_init" },
	{ 0x2afd787f, "v4l2_mc_create_media_graph" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xea723b60, "videobuf_streamon" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xb048eec4, "videobuf_iolock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc34d0d44, "media_entity_setup_link" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x79b1c1fa, "i2c_mux_alloc" },
	{ 0xe46a68e7, "v4l2_s_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xae6a2312, "videobuf_qbuf" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xc978beb8, "v4l2_event_pending" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xb825e507, "videobuf_querybuf" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6b9d7620, "videobuf_read_stream" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xf2306d34, "media_device_cleanup" },
	{ 0x34cc83c4, "media_device_register_entity" },
	{ 0xd6da61ea, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x3ad8d076, "cx2341x_handler_setup" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x381c8621, "videobuf_vmalloc_free" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x52ffd383, "videobuf_to_vmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x716066a, "videobuf_dqbuf" },
	{ 0x8fabe238, "videobuf_queue_is_busy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xea5f4b29, "__media_device_register" },
	{ 0xd2adb078, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x5c8c67ca, "videobuf_reqbufs" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0xf9d38d4, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xb15c4153, "v4l2_ctrl_radio_filter" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf05dc386, "videobuf_read_stop" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x21bb6ef4, "media_device_unregister" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xfeba01ff, "videobuf_poll_stream" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
	{ 0x7be9f90a, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,i2c-mux,tveeprom,mc,cx2341x,videobuf-vmalloc,rc-core");

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5E50A27CC109D09817686B0");
