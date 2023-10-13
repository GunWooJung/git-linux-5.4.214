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
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xd18e1306, "vb2_ioctl_prepare_buf" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0x86efd0ac, "v4l2_event_subdev_unsubscribe" },
	{ 0x1ff1267b, "v4l2_subdev_link_validate_default" },
	{ 0x4767aa1f, "v4l2_subdev_link_validate" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd608465b, "v4l2_async_notifier_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x37b3d049, "v4l2_async_notifier_add_fwnode_remote_subdev" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa1437bc1, "v4l2_fwnode_endpoint_parse" },
	{ 0xaea30523, "fwnode_graph_get_endpoint_by_id" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x16f2cdd6, "v4l2_async_notifier_init" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xcc8b5292, "v4l2_device_register_subdev" },
	{ 0x6746e6dd, "v4l2_subdev_init" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xea5f4b29, "__media_device_register" },
	{ 0x62ea139f, "media_device_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x930cb169, "media_pipeline_start" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x94014d48, "v4l2_event_queue" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0x732288e6, "v4l2_device_register_subdev_nodes" },
	{ 0x22914a7d, "media_create_pad_link" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x8e4ec12d, "media_entity_remote_pad" },
	{ 0xd73702e3, "v4l2_event_subscribe" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x78c29da6, "media_pipeline_stop" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf2306d34, "media_device_cleanup" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x192ef12, "v4l2_async_notifier_cleanup" },
	{ 0x86fe200d, "v4l2_async_notifier_unregister" },
	{ 0x21bb6ef4, "media_device_unregister" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2de078c4, "v4l2_querymenu" },
	{ 0x5f2471db, "v4l2_ctrl_g_ctrl" },
	{ 0x2570d49a, "v4l2_ctrl_find" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,v4l2-fwnode,videobuf2-dma-sg,mc,videobuf2-common");

MODULE_ALIAS("pci:v00008086d00009D32sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8E3AA62EB356AAD7EB1EEF");
