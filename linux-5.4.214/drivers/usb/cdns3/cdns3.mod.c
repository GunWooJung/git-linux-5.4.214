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
	{ 0x3b57f4f2, "phy_init" },
	{ 0x948ea8a, "usb_gadget_unmap_request_by_dev" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xbc2a14e3, "usb_gadget_map_request_by_dev" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x28ce094c, "device_property_read_u16_array" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x54ad8e0f, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf4b1bd78, "usb_gadget_set_state" },
	{ 0x42789434, "usb_role_switch_register" },
	{ 0x4cd53649, "phy_power_off" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x981f5dd3, "usb_gadget_udc_reset" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0xe27a5479, "phy_power_on" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x3cb5a03, "phy_reset" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6275bdb0, "phy_exit" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x3a2c5055, "usb_get_maximum_speed" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x366ab9b2, "usb_get_dr_mode" },
	{ 0x4531624f, "usb_decode_ctrl" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0xe914e41e, "strcpy" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "6EE0CB3C78EACE81B4DFAAA");
