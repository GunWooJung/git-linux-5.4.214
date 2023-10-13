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
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x23a77175, "napi_disable" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5561600b, "dev_close" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0xedc03953, "iounmap" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xad263612, "consume_skb" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8b30e894, "acpi_device_hid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C02:*");

MODULE_INFO(srcversion, "2B89792FBD89146C116A8D6");
