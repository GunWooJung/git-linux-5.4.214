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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37ea659f, "add_memory" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0x17994d70, "memhp_auto_online" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c51cbe, "split_page" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x29361773, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc006e383, "vmbus_recvpacket" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3516e991, "__online_page_free" },
	{ 0x2e468726, "__online_page_increment_counters" },
	{ 0x8790c910, "__online_page_set_limits" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0xa770832, "register_memory_notifier" },
	{ 0xa793c37b, "set_online_page_callback" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x469d6b8b, "vmbus_sendpacket" },
	{ 0x26520970, "vm_memory_committed" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc675a986, "restore_online_page_callback" },
	{ 0x26e298e0, "unregister_memory_notifier" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x79a37c17, "bpf_trace_run6" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:dc7450528589e2468057a307dc18a502");

MODULE_INFO(srcversion, "5153DFA0926B24FED6AD091");
