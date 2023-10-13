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
	{ 0x91f1a115, "em28xx_read_reg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x30740d7d, "media_device_unregister_entity" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x73acdd4b, "em28xx_write_regs" },
	{ 0x9a2e480c, "v4l2_ctrl_notify" },
	{ 0xfcf51d3f, "em28xx_setup_xc3028" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0x2afd787f, "v4l2_mc_create_media_graph" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x73a1dd41, "em28xx_init_usb_xfer" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xff79d472, "em28xx_register_extension" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc34d0d44, "media_entity_setup_link" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xe68d1135, "em28xx_unregister_extension" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd18e1306, "vb2_ioctl_prepare_buf" },
	{ 0x37dfc6f6, "em28xx_uninit_usb_xfer" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x34cc83c4, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2570d49a, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x58455224, "em28xx_audio_setup" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2bafc80c, "v4l2_i2c_subdev_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xe236ab9d, "em28xx_set_mode" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0xa17fbf0f, "em28xx_stop_urbs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x78668228, "em28xx_write_reg" },
	{ 0xc7eea1e8, "em28xx_audio_analog_set" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x2d10e15d, "em28xx_init_camera" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "68717C4A9D9A1C081FF8F20");
