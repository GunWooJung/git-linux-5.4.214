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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0x449962d6, "dvb_usb_device_exit" },
	{ 0xc1e9ccb, "video_device_release" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2bb2479a, "dvb_usb_device_init" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf34cee1d, "dib0070_wbd_offset" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x77d54422, "video_device_alloc" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0xd18e1306, "vb2_ioctl_prepare_buf" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xbed5ff5b, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x437467d7, "usb_cypress_load_firmware" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,dvb-usb,dib0070,videobuf2-vmalloc,videobuf2-common,rc-core");

MODULE_ALIAS("usb:v1660p0932d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB51d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB54d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB55d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB58d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB59d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB70d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB71d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA868d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pDB98d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p86D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pD811d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4857C57296E2C8ED3EDF3C4");
