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
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x7c18f158, "sas_release_transport" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xedf7703f, "sas_attach_transport" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xc5850110, "printk" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x6b6ac946, "scsi_host_get" },
	{ 0xb4b78d35, "sas_port_add_phy" },
	{ 0xae9dbc5f, "sas_phy_add" },
	{ 0xc9f6f0f4, "sas_phy_alloc" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0xe9f30502, "sas_rphy_add" },
	{ 0xa9e26a7a, "sas_end_device_alloc" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb83f306e, "scsi_print_command" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x29361773, "complete" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x92377f, "sas_port_free" },
	{ 0xb4f6243e, "sas_port_add" },
	{ 0xe6270791, "sas_port_alloc_num" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x1888db60, "pci_irq_get_affinity" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x87bd903f, "pci_disable_link_state" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd1b98941, "sas_port_delete" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9aec9372, "sas_phy_delete" },
	{ 0x9074dd1f, "sas_port_delete_phy" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5f3d4f66, "blk_queue_rq_timeout" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x96848186, "scnprintf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfb578fc5, "memset" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "scsi_transport_sas");

MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003241bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003243bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003245bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003247bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003249bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Abc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Bbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003233bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003350bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003351bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003352bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003353bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003354bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003355bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003356bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001920bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001921bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001922bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001923bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001924bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001925bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001926bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001928bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001929bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BEbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BFbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C0bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C1bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C2bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C3bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C4bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C5bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C6bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C7bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C8bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C9bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CAbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CBbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CCbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CEbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000581bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000582bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000583bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000584bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000585bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000076bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000087bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd0000007Dbc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000088bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000333Fsv0000103Csd0000333Fbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd*sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00000E11d*sv*sd*bc01sc04i*");

MODULE_INFO(srcversion, "F08382A4862662036893A09");
