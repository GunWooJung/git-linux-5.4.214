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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x388276e0, "ata_sas_port_stop" },
	{ 0xa873106e, "ata_sas_port_start" },
	{ 0xa3f1a802, "ata_noop_qc_prep" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x42800177, "ata_host_init" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x77bc13a0, "strim" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x6a03751f, "sgl_free_order" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xeb9e913d, "sgl_alloc_order" },
	{ 0x80500894, "request_firmware" },
	{ 0x349cba85, "strchr" },
	{ 0x7f3f0446, "ata_sas_port_destroy" },
	{ 0x9b493ba3, "scsi_report_device_reset" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xaf16f086, "ata_std_error_handler" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x15af7f4, "system_state" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc6cbbc89, "capable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe4fb1215, "ata_sas_port_alloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xd32e6e73, "ata_sas_slave_configure" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x5f3d4f66, "blk_queue_rq_timeout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd13ad021, "pci_set_pcie_reset_state" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0xbacd3b42, "scsi_device_get" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8a1d9cf, "ata_sas_scsi_ioctl" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x99fbebe2, "ata_sas_queuecmd" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x5323d02c, "ata_sas_sync_probe" },
	{ 0xcdaafa84, "ata_sas_port_init" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x754d539c, "strlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd2db26d7, "pci_cfg_access_unlock" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x87b8798d, "sg_next" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x29361773, "complete" },
	{ 0xf839138c, "ata_qc_complete" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x2164f421, "pci_cfg_access_trylock" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x53632dee, "scsi_report_bus_reset" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000266bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000278bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D4bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002BEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002C0bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000030Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000030Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000033Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000035Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd00000360bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000180sv00001014sd00000264bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002BFbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002D5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002C3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000033Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000356bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000035Fbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000352bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000353bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000354bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000033Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000355bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000357bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Ebc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FBbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FFbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000046Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004CAbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000474bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000475bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000499bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C7bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C8bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C9bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FBbc*sc*i*");

MODULE_INFO(srcversion, "4F0458735EAF41F57C5CA32");
