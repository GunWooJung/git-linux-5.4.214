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
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x3b7f7697, "v4l2_m2m_ioctl_streamoff" },
	{ 0xfb089aac, "v4l2_m2m_ioctl_streamon" },
	{ 0x518f706f, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xd9ae19e7, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xc98c0fe1, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xf4a768bf, "v4l2_m2m_ioctl_expbuf" },
	{ 0x84235bc3, "v4l2_m2m_ioctl_qbuf" },
	{ 0x43d08c62, "v4l2_m2m_ioctl_querybuf" },
	{ 0xa2830bc4, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x2a9c6047, "v4l2_m2m_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x59cecea9, "v4l2_m2m_fop_poll" },
	{ 0xe83a1237, "v4l2_m2m_request_queue" },
	{ 0x17d0c2a8, "vb2_request_validate" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15b8e28e, "platform_device_register" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7fa4475e, "v4l2_m2m_ctx_init" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xea5f4b29, "__media_device_register" },
	{ 0xe2e27191, "v4l2_m2m_register_media_controller" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x62ea139f, "media_device_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x63209a8a, "v4l2_m2m_job_finish" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc92ed1e2, "v4l2_m2m_buf_copy_metadata" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xee6830cb, "v4l2_ctrl_request_setup" },
	{ 0x3c635d15, "v4l2_m2m_next_buf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6c8f95d8, "v4l2_m2m_buf_remove" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x19c3f66, "v4l2_m2m_buf_queue" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf5f4d6af, "v4l2_m2m_ctx_release" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2306d34, "media_device_cleanup" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9248385d, "v4l2_m2m_get_vq" },
	{ 0xf96b138f, "v4l2_ctrl_request_complete" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x21bb6ef4, "media_device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-mem2mem,videobuf2-v4l2,mc,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "1965179E95312F2CB8E158B");
