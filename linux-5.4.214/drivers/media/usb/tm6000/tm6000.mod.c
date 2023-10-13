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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x4287a13, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xf60cd5c5, "videobuf_mmap_mapper" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x8fa68e93, "videobuf_queue_vmalloc_init" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x91b8e435, "usb_reset_configuration" },
	{ 0xea723b60, "videobuf_streamon" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb048eec4, "videobuf_iolock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xae6a2312, "videobuf_qbuf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0xc978beb8, "v4l2_event_pending" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0xb825e507, "videobuf_querybuf" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6b9d7620, "videobuf_read_stream" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x381c8621, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x52ffd383, "videobuf_to_vmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x716066a, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x5c8c67ca, "videobuf_reqbufs" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0xf9d38d4, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
	{ 0x7be9f90a, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,rc-core,videobuf-vmalloc");

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "00D3290260C725B255FDF56");
