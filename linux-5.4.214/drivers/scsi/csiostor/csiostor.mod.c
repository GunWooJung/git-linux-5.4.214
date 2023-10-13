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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x76af1d0e, "_dev_crit" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc32d0a02, "scsi_is_fc_rport" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x168babb5, "pcie_capability_clear_and_set_word" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc2448345, "default_llseek" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8c830f67, "debugfs_create_file_size" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x568d721e, "fc_vport_terminate" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x36db4b6, "blk_mq_rq_cpu" },
	{ 0x65517eef, "fc_remote_port_rolechg" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x18c66278, "init_uts_ns" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x32ee9868, "simple_open" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x4f46dbf7, "fc_release_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xf44843c3, "pcie_relaxed_ordering_enabled" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d756705, "fc_remote_port_delete" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1953c958, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa54000ab, "fc_block_scsi_eh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xfd4d4661, "fc_eh_timed_out" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9b67b4a0, "fc_remove_host" },
	{ 0x80500894, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x21c6c379, "fc_remote_port_add" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x731cdee3, "pci_release_selected_regions" },
	{ 0x2ca6d6fe, "pci_request_selected_regions" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x71cf52c6, "fc_attach_transport" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_fc");

MODULE_ALIAS("pci:v00001425d00004600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005613sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005616sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005617sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005618sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005619sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000561Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000561Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005695sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005697sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000660Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000668Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000668Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006692sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "70C439D30A2046C8C2DFE99");
