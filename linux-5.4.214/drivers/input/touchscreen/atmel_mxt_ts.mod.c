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
	{ 0xe630a635, "vb2_ioctl_create_bufs" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0x633ee6d9, "vb2_ioctl_expbuf" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0xe9d4e5cf, "vb2_ioctl_reqbufs" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x29361773, "complete" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x66c54ff1, "input_event" },
	{ 0xa94ccfc0, "input_mt_report_pointer_emulation" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("acpi*:ATML0000:*");
MODULE_ALIAS("acpi*:ATML0001:*");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");

MODULE_INFO(srcversion, "88D34A9EE3FB820FCC3E5FC");
