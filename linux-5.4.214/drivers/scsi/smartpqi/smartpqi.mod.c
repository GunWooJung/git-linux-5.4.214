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
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x7c18f158, "sas_release_transport" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0x92377f, "sas_port_free" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xae9dbc5f, "sas_phy_add" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xb4b78d35, "sas_port_add_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x168babb5, "pcie_capability_clear_and_set_word" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9074dd1f, "sas_port_delete_phy" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xe9f30502, "sas_rphy_add" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd1b98941, "sas_port_delete" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeb18acd9, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xedf7703f, "sas_attach_transport" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x351e7a5f, "sas_expander_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa9e26a7a, "sas_end_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb4f6243e, "sas_port_add" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9aec9372, "sas_phy_delete" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x618911fc, "numa_node" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x9d618faf, "blk_mq_pci_map_queues" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xc9f6f0f4, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xe6270791, "sas_port_alloc_num" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xcf2a6966, "up" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_sas");

MODULE_ALIAS("pci:v00009005d0000028Fsv0000105Bsd00001211bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000105Bsd00001321bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A22bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A23bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A24bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A36bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000152Dsd00008A37bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001104bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001105bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001106bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00001107bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd00008461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000C460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000C461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000F460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000193Dsd0000F461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000045bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000046bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000047bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000048bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd0000004Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000051bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000052bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000053bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001BD4sd00000054bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D227bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D228bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D229bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000019E5sd0000D22Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000110bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000608bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000801bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000802bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000803bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000804bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000805bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000806bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000807bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000809bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000900bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000901bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000902bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000903bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000904bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000905bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000906bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000907bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00000908bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd0000090Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001200bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001201bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001202bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001280bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001281bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001282bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001300bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001301bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001302bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001303bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001380bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001400bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001402bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001410bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001411bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001412bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001420bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001430bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001440bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001441bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001450bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001452bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001460bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001461bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001462bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001470bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001471bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001472bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001480bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001490bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd00001491bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014A0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014A1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014B0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014B1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014C0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014C1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014D0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014E0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00009005sd000014F0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv000013FEsd00008312bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001028sd00001FE0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000601bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000602bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000603bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000609bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000650bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000651bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000652bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000653bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000654bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000655bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000700bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00000701bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001001bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001002bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv0000103Csd00001101bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001590sd00000294bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001590sd000002DBbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001590sd000002DCbc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001590sd0000032Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001D8Dsd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001D8Dsd00000908bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001D8Dsd00000806bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001D8Dsd00000916bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv00001458sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "119120BD3C1777BFCA6E767");
