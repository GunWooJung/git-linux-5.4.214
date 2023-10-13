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
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xdc1f9d72, "v4l2_ctrl_handler_log_status" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x470490db, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:msp3400");

MODULE_INFO(srcversion, "F5DE939C8DE475FFCDBDFD0");
