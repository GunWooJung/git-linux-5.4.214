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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xa0554d18, "release_sock" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0xb67ea190, "rds_trans_register" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0xbdebdea1, "sock_create_lite" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfe6032, "ipv6_chk_addr" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x3a312232, "rds_conn_path_drop" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8629086e, "sock_release" },
	{ 0xaf49545b, "rds_inc_path_init" },
	{ 0x36087aa4, "rds_stats" },
	{ 0x2b2aaa97, "rds_send_ping" },
	{ 0x70b8e2f0, "rds_conn_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdbcda658, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x55ba70cc, "rds_recv_incoming" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9c5412bb, "kernel_setsockopt" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xf4e3d33c, "rds_connect_path_complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xe3a50fab, "pskb_extract" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa6756f58, "inet_addr_type" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x41ae16e, "rds_info_register_func" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdbf3d04e, "rds_inc_put" },
	{ 0x85e4e520, "rds_stats_info_copy" },
	{ 0xc2dab779, "rds_info_copy" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0x214f8749, "rds_send_path_drop_acked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x721c9d1f, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3e7102a2, "rds_conn_destroy" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa467af, "rds_wq" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x6f395e65, "__module_get" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c9e7da5, "rds_info_deregister_func" },
	{ 0xa28c1025, "rds_trans_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0x45a4781e, "rds_addr_cmp" },
	{ 0x8cf4eb54, "rds_conn_path_connect_if_down" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x74f800cc, "tcp_read_sock" },
	{ 0x30443e88, "rds_send_path_reset" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xfd22dd56, "rds_cong_map_updated" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x200b2041, "in6addr_any" },
};

MODULE_INFO(depends, "rds");


MODULE_INFO(srcversion, "777545D838D0BBE75AC72F9");
