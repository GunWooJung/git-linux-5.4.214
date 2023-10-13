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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x94014d48, "v4l2_event_queue" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc1e9ccb, "video_device_release" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x77d54422, "video_device_alloc" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xd73702e3, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xf7584a9c, "find_font" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x5748356e, "device_create_file" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x713aee13, "device_create_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x825884ec, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-common,videobuf2-dma-contig,videobuf2-dma-sg");

MODULE_ALIAS("pci:v00009413d00006010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009413d00006110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3A967139ACD51593DE3BD7B");
