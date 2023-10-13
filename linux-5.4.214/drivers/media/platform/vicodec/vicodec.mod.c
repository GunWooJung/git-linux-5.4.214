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
	{ 0x518f706f, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xc98c0fe1, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xc92ed1e2, "v4l2_m2m_buf_copy_metadata" },
	{ 0xe2e27191, "v4l2_m2m_register_media_controller" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x64640e6e, "v4l2_event_queue_fh" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7fa4475e, "v4l2_m2m_ctx_init" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xae4be3bf, "v4l2_m2m_ioctl_try_encoder_cmd" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x17d0c2a8, "vb2_request_validate" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2a9c6047, "v4l2_m2m_fop_mmap" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xef543b6, "vb2_request_object_is_buffer" },
	{ 0xfb089aac, "v4l2_m2m_ioctl_streamon" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9ae19e7, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x90541456, "v4l2_m2m_last_buf" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xd73702e3, "v4l2_event_subscribe" },
	{ 0x3b7f7697, "v4l2_m2m_ioctl_streamoff" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xa2830bc4, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xf7b0c70c, "v4l2_ctrl_request_hdl_find" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0xa07a37f0, "memchr" },
	{ 0x76160a31, "vb2_request_buffer_cnt" },
	{ 0xee6830cb, "v4l2_ctrl_request_setup" },
	{ 0xf2306d34, "media_device_cleanup" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9248385d, "v4l2_m2m_get_vq" },
	{ 0xe1503405, "media_request_object_put" },
	{ 0x84235bc3, "v4l2_m2m_ioctl_qbuf" },
	{ 0x15b8e28e, "platform_device_register" },
	{ 0xf96b138f, "v4l2_ctrl_request_complete" },
	{ 0x59cecea9, "v4l2_m2m_fop_poll" },
	{ 0xa1b3c673, "v4l2_m2m_ioctl_try_decoder_cmd" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19c3f66, "v4l2_m2m_buf_queue" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xe83a1237, "v4l2_m2m_request_queue" },
	{ 0x43d08c62, "v4l2_m2m_ioctl_querybuf" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf4a768bf, "v4l2_m2m_ioctl_expbuf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xebaf3b28, "vb2_find_timestamp" },
	{ 0x8f6fc2fc, "v4l2_ctrl_request_hdl_ctrl_find" },
	{ 0xea5f4b29, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x6c8f95d8, "v4l2_m2m_buf_remove" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0xf5f4d6af, "v4l2_m2m_ctx_release" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62ea139f, "media_device_init" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0x3c635d15, "v4l2_m2m_next_buf" },
	{ 0x21bb6ef4, "media_device_unregister" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x63209a8a, "v4l2_m2m_job_finish" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videodev,videobuf2-v4l2,videobuf2-common,videobuf2-vmalloc,mc");


MODULE_INFO(srcversion, "F3B25C04ED10097129DF116");
