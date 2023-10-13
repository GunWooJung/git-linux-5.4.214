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
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v16C0p05DFd*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "30B83D7CF3D1A5997677551");
