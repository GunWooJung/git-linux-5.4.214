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
	{ 0xf3f2f98d, "fcoe_fcf_get_selected" },
	{ 0x5e800e6d, "fcoe_ctlr_get_lesb" },
	{ 0x9c91b7a9, "fcoe_get_lesb" },
	{ 0xbd2dbb25, "fc_lport_bsg_request" },
	{ 0x4a14540f, "fc_rport_terminate_io" },
	{ 0xa003b2d8, "fc_get_host_stats" },
	{ 0xeb066ade, "fc_get_host_speed" },
	{ 0xc6bf8f6d, "fc_get_host_port_state" },
	{ 0x23bf8ffd, "fc_set_rport_loss_tmo" },
	{ 0xfd4d4661, "fc_eh_timed_out" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x76ac44f9, "fc_slave_alloc" },
	{ 0xa07a91fc, "fc_eh_host_reset" },
	{ 0xb19a187a, "fc_eh_device_reset" },
	{ 0x693cd3da, "fc_eh_abort" },
	{ 0xd46e25f2, "fc_queuecommand" },
	{ 0x65d3f8cf, "fcoe_transport_detach" },
	{ 0x75942744, "__put_page" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9b33e0d7, "unregister_dcbevent_notifier" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4f46dbf7, "fc_release_transport" },
	{ 0x71cf52c6, "fc_attach_transport" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x93b3fc74, "register_dcbevent_notifier" },
	{ 0xaa7cce99, "fcoe_transport_attach" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x500ced09, "fcoe_fc_crc" },
	{ 0x970eaabc, "fcoe_ctlr_els_send" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb0e16f5, "fcoe_get_paged_crc_eof" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd523d85d, "skb_push" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf629ae21, "fcoe_check_wait_queue" },
	{ 0x73c9f243, "fcoe_start_io" },
	{ 0xf167cb7a, "fcoe_wwn_to_str" },
	{ 0x92eab6c5, "fcoe_validate_vport_create" },
	{ 0x39fc7611, "dcb_getapp" },
	{ 0x8be8b136, "dcb_ieee_getapp_mask" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0xc19741e2, "fcoe_ctlr_init" },
	{ 0xbced34e2, "fcoe_ctlr_device_add" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xf5a4d3c9, "fc_exch_mgr_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc3f30cc0, "fcoe_wwn_from_mac" },
	{ 0xbd7181d1, "fc_exch_mgr_list_clone" },
	{ 0x39499a89, "fc_exch_mgr_alloc" },
	{ 0xf5de7cfd, "fcoe_get_wwn" },
	{ 0x8e4abfeb, "fcoe_libfc_config" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbac58840, "fcoe_queue_timer" },
	{ 0x2344d525, "fc_lport_config" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd85b583d, "libfc_vport_create" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xad263612, "consume_skb" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa1bcd198, "fc_cpu_mask" },
	{ 0x56dc864f, "fc_set_mfs" },
	{ 0x3aa0327c, "fcoe_link_speed_update" },
	{ 0x5cd160d3, "fcoe_ctlr_device_delete" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xd7fbb11d, "fc_exch_mgr_free" },
	{ 0xebace43e, "fc_fcp_destroy" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x9b67b4a0, "fc_remove_host" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6accc2f4, "fc_lport_destroy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfb6a1517, "fc_frame_alloc_fill" },
	{ 0x7d0b231b, "_fc_frame_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3867fe81, "fc_vport_setlink" },
	{ 0xf88bf845, "fc_fabric_login" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f23670a, "fc_fabric_logoff" },
	{ 0x6d88f1e3, "vlan_dev_real_dev" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0x721c9d1f, "init_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xbd2c7c18, "__dev_remove_pack" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb7e82215, "fc_lport_flogi_resp" },
	{ 0x4f5911b2, "fc_lport_logo_resp" },
	{ 0x553d03ff, "fc_elsct_send" },
	{ 0x70399be, "fcoe_ctlr_recv_flogi" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xb49eb205, "fcoe_ctlr_destroy" },
	{ 0x461e4adb, "fcoe_ctlr_recv" },
	{ 0x865f6311, "dev_mc_add" },
	{ 0xd5e2ee54, "dev_mc_del" },
	{ 0x34869d03, "fcoe_ctlr_set_fip_mode" },
	{ 0xd3a0eec8, "vlan_dev_vlan_id" },
	{ 0x389214e7, "dev_uc_add" },
	{ 0x6b2f99a2, "dev_uc_del" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1199fae, "fcoe_ctlr_link_up" },
	{ 0xff2ea4d9, "fcoe_clean_pending_queue" },
	{ 0x3f207b60, "fcoe_ctlr_link_down" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x61bc102c, "fc_exch_recv" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libfcoe,libfc,scsi_transport_fc");


MODULE_INFO(srcversion, "EA405A30C58ECED71AE901A");
