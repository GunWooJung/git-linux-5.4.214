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
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xce2f01d5, "device_del" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xffb7c514, "ida_free" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x5a921311, "strncmp" },
	{ 0xbdae77f, "bpf_trace_run5" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x535449e7, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x79a37c17, "bpf_trace_run6" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19A62B80D020AA6387AFB1F");
