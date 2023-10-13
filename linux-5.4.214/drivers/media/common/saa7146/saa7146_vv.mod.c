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
	{ 0x29e7a47b, "videobuf_to_dma" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf60cd5c5, "videobuf_mmap_mapper" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x665d8ddf, "videobuf_queue_cancel" },
	{ 0xea723b60, "videobuf_streamon" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb048eec4, "videobuf_iolock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd907bd67, "saa7146_pgtable_free" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x54b3fd3c, "saa7146_pgtable_alloc" },
	{ 0x684287d5, "videobuf_read_one" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xae6a2312, "videobuf_qbuf" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x8e90610f, "saa7146_pgtable_build_single" },
	{ 0xb825e507, "videobuf_querybuf" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6b9d7620, "videobuf_read_stream" },
	{ 0xb01e793c, "videobuf_dma_unmap" },
	{ 0x3845b24a, "videobuf_queue_sg_init" },
	{ 0xd6da61ea, "videobuf_stop" },
	{ 0x3adbd595, "v4l2_field_names" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe3cd9b5c, "saa7146_debug" },
	{ 0x716066a, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd2adb078, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c8c67ca, "videobuf_reqbufs" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0x9c112844, "videobuf_dma_free" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xfeba01ff, "videobuf_poll_stream" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
	{ 0x7be9f90a, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-dma-sg,videodev,videobuf-core,saa7146");


MODULE_INFO(srcversion, "6D19B2CD62FFA4DFA1EE4B4");
