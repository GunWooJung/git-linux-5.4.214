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
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xf9301932, "device_wakeup_disable" },
	{ 0xa4faf62a, "acpi_disable_gpe" },
	{ 0x9d099a39, "acpi_remove_gpe_handler" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x3f7ad254, "debugfs_create_bool" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x37a0cba, "kfree" },
	{ 0xa579b855, "efivar_entry_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0xb97f7045, "acpi_install_gpe_handler" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdd737cd1, "acpi_dev_get_property" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x84aa8e4a, "input_mt_assign_slots" },
	{ 0x19df99b9, "acpi_finish_gpe" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0xbd6841d4, "crc16" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4b5489c1, "spi_async" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x81b03377, "efivar_entry_set_safe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xe02ba436, "trace_print_hex_seq" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7d709b59, "trace_define_field" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:APP000D:*");

MODULE_INFO(srcversion, "D22401AAC796AAFFB520B3A");
