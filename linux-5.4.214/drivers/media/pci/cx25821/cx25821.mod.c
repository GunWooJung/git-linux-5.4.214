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
	{ 0x85bd1608, "__request_region" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd18e1306, "vb2_ioctl_prepare_buf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-sg");

MODULE_ALIAS("pci:v000014F1d00008210sv000014F1sd00000920bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00008210sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "D54111CF83192AF7E3DBA85");
