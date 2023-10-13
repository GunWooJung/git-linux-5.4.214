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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbbecc810, "rc_keydown_notimeout" },
	{ 0x4bf1d28, "tveeprom_read" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x13b45de2, "__v4l2_ctrl_grab" },
	{ 0x538e7f52, "rc_keyup" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x53b9230d, "i2c_smbus_xfer" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xdc14eda7, "pci_pci_problems" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xedc03953, "iounmap" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0xf3251e7b, "v4l2_norm_to_name" },
};

MODULE_INFO(depends, "rc-core,videodev,tveeprom,videobuf2-common,i2c-algo-bit");


MODULE_INFO(srcversion, "7FD6810791B48E8C9E2924D");
