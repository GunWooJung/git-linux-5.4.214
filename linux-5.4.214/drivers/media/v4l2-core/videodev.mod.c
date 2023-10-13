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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x825954a7, "cdev_alloc" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8baa46a, "fwnode_graph_get_remote_port_parent" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x30740d7d, "media_device_unregister_entity" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0xfd03b243, "media_devnode_create" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5e76a32a, "media_graph_walk_start" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x89d820f3, "i2c_new_probed_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4d1ba4cc, "media_get_pad_index" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xcee4d161, "fwnode_handle_get" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x216ffa13, "i2c_verify_client" },
	{ 0x5a302acf, "media_graph_walk_next" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x9c890b02, "media_request_object_bind" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x14b80dd0, "spi_new_device" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x94d6cc5e, "media_request_put" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xa751659, "media_request_get_by_fd" },
	{ 0x34cc83c4, "media_device_register_entity" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xe1503405, "media_request_object_put" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0x22914a7d, "media_create_pad_link" },
	{ 0x5075529, "media_create_intf_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x41187327, "clk_get" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff73978d, "media_request_object_complete" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x18334698, "media_request_object_unbind" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x24baa8ed, "spi_unregister_device" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa178cee0, "media_request_object_init" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6823cd5, "media_request_object_find" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x4ffdc176, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "380FE82D8FB70A316AE8846");