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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x67f583d4, "lib80211_crypt_delayed_deinit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc48ad170, "lib80211_crypt_info_free" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x11546c58, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0x5a921311, "strncmp" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x203c2379, "lib80211_get_crypto_ops" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x41535a31, "lib80211_crypt_info_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad263612, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "D4B21D5A31A6F216C873AE3");
