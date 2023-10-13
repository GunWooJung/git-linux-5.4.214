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
	{ 0xa0554d18, "release_sock" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9918f0f0, "__vsock_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc79d5ef, "vm_sockets_get_local_cid" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4fba681a, "vsock_stream_has_space" },
	{ 0x9b7f1006, "vsock_core_get_transport" },
	{ 0xea4e6879, "bpf_trace_run10" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xcaf2003f, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xcfb288d0, "vsock_stream_has_data" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x285c8d25, "sk_free" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xe2cec605, "vsock_find_bound_socket" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xd1573c4b, "bpf_trace_run8" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xef32fd01, "vsock_deliver_tap" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2e584d3, "vsock_remove_sock" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x321adc62, "vsock_insert_connected" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3d2ee2bf, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "C91B6B7C2D9DFA78AD727FD");
