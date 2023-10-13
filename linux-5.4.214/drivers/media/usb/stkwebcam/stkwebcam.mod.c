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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x699ef718, "remap_vmalloc_range" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x94363551, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x2ccdf080, "usb_put_intf" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v174FpA311d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v05E1p0501d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "F4423E30360E1F53BCFC3C8");
