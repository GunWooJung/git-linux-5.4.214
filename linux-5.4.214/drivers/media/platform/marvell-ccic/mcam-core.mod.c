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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4dd3885d, "_vb2_fop_release" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x192ef12, "v4l2_async_notifier_cleanup" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x16f2cdd6, "v4l2_async_notifier_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x6296bb23, "v4l2_async_notifier_add_subdev" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x4c12b82d, "devm_clk_register" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0xe46a68e7, "v4l2_s_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xd608465b, "v4l2_async_notifier_register" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x3530ac2, "v4l2_fh_is_singular" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6765be35, "v4l2_g_parm_cap" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x825884ec, "vb2_dma_contig_memops" },
	{ 0x69acdf38, "memcpy" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x86fe200d, "v4l2_async_notifier_unregister" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x832a4964, "v4l2_s_parm_cap" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common,videobuf2-dma-contig,videobuf2-dma-sg");


MODULE_INFO(srcversion, "322E0BB8FB465C597034E0E");
