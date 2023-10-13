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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xff585440, "v4l2_dv_timings_aspect_ratio" },
	{ 0x94014d48, "v4l2_event_queue" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0xbdb457b0, "_snd_pcm_stream_lock_irqsave" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0x5b55e1a4, "pcie_capability_read_dword" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a0fbe36, "snd_pcm_hw_constraint_integer" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x931f18d9, "vb2_thread_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x1f590010, "vb2_thread_stop" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xf10de535, "ioread8" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xd73702e3, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xcfe5c5b1, "map_destroy" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xb0259c6, "do_map_probe" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b7712bc, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2570d49a, "v4l2_ctrl_find" },
	{ 0x12a38747, "usleep_range" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0xcc06520d, "vb2_fop_write" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x4839762f, "v4l2_calc_timeperframe" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x6fc162a7, "v4l2_i2c_new_subdev_board" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,v4l2-dv-timings,snd-pcm,videobuf2-common,chipreg,snd,mtd,videobuf2-dma-sg");

MODULE_ALIAS("pci:v00001137d00002732sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "72A1EB53ECF6F927F55AF1E");