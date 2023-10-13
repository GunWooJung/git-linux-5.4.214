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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5cab9945, "unregister_xenbus_watch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x1ea8def5, "xenbus_map_ring_valloc" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xe2569725, "device_release_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x870e16b7, "xen_test_irq_shared" },
	{ 0x10b55bd8, "xenbus_dev_is_online" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0xb46f84ef, "pci_load_and_free_saved_state" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbf975ac, "xenbus_unmap_ring_vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x6005eb04, "xenbus_watch_path" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3874d8d8, "pci_store_saved_state" },
	{ 0xf23ce906, "__xenbus_register_backend" },
	{ 0x3090cb05, "bind_interdomain_evtchn_to_irqhandler_lateeoi" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7514cd74, "xenbus_unregister_driver" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0x8eb51ba4, "xen_register_device_domain_owner" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xe82a8543, "xen_find_device_domain_owner" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3559fcf8, "pci_load_saved_state" },
	{ 0xce807a25, "up_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xef341870, "__pci_reset_function_locked" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0xa452f2a4, "xen_pirq_from_irq" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x319010b4, "pci_set_mwi" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7b3af4d3, "bus_register_notifier" },
	{ 0x987c8118, "xen_unregister_device_domain_owner" },
	{ 0x4c99581b, "driver_create_file" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x587138e0, "xenbus_switch_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x34acb3f8, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x75362760, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x32302331, "driver_remove_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x51086da0, "bus_unregister_notifier" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8D4B458F3131D791E8BEF85");
