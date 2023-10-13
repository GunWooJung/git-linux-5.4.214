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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7e2998e7, "typec_set_pwr_role" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf1b229c3, "typec_unregister_altmode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x849c8990, "typec_register_port" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0xda0a9c4c, "typec_unregister_port" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xca5f146a, "typec_altmode_vdm" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7f5d4f6a, "typec_altmode_update_active" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0x9cad8da6, "typec_unregister_partner" },
	{ 0xbb7497fa, "typec_partner_register_altmode" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5c5da513, "typec_altmode_get_partner" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xc3c55962, "typec_port_register_altmode" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9a00a11c, "typec_register_partner" },
	{ 0x51bd55b5, "completion_done" },
};

MODULE_INFO(depends, "typec");


MODULE_INFO(srcversion, "375CBAA5ACFACD8553AAA70");
