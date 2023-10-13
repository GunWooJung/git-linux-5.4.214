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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "531CE1D832284F350005F0F");
