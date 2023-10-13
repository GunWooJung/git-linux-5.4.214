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
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x94014d48, "v4l2_event_queue" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xd73702e3, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x825884ec, "vb2_dma_contig_memops" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-contig");


MODULE_INFO(srcversion, "A7AE32824B8CDA524F3534E");
