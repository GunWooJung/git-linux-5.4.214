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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x190599d3, "usb_altnum_to_altsetting" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x5d67075, "vb2_fop_poll" },
	{ 0xede7a24, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xa8cdef34, "vb2_fop_read" },
	{ 0x66c54ff1, "input_event" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x4c448223, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2490f46e, "vb2_fop_mmap" },
	{ 0x77479115, "vb2_ioctl_qbuf" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xa6cf1cca, "vb2_ioctl_dqbuf" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x925fc7, "vb2_fop_release" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x94a09154, "input_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x2c89d0ad, "v4l2_ctrl_auto_cluster" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcfec4305, "v4l2_fh_open" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0xf9f274b4, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xd8e9ab65, "vb2_ioctl_streamoff" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7EE1DF3D2E0246FAAEAD105");
