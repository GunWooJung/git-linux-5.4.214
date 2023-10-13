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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x9edf6a30, "scsi_track_queue_full" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x5094ac27, "pcie_set_readrq" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc32d0a02, "scsi_is_fc_rport" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x999e8297, "vfree" },
	{ 0x2711f1c0, "pcie_get_readrq" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x568d721e, "fc_vport_terminate" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd0e8300e, "fixed_size_llseek" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x65517eef, "fc_remote_port_rolechg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9643decf, "fc_vport_create" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x727739ea, "fc_host_post_vendor_event" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x4f46dbf7, "fc_release_transport" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d756705, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfd4d4661, "fc_eh_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9b67b4a0, "fc_remove_host" },
	{ 0x80500894, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x21c6c379, "fc_remote_port_add" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x71cf52c6, "fc_attach_transport" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_fc");

MODULE_ALIAS("pci:v00001657d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000014sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000021sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000022sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000023sv*sd*bc0Csc04i00*");

MODULE_INFO(srcversion, "48B0FFEB37319448FA2E329");
