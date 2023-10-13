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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb93f6cd8, "most_stop_channel" },
	{ 0x360781c, "most_deregister_configfs_subsys" },
	{ 0xfd5e86d2, "most_register_component" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc1e9ccb, "video_device_release" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3cb62fff, "most_put_mbo" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0x77d54422, "video_device_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe125010, "most_deregister_component" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4978ff76, "most_start_channel" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8392fb44, "most_register_configfs_subsys" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "most_core,videodev");


MODULE_INFO(srcversion, "D250DE738DADFC3843E8C83");
