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
	{ 0x958767a4, "register_netdevice" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70d3ebc4, "wiphy_free" },
	{ 0xa20bfaa8, "cfg80211_connect_done" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x18f90612, "cfg80211_rx_mgmt" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf7d5ab5, "cfg80211_stop_iface" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d1b8678, "cfg80211_mgmt_tx_status" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x201ec6c0, "cfg80211_get_bss" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x9166fada, "strncpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xe1cbcc8e, "ieee80211_get_channel" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x124c821, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd7cddb7c, "wiphy_register" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb6553bc, "cfg80211_ready_on_channel" },
	{ 0xc722e194, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x6b93f45f, "cfg80211_disconnected" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0x80500894, "request_firmware" },
	{ 0x7839647d, "cfg80211_remain_on_channel_expired" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xad263612, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c53d3db, "cfg80211_scan_done" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xeae5f50d, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "907C02219FE13995119660A");
