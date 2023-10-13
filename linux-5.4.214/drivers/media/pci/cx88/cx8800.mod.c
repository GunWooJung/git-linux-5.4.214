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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x33a5bc3b, "cx88_newstation" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x6e76d1b8, "cx88_sram_channel_setup" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x1bb12e6b, "cx88_sram_channel_dump" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xeff2d7ce, "cx88_set_tvaudio" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xda89723b, "cx88_set_stereo" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x1689bedd, "cx88_risc_buffer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x154c8642, "cx88_ir_start" },
	{ 0x2570d49a, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0xecb3c64f, "cx88_set_tvnorm" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xaae573b5, "cx88_ir_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc9a04802, "cx88_get_stereo" },
	{ 0x93300f11, "cx88_core_get" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7618cec2, "cx88_core_irq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x904b8696, "cx88_audio_thread" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x7185b63b, "cx88_core_put" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x762089bb, "cx88_vdev_init" },
	{ 0xa7ec3cd2, "cx88_shutdown" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0xc25bea50, "cx88_set_scale" },
	{ 0x6fc162a7, "v4l2_i2c_new_subdev_board" },
	{ 0xf9d38d4, "v4l2_ctrl_add_handler" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x109d52f, "cx88_wakeup" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0x415f01fc, "cx88_reset" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,cx88xx,videobuf2-common,videobuf2-dma-sg");

MODULE_ALIAS("pci:v000014F1d00008800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7564C5CFF128A8A982006BF");
