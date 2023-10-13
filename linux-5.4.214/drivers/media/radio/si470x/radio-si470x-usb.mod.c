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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x4292fab8, "si470x_set_freq" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0xe91df0a1, "si470x_viddev_template" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x46e7dc2, "si470x_ctrl_ops" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11b17c98, "si470x_stop" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x29361773, "complete" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xa4a93fdb, "si470x_start" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "64F4F029A2B7C7B0DAE15C7");
