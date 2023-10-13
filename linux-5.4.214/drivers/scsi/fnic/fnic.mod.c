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
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x70399be, "fcoe_ctlr_recv_flogi" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x970eaabc, "fcoe_ctlr_els_send" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbd2dbb25, "fc_lport_bsg_request" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc32d0a02, "scsi_is_fc_rport" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x8e4abfeb, "fcoe_libfc_config" },
	{ 0x1199fae, "fcoe_ctlr_link_up" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x461e4adb, "fcoe_ctlr_recv" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x4d2f8209, "blk_mq_tag_to_rq" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x21240d67, "fc_exch_mgr_reset" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x661601de, "sprint_symbol" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd7fbb11d, "fc_exch_mgr_free" },
	{ 0xfb578fc5, "memset" },
	{ 0x6accc2f4, "fc_lport_destroy" },
	{ 0xf10de535, "ioread8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3f207b60, "fcoe_ctlr_link_down" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x56dc864f, "fc_set_mfs" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x61bc102c, "fc_exch_recv" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe432126e, "blk_mq_alloc_request" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xd0e8300e, "fixed_size_llseek" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd523d85d, "skb_push" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5f23670a, "fc_fabric_logoff" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x32ee9868, "simple_open" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x12f4028, "fc_lport_reset" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4f46dbf7, "fc_release_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3d7c8e90, "blk_mq_free_request" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xb49eb205, "fcoe_ctlr_destroy" },
	{ 0x1953c958, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa54000ab, "fc_block_scsi_eh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xfd4d4661, "fc_eh_timed_out" },
	{ 0x2344d525, "fc_lport_config" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x39499a89, "fc_exch_mgr_alloc" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9b67b4a0, "fc_remove_host" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf88bf845, "fc_fabric_login" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6bf8f6d, "fc_get_host_port_state" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xad263612, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x71cf52c6, "fc_attach_transport" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0xc19741e2, "fcoe_ctlr_init" },
};

MODULE_INFO(depends, "libfcoe,libfc,scsi_transport_fc");

MODULE_ALIAS("pci:v00001137d00000045sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "31645E448A6CF2694B1BA10");