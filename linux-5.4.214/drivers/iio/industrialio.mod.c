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
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xae369557, "irq_set_chip" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xed6da912, "__irq_set_handler" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x463d8290, "__irq_alloc_descs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xce2f01d5, "device_del" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x888350b3, "device_property_read_string_array" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x1cb2c6d8, "kvasprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x32ee9868, "simple_open" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x398c9016, "devres_release" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x62f3f854, "anon_inode_getfd" },
	{ 0x1000e51, "schedule" },
	{ 0x6a58d2ee, "cdev_device_add" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x535449e7, "device_initialize" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x93f79281, "cdev_device_del" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC064084FD7AE14EFDD5231");
