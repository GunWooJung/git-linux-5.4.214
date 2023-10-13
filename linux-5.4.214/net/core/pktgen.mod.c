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
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x29361773, "complete" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa5ed9517, "skb_checksum" },
	{ 0x5d202172, "udp4_hwcsum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x489702f4, "pktgen_xfrm_outer_mode_output" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x2124474, "ip_send_check" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd523d85d, "skb_push" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x1000e51, "schedule" },
	{ 0x7b2f3dba, "hrtimer_sleeper_start_expires" },
	{ 0xd3d4bb44, "hrtimer_init_sleeper" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x272147fe, "softnet_data" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xeaab968, "kthread_bind" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x960650ec, "proc_create" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xebff55c1, "__alloc_pages_nodemask" },
	{ 0xfb578fc5, "memset" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x999e8297, "vfree" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4075ebdd, "__put_task_struct" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x609c0d36, "proc_create_data" },
	{ 0xe171eab3, "proc_remove" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x75942744, "__put_page" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x652032cb, "mac_pton" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xa916b694, "strnlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x944c43f, "node_states" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x618911fc, "numa_node" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x75beae3f, "xfrm_stateonly_find" },
	{ 0xcc3eb837, "xfrm_state_lookup_byspi" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x7ee415d5, "single_open" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "507A673CF6B64222C608672");
