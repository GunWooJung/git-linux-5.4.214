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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x20c430f8, "iscsi_eh_cmd_timed_out" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xf7e00959, "iscsi_target_alloc" },
	{ 0xa42abdf9, "iscsi_eh_recover_target" },
	{ 0xf4ae3b36, "iscsi_eh_device_reset" },
	{ 0xee72f1bc, "iscsi_eh_abort" },
	{ 0x3794e54e, "iscsi_queuecommand" },
	{ 0xef346615, "cxgbi_attr_is_visible" },
	{ 0xd3805988, "cxgbi_ep_disconnect" },
	{ 0x868b91db, "cxgbi_ep_poll" },
	{ 0x7d9853e4, "cxgbi_ep_connect" },
	{ 0x19ba7f74, "iscsi_session_recovery_timedout" },
	{ 0xcf5304ea, "cxgbi_parse_pdu_itt" },
	{ 0x150d6123, "cxgbi_conn_init_pdu" },
	{ 0x760f2630, "cxgbi_conn_xmit_pdu" },
	{ 0xbef7b353, "cxgbi_conn_alloc_pdu" },
	{ 0x216c2f1d, "cxgbi_cleanup_task" },
	{ 0x4ff10c47, "iscsi_tcp_task_xmit" },
	{ 0x33bbff30, "iscsi_tcp_task_init" },
	{ 0x2202cff6, "cxgbi_get_conn_stats" },
	{ 0x36be89e8, "iscsi_conn_send_pdu" },
	{ 0xf9311adb, "cxgbi_set_host_param" },
	{ 0x7d73c03f, "cxgbi_get_host_param" },
	{ 0x8cdb4c5e, "iscsi_session_get_param" },
	{ 0xc809c147, "iscsi_conn_get_param" },
	{ 0xd937069, "cxgbi_get_ep_param" },
	{ 0x3fae7a6d, "cxgbi_set_conn_param" },
	{ 0x3d9ea128, "iscsi_tcp_conn_teardown" },
	{ 0x26c53b85, "iscsi_conn_stop" },
	{ 0xdee8133b, "iscsi_conn_start" },
	{ 0x5e2db33e, "cxgbi_bind_conn" },
	{ 0x22756db3, "cxgbi_create_conn" },
	{ 0x44a0f124, "cxgbi_destroy_session" },
	{ 0x24673e7d, "cxgbi_create_session" },
	{ 0x897ca217, "cxgbi_iscsi_cleanup" },
	{ 0x7fdb6004, "cxgbi_device_unregister_all" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0x9b33e0d7, "unregister_dcbevent_notifier" },
	{ 0x93b3fc74, "register_dcbevent_notifier" },
	{ 0x685b2c94, "cxgb4_register_uld" },
	{ 0x46b8ee5d, "cxgbi_iscsi_init" },
	{ 0x85c62e32, "cxgbi_conn_tx_open" },
	{ 0x6b061cf8, "cxgbi_sock_established" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xbdec7b41, "cxgbi_conn_pdu_ready" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x39fc7611, "dcb_getapp" },
	{ 0x8be8b136, "dcb_ieee_getapp_mask" },
	{ 0xf7f0b797, "cxgb4_clip_get" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x7f18313d, "__neigh_event_send" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x156ba327, "cxgb4_port_idx" },
	{ 0xab4a891c, "cxgb4_port_chan" },
	{ 0xd69a0294, "cxgb4_best_mtu" },
	{ 0x1f181c56, "cxgb4_l2t_get" },
	{ 0x6ce78a56, "cxgb4_alloc_atid" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x4d520a85, "cxgb4_pktgl_to_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x90dd6a60, "cxgbi_sock_act_open_req_arp_failure" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc177adf8, "cxgbi_sock_closed" },
	{ 0x2d0b30c6, "cxgb4_clip_release" },
	{ 0xcc049297, "cxgb4_free_atid" },
	{ 0x892d715e, "cxgb4_l2t_release" },
	{ 0x2227a3bb, "cxgbi_sock_purge_wr_queue" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4945ef7d, "cxgbi_sock_free_cpl_skbs" },
	{ 0x37a0cba, "kfree" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x44e3be47, "cxgb4_remove_tid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd921a494, "cxgbi_sock_fail_act_open" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xe27a17cf, "cxgbi_sock_skb_entail" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc011af75, "cxgbi_ddp_set_one_ppod" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xef45a625, "cxgbi_hbas_add" },
	{ 0x96c091a1, "cxgbi_device_portmap_create" },
	{ 0x42671717, "cxgbi_ddp_ppm_setup" },
	{ 0x508e9d6c, "cxgbi_device_register" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x9f83b559, "cxgb4_l2t_send" },
	{ 0xfcf3bd64, "cxgb4_select_ntuple" },
	{ 0x4e8a1d69, "cxgbi_sock_rcv_peer_close" },
	{ 0xb8e2d4a9, "cxgbi_sock_rcv_abort_rpl" },
	{ 0x3232dc9e, "cxgbi_sock_rcv_close_conn_rpl" },
	{ 0x29361773, "complete" },
	{ 0xaa572613, "cxgb4_ofld_send" },
	{ 0x7e54b886, "__kfree_skb" },
	{ 0xcc640e5d, "cxgbi_sock_rcv_wr_ack" },
	{ 0x8891bb40, "iscsi_conn_failure" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb79da423, "cxgbi_device_find_by_netdev_rcu" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0x721c9d1f, "init_net" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc036650c, "cxgbi_device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libcxgbi,libiscsi_tcp,cxgb4");


MODULE_INFO(srcversion, "82CDF75609BC718E02EA00F");
