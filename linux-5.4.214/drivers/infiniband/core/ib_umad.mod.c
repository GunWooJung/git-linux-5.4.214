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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xa0039fa, "ib_register_mad_agent" },
	{ 0x6932b09e, "stream_open" },
	{ 0x16ab71d3, "ib_free_recv_mad" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0x71a2098b, "ib_get_rmpp_segment" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x91b2b41d, "ib_free_send_mad" },
	{ 0xa4237c66, "rdma_destroy_ah_user" },
	{ 0x39cbed64, "rdma_create_user_ah" },
	{ 0x613b1e2e, "ib_is_mad_class_rmpp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x14a9a9e5, "ib_mad_kernel_rmpp_agent" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5fd264df, "__class_register" },
	{ 0x968a9719, "ib_set_client_data" },
	{ 0x5181b8f4, "rdma_destroy_ah_attr" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x228dba14, "ib_create_send_mad" },
	{ 0xcd2d4c76, "ib_post_send_mad" },
	{ 0x4e155af0, "ib_response_mad" },
	{ 0x29f66da9, "ib_unregister_mad_agent" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49f0406b, "ib_register_client" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x6a58d2ee, "cdev_device_add" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa508c3a4, "ib_init_ah_attr_from_wc" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x5bec8b5, "rdma_dev_access_netns" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x945fcc28, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x535449e7, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x93f79281, "cdev_device_del" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x787ccc4c, "ib_get_mad_data_offset" },
	{ 0xd35dc02d, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "90BD93ABF70F475439E0482");
