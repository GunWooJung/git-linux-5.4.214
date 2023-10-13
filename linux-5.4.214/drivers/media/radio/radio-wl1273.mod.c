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
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x80500894, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "515567DE33971656F8FC573");
