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
	{ 0x925fc7, "vb2_fop_release" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0xd18e1306, "vb2_ioctl_prepare_buf" },
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xa5dcd6bb, "devm_nvmem_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xfe483960, "__regmap_init_i2c" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xd17a1563, "regmap_exit" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x904a8908, "regmap_write" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0xe1b1c080, "regmap_get_device" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("of:N*T*Cpanasonic,amg88xx");
MODULE_ALIAS("of:N*T*Cpanasonic,amg88xxC*");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90640");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90640C*");
MODULE_ALIAS("i2c:amg88xx");
MODULE_ALIAS("i2c:mlx90640");

MODULE_INFO(srcversion, "19ED487765A48F280398A87");
