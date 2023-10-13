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
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xce2f01d5, "device_del" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x23aa1909, "kernfs_find_and_get_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdae77f, "bpf_trace_run5" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4753da3f, "kernfs_notify" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x535449e7, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9410008010B6589756BF330");
