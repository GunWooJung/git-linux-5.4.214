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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x457b789e, "fw_iso_context_flush_completions" },
	{ 0xa942e96a, "bpf_trace_run7" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa8e6c125, "snd_pcm_hw_constraint_msbits" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x78d38ba1, "snd_pcm_stop_xrun" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9255eff7, "fw_iso_context_start" },
	{ 0x95523e25, "fw_iso_context_queue_flush" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x534c04, "fw_iso_resource_manage" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x86468d44, "fw_rcode_string" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x3a35e172, "fw_iso_buffer_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe3f0d416, "fw_iso_context_queue" },
	{ 0x2c6e5e2c, "snd_pcm_hw_rule_add" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0x830adb64, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xfa2dfe94, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x510199b2, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dd2ca1a, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0x47969e1d, "fw_iso_buffer_init" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0x187828b1, "fw_run_transaction" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0x14472564, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-pcm,snd-rawmidi");


MODULE_INFO(srcversion, "5A8F922FCFD22DE37DF5BAC");
