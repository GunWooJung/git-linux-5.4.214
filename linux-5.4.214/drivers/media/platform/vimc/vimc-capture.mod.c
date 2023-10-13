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
	{ 0x925fc7, "vb2_fop_release" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xd18e1306, "vb2_ioctl_prepare_buf" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x148f9dd4, "vimc_link_validate" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x930cb169, "media_pipeline_start" },
	{ 0x78c29da6, "media_pipeline_stop" },
	{ 0xe689eba5, "vimc_streamer_s_stream" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x4831f348, "vimc_pads_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9c2fdbd4, "component_add" },
	{ 0xcfe2c150, "vimc_pix_map_by_index" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xf541e79b, "vimc_pix_map_by_code" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f919ddf, "vimc_pix_map_by_pixelformat" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x2bed3a52, "component_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,vimc,videobuf2-common,mc,videobuf2-vmalloc");

MODULE_ALIAS("platform:vimc-capture");

MODULE_INFO(srcversion, "31DF6D22812B6D90D7C9452");
