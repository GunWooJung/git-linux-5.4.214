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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x1c30f94b, "fc_exch_init" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0x992e03d0, "qed_put_fcoe_ops" },
	{ 0x970eaabc, "fcoe_ctlr_els_send" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x7ee415d5, "single_open" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x31826297, "fc_rport_create" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xbd2dbb25, "fc_lport_bsg_request" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xc32d0a02, "scsi_is_fc_rport" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8e4abfeb, "fcoe_libfc_config" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x1199fae, "fcoe_ctlr_link_up" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x461e4adb, "fcoe_ctlr_recv" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc3f30cc0, "fcoe_wwn_from_mac" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xd85b583d, "libfc_vport_create" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x2be543d8, "fc_disc_config" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0xb7e82215, "fc_lport_flogi_resp" },
	{ 0xd7fbb11d, "fc_exch_mgr_free" },
	{ 0xfb578fc5, "memset" },
	{ 0x6accc2f4, "fc_lport_destroy" },
	{ 0xdf16a149, "fc_elsct_init" },
	{ 0xa4c1114d, "fc_vport_id_lookup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7d0b231b, "_fc_frame_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x3f207b60, "fcoe_ctlr_link_down" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x56dc864f, "fc_set_mfs" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x61bc102c, "fc_exch_recv" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xa003b2d8, "fc_get_host_stats" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd523d85d, "skb_push" },
	{ 0x23bf8ffd, "fc_set_rport_loss_tmo" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5f23670a, "fc_fabric_logoff" },
	{ 0xfb6a1517, "fc_frame_alloc_fill" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x553d03ff, "fc_elsct_send" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x32ee9868, "simple_open" },
	{ 0xf167cb7a, "fcoe_wwn_to_str" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xeb066ade, "fc_get_host_speed" },
	{ 0x2b4d03e0, "kobject_uevent_env" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x4f46dbf7, "fc_release_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x92eab6c5, "fcoe_validate_vport_create" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xb49eb205, "fcoe_ctlr_destroy" },
	{ 0x1953c958, "mempool_create" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xa54000ab, "fc_block_scsi_eh" },
	{ 0x8735ed3d, "irq_set_affinity_notifier" },
	{ 0x500ced09, "fcoe_fc_crc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb8cd8f3b, "fc_rport_login" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc93cd2d1, "fc_disc_init" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x5d81b6ec, "qed_get_fcoe_ops" },
	{ 0x2344d525, "fc_lport_config" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x48ca5d15, "fc_rport_logoff" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0x39499a89, "fc_exch_mgr_alloc" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0x3867fe81, "fc_vport_setlink" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9b67b4a0, "fc_remove_host" },
	{ 0x96848186, "scnprintf" },
	{ 0xbd7181d1, "fc_exch_mgr_list_clone" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf88bf845, "fc_fabric_login" },
	{ 0x9d50ed7e, "fc_rport_destroy" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6bf8f6d, "fc_get_host_port_state" },
	{ 0xb0e602eb, "memmove" },
	{ 0x14c07790, "fc_lport_init" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xea1cf29d, "pci_find_ext_capability" },
	{ 0x71cf52c6, "fc_attach_transport" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xbb0e16f5, "fcoe_get_paged_crc_eof" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9961ebe9, "fc_rport_lookup" },
	{ 0xc19741e2, "fcoe_ctlr_init" },
};

MODULE_INFO(depends, "libfc,qed,libfcoe,scsi_transport_fc");

MODULE_ALIAS("pci:v00001077d0000165Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00008080sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8EFE420550F71D1E8589FCA");
