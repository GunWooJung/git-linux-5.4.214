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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6b7a4335, "hyperv_cleanup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xe60548f0, "__cpuhp_remove_state" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x349cba85, "strchr" },
	{ 0x9b4f6661, "kmsg_dump_register" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3af578f5, "hyperv_report_panic" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x7bbccd05, "nr_node_ids" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x5b884364, "hyperv_report_panic_msg" },
	{ 0x396e2fd7, "ms_hyperv" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x90a9d8cc, "hv_is_hyperv_initialized" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x3fae6ab0, "hv_vp_index" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x87e35609, "hv_stimer_init" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x7edeba7, "hv_free_hyperv_page" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xebff55c1, "__alloc_pages_nodemask" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf6fc8791, "__bitmap_xor" },
	{ 0xab1e0e93, "hv_setup_kexec_handler" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xba01ec83, "hv_stimer_global_cleanup" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x7d0e1d95, "hv_setup_crash_handler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xeade671, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf2127abc, "hv_stimer_cleanup" },
	{ 0x6626afca, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc25b8971, "hv_remove_crash_handler" },
	{ 0x7c941d6, "__cpuhp_setup_state" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xa0f493d9, "efi" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x121d958a, "unregister_die_notifier" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x78812411, "hv_stimer_alloc" },
	{ 0x20899467, "hv_stimer0_isr" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x37b8b39e, "screen_info" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8df9dd10, "guid_null" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x374c2088, "kmsg_dump_get_buffer" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9bad141d, "hv_hypercall_pg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xbfb1be70, "hv_setup_vmbus_irq" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x49929c0, "hv_stimer_free" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x16dfbf36, "add_interrupt_randomness" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x8654be58, "hv_remove_vmbus_irq" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0xed814ec1, "kmsg_dump_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0xfa1eb910, "unregister_syscore_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xcf2a6966, "up" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xa4731577, "driver_attach" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x31128b8e, "hv_remove_kexec_handler" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb6261484, "register_die_notifier" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x719e0e44, "add_uevent_var" },
	{ 0x211130c1, "alloc_cpumask_var" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:VMBUS:*");
MODULE_ALIAS("acpi*:VMBus:*");

MODULE_INFO(srcversion, "4A25B7B42A271B9E1FAB552");
