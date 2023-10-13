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
	{ 0x20c430f8, "iscsi_eh_cmd_timed_out" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xf7e00959, "iscsi_target_alloc" },
	{ 0xa42abdf9, "iscsi_eh_recover_target" },
	{ 0xf4ae3b36, "iscsi_eh_device_reset" },
	{ 0xee72f1bc, "iscsi_eh_abort" },
	{ 0x3794e54e, "iscsi_queuecommand" },
	{ 0x19ba7f74, "iscsi_session_recovery_timedout" },
	{ 0x4fcbfaa6, "iscsi_tcp_cleanup_task" },
	{ 0x4ff10c47, "iscsi_tcp_task_xmit" },
	{ 0x33bbff30, "iscsi_tcp_task_init" },
	{ 0x36be89e8, "iscsi_conn_send_pdu" },
	{ 0x7a46b404, "iscsi_host_set_param" },
	{ 0x8cdb4c5e, "iscsi_session_get_param" },
	{ 0xdee8133b, "iscsi_conn_start" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x9551809a, "iscsi_unregister_transport" },
	{ 0x38c97622, "iscsi_register_transport" },
	{ 0x26c53b85, "iscsi_conn_stop" },
	{ 0x3c5ad033, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x285c8d25, "sk_free" },
	{ 0x3d9ea128, "iscsi_tcp_conn_teardown" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
	{ 0x1f584711, "iscsi_tcp_conn_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd4697d5b, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0x86c05293, "blk_queue_dma_alignment" },
	{ 0xc5850110, "printk" },
	{ 0xdbc1eea4, "iscsi_tcp_r2tpool_alloc" },
	{ 0xf1ed9eb1, "iscsi_session_setup" },
	{ 0x20a57515, "iscsi_host_add" },
	{ 0x6ab8a6c9, "iscsi_host_alloc" },
	{ 0xab8926d2, "iscsi_host_free" },
	{ 0xe1e76060, "iscsi_host_remove" },
	{ 0x1343058e, "iscsi_session_teardown" },
	{ 0x906f19e8, "iscsi_tcp_r2tpool_free" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0xa6195a97, "iscsi_tcp_recv_skb" },
	{ 0x74f800cc, "tcp_read_sock" },
	{ 0xbe339589, "iscsi_conn_queue_work" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xca669996, "fput" },
	{ 0xcd85a7da, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x5f927e7, "sk_set_memalloc" },
	{ 0x56a525e3, "iscsi_conn_bind" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x400d530, "iscsi_tcp_set_max_r2t" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0x9279ff47, "iscsi_set_param" },
	{ 0xbb058e64, "kernel_getpeername" },
	{ 0xc809c147, "iscsi_conn_get_param" },
	{ 0xbf463a3, "iscsi_host_get_param" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x71ce1069, "kernel_getsockname" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x135dac90, "iscsi_tcp_conn_get_stats" },
	{ 0x8891bb40, "iscsi_conn_failure" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x417a457, "iscsi_tcp_segment_unmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb36fe7d0, "iscsi_tcp_segment_done" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x696c455c, "iscsi_tcp_dgst_header" },
	{ 0xae80cfe6, "iscsi_segment_seek_sg" },
	{ 0x925425c4, "iscsi_segment_init_linear" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x2383c145, "iscsi_dbg_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libiscsi_tcp,scsi_transport_iscsi");


MODULE_INFO(srcversion, "DFE21E5C399272844F7907E");
