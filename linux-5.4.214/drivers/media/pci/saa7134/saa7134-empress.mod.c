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
	{ 0x6eed2630, "param_array_ops" },
	{ 0x4ea24c5e, "saa7134_vb2_buffer_queue" },
	{ 0x9577e8ae, "saa7134_ts_buffer_prepare" },
	{ 0xcc87967f, "saa7134_ts_buffer_init" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x39942197, "saa7134_ts_queue_setup" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0xa7b67f19, "saa7134_s_frequency" },
	{ 0x527239b7, "saa7134_g_frequency" },
	{ 0x300a4e10, "saa7134_s_tuner" },
	{ 0xf4e78a67, "saa7134_g_tuner" },
	{ 0xdae0edfc, "saa7134_s_input" },
	{ 0xec072ba6, "saa7134_g_input" },
	{ 0xffb52253, "saa7134_enum_input" },
	{ 0x9f7cd0e0, "saa7134_querystd" },
	{ 0x3553e53a, "saa7134_s_std" },
	{ 0xa7aa739f, "saa7134_g_std" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0xca770301, "saa7134_querycap" },
	{ 0x2e51bcde, "saa7134_ts_unregister" },
	{ 0xba9916dd, "saa7134_ts_register" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xf9d38d4, "v4l2_ctrl_add_handler" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0xc1e9ccb, "video_device_release" },
	{ 0x77d54422, "video_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfaee435f, "saa7134_ts_start_streaming" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb9f4c69f, "saa7134_ts_stop_streaming" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7134,videobuf2-v4l2,videodev,videobuf2-dma-sg");


MODULE_INFO(srcversion, "3282478ED78D0CEE1EDACB2");
