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
	{ 0xf1e73a39, "iscsi_eh_session_reset" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0xe1e76060, "iscsi_host_remove" },
	{ 0x21f6eefa, "iscsi_boot_create_target" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd6c42a55, "__iscsi_put_task" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x3794e54e, "iscsi_queuecommand" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x26c53b85, "iscsi_conn_stop" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9551809a, "iscsi_unregister_transport" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x1343058e, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x20a57515, "iscsi_host_add" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6ab8a6c9, "iscsi_host_alloc" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0xef735d71, "iscsi_lookup_endpoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdee8133b, "iscsi_conn_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1077b04c, "iscsi_boot_create_ethernet" },
	{ 0x36be89e8, "iscsi_conn_send_pdu" },
	{ 0x8cdb4c5e, "iscsi_session_get_param" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0xaf9b0ece, "iscsi_conn_teardown" },
	{ 0x542dfa62, "iscsi_put_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xab8926d2, "iscsi_host_free" },
	{ 0x5ae80418, "iscsi_complete_scsi_task" },
	{ 0xc809c147, "iscsi_conn_get_param" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5c579670, "iscsi_destroy_endpoint" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x913774ba, "iscsi_boot_create_host_kset" },
	{ 0x9279ff47, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x5a91f248, "iscsi_session_failure" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6b6ac946, "scsi_host_get" },
	{ 0xf633b374, "__iscsi_get_task" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x38c97622, "iscsi_register_transport" },
	{ 0xf4ae3b36, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8891bb40, "iscsi_conn_failure" },
	{ 0x7d92698e, "iscsi_destroy_iface" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20c430f8, "iscsi_eh_cmd_timed_out" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x84834e9e, "iscsi_suspend_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0x6f6bac3f, "iscsi_create_endpoint" },
	{ 0xee72f1bc, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e961b3b, "iscsi_create_iface" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xca819e03, "iscsi_boot_create_initiator" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf1ed9eb1, "iscsi_session_setup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbf463a3, "iscsi_host_get_param" },
	{ 0x56a525e3, "iscsi_conn_bind" },
	{ 0x972cc0f, "__iscsi_complete_pdu" },
	{ 0xf7e00959, "iscsi_target_alloc" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x140b2336, "iscsi_get_port_speed_name" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x19ba7f74, "iscsi_session_recovery_timedout" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xbac1dbb6, "iscsi_conn_setup" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xa67be39f, "iscsi_host_for_each_session" },
	{ 0x2a8de54c, "iscsi_get_port_state_name" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xbf1cda49, "iscsi_boot_destroy_kset" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "libiscsi,iscsi_boot_sysfs,scsi_transport_iscsi");

MODULE_ALIAS("pci:v000019A2d00000212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000222sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000722sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "47767EF26D1EEB1389ECA43");
