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
	{ 0x68a41536, "param_ops_bool" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xd18e1306, "vb2_ioctl_prepare_buf" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xa41935ec, "pm_qos_remove_request" },
	{ 0x28a8c058, "pm_qos_add_request" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcd538333, "viafb_irq_enable" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x31469540, "viafb_pm_unregister" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb4f863e6, "viafb_pm_register" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0xfe990052, "gpio_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6fc162a7, "v4l2_i2c_new_subdev_board" },
	{ 0x7b4dbfb0, "viafb_find_i2c_adapter" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xfff2dfd2, "viafb_gpio_lookup" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x37a0cba, "kfree" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe46a68e7, "v4l2_s_ctrl" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xe1cee08, "viafb_dma_copy_out_sg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x30cc9311, "viafb_request_dma" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xcaefb732, "viafb_release_dma" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4dd3885d, "_vb2_fop_release" },
	{ 0x3530ac2, "v4l2_fh_is_singular" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6765be35, "v4l2_g_parm_cap" },
	{ 0x832a4964, "v4l2_s_parm_cap" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb4606f8d, "viafb_irq_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,viafb,videobuf2-dma-sg,videobuf2-common");


MODULE_INFO(srcversion, "03293ECCB9165392C6E418C");
