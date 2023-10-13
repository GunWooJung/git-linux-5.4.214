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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0x677a404b, "amdtp_stream_pcm_pointer" },
	{ 0xf395cbe4, "fw_iso_resources_update" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa8e6c125, "snd_pcm_hw_constraint_msbits" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0x30dc27a1, "fw_iso_resources_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcc1a94ce, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x77e247bd, "amdtp_stream_get_max_payload" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6a645132, "amdtp_domain_add_stream" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0xfab7e0a5, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xf153cd95, "amdtp_stream_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa9225458, "snd_hwdep_new" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x9f149630, "amdtp_domain_stop" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1d794007, "fw_iso_resources_destroy" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2c6e5e2c, "snd_pcm_hw_rule_add" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0x35b57060, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xab8175f1, "amdtp_stream_pcm_prepare" },
	{ 0x830adb64, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff5e8f0, "snd_pcm_set_sync" },
	{ 0xc87a9506, "fw_iso_resources_allocate" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1eb62710, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x510199b2, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xc9e83e7, "amdtp_stream_set_parameters" },
	{ 0x25a23c52, "amdtp_stream_init" },
	{ 0x579f4634, "snd_fw_schedule_registration" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x820ae577, "amdtp_stream_add_pcm_hw_constraints" },
	{ 0xb9882e19, "snd_pcm_limit_hw_rates" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xff3bd408, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x2c720061, "snd_fw_transaction" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0x90344add, "fw_iso_resources_free" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x85f487f5, "fw_send_response" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd-pcm,snd,snd-rawmidi,snd-hwdep");

MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000003*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000009*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver0000000F*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000015*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000035*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000033*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000045*");

MODULE_INFO(srcversion, "03F9FBB24485BB2E07829C9");
