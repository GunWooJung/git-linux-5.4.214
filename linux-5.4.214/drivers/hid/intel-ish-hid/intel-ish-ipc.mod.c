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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x68eaa423, "pci_reset_function" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x9478e241, "ishtp_reset_handler" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xea3a9488, "ishtp_start" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x1c5a712c, "ishtp_reset_compl_handler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8e8110f0, "ishtp_recv" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa4094281, "ishtp_bus_remove_all_clients" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x221fbcae, "ishtp_send_suspend" },
	{ 0x780bd201, "ishtp_send_resume" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xab2b8bae, "ishtp_device_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "intel-ishtp");

MODULE_ALIAS("pci:v00008086d000022D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D35sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A37Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A135sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3C1B9A7CF926D9A14530592");
