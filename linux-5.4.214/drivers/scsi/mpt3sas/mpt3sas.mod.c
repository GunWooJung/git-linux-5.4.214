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
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7e199ab7, "scsi_remove_target" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x7c18f158, "sas_release_transport" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x879724cb, "param_get_int" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x1888db60, "pci_irq_get_affinity" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfe2bea53, "sas_is_tlr_enabled" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x3951baa9, "pci_stop_and_remove_bus_device_locked" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xae9dbc5f, "sas_phy_add" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0x7bf3a86a, "sas_disable_tlr" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb4b78d35, "sas_port_add_phy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4d2f8209, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9074dd1f, "sas_port_delete_phy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x50d4a390, "param_set_int" },
	{ 0xe9f30502, "sas_rphy_add" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb0d97e9b, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xb83f306e, "scsi_print_command" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0xd1b98941, "sas_port_delete" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x9da8afc8, "scsi_host_busy" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x38b5452a, "dma_get_required_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x64f6bf38, "scsi_internal_device_block_nowait" },
	{ 0x9c9d7296, "raid_class_release" },
	{ 0xedf7703f, "sas_attach_transport" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x351e7a5f, "sas_expander_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbbbfb7b9, "sas_read_port_mode_page" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xa9e26a7a, "sas_end_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf1e046cc, "panic" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x419892d3, "fasync_helper" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0xd673be15, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb4f6243e, "sas_port_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x44c2f323, "raid_class_attach" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0xc3527125, "attribute_container_find_class_device" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0x51221720, "sas_phy_free" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x87bd903f, "pci_disable_link_state" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9cf23d91, "starget_for_each_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7f7c7415, "device_reprobe" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0xed8da4e6, "scsi_device_set_state" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xc9f6f0f4, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5d8ca292, "pci_cfg_access_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x67d1160d, "sas_remove_host" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x8e6f72d1, "scsi_internal_device_unblock_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe6270791, "sas_port_alloc_num" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7dec0c23, "scsi_get_vpd_page" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xde793eab, "kill_fasync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x731cdee3, "pci_release_selected_regions" },
	{ 0x2ca6d6fe, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0xd2db26d7, "pci_cfg_access_unlock" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x35775925, "misc_deregister" },
	{ 0x54fdd30c, "sas_enable_tlr" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xbf367777, "param_ops_ullong" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_sas,raid_class");

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FC22E08BE86C0F45FEAD343");
