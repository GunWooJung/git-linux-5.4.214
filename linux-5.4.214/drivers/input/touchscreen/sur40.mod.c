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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3ccd56d7, "usb_sg_wait" },
	{ 0x5b21dd7, "usb_sg_init" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x20a18f36, "input_mt_get_slot_by_key" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6635f5ce, "vb2_wait_for_all_buffers" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x60915a18, "input_allocate_polled_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcec59fc, "input_free_polled_device" },
	{ 0xc964a580, "input_unregister_polled_device" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-sg,input-polldev");

MODULE_ALIAS("usb:v045Ep0775d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FC6EFC683AAD674BE9614C0");
