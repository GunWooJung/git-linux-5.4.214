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
	{ 0x765395c3, "param_ops_int" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0x7bb0516b, "cx8802_unregister_driver" },
	{ 0x70009c08, "cx8802_register_driver" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x762089bb, "cx88_vdev_init" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xf9d38d4, "v4l2_ctrl_add_handler" },
	{ 0xdd2dd4d, "cx2341x_handler_init" },
	{ 0x8ff2585b, "cx88_set_freq" },
	{ 0xfc39ad03, "cx8802_start_dma" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3ad8d076, "cx2341x_handler_setup" },
	{ 0x8387bc00, "cx2341x_handler_set_50hz" },
	{ 0xc25bea50, "cx88_set_scale" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5c61a5f3, "cx8802_get_driver" },
	{ 0x3d2d8b8b, "cx8802_cancel_buffers" },
	{ 0xd3893838, "cx2341x_handler_set_busy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5850110, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf01ac8d5, "cx88_querycap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xb1292530, "cx88_enum_input" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd137193c, "cx88_video_mux" },
	{ 0x33a5bc3b, "cx88_newstation" },
	{ 0xc9a04802, "cx88_get_stereo" },
	{ 0xdd64e639, "strscpy" },
	{ 0xda89723b, "cx88_set_stereo" },
	{ 0xecb3c64f, "cx88_set_tvnorm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc1f9d72, "v4l2_ctrl_handler_log_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xa32839cd, "cx8802_buf_prepare" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x57ba13b8, "cx8802_buf_queue" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,cx8802,cx88xx,videobuf2-dma-sg,cx2341x,cx8800,videobuf2-common");


MODULE_INFO(srcversion, "39F87EDE9D96C9EEA8F8A7B");
