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
	{ 0x3b7f7697, "v4l2_m2m_ioctl_streamoff" },
	{ 0x518f706f, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xc98c0fe1, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xf4a768bf, "v4l2_m2m_ioctl_expbuf" },
	{ 0x84235bc3, "v4l2_m2m_ioctl_qbuf" },
	{ 0x43d08c62, "v4l2_m2m_ioctl_querybuf" },
	{ 0xa2830bc4, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x2a9c6047, "v4l2_m2m_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x59cecea9, "v4l2_m2m_fop_poll" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0x7fa4475e, "v4l2_m2m_ctx_init" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0x8265cfb8, "__dma_request_channel" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9248385d, "v4l2_m2m_get_vq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5f4d6af, "v4l2_m2m_ctx_release" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x6c8f95d8, "v4l2_m2m_buf_remove" },
	{ 0x63209a8a, "v4l2_m2m_job_finish" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19c3f66, "v4l2_m2m_buf_queue" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x825884ec, "vb2_dma_contig_memops" },
	{ 0x33413e1c, "v4l2_m2m_streamon" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x3c635d15, "v4l2_m2m_next_buf" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-common,videobuf2-dma-contig");


MODULE_INFO(srcversion, "E951E0115938853FA9296B1");
