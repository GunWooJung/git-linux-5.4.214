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
	{ 0x765395c3, "param_ops_int" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x80500894, "request_firmware" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1FCBA933B0FCE517604E1F3");
