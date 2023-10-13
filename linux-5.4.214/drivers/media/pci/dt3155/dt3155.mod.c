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
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xb23de490, "pci_request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x825884ec, "vb2_dma_contig_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-dma-contig,videobuf2-common");

MODULE_ALIAS("pci:v00008086d00001223sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8F9A31562DE3532EF28EF4");
