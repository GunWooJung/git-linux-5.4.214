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
	{ 0x2d39f769, "neigh_seq_next" },
	{ 0x4ed7d69c, "neigh_seq_stop" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc7942ee8, "register_atm_ioctl" },
	{ 0x73588f11, "dst_release" },
	{ 0xf5f1f564, "__neigh_create" },
	{ 0xe1b80f1a, "neigh_lookup" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x410ecd8a, "vcc_process_recv_queue" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6f395e65, "__module_get" },
	{ 0x7dedaa1b, "vcc_insert_socket" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x44c12534, "atm_charge" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x63616516, "netif_rx" },
	{ 0x5f2db543, "neigh_update" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc5850110, "printk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7669ab7d, "deregister_atm_ioctl" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x721c9d1f, "init_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xad263612, "consume_skb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdd0010c3, "vcc_release_async" },
	{ 0xeaa6e8b0, "neigh_seq_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3885862f, "seq_putc" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x96848186, "scnprintf" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xb68f1d76, "neigh_direct_output" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x899f833, "__icmp_send" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9aab0b43, "__neigh_for_each_release" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x72bd5852, "arp_tbl" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "844BAC33546DDAA06571D04");
