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
	{ 0xf5723a94, "iw_handler_set_thrspy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70d3ebc4, "wiphy_free" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x75ad7f34, "cfg80211_inform_bss_data" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x40fbeee9, "cfg80211_wext_siwscan" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xfee7a5e3, "cfg80211_wext_giwretry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc3c7d712, "crypto_shash_final" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xaf627e7d, "cfg80211_wext_siwmode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xc42fd9fe, "wireless_spy_update" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0xa571ddec, "iw_handler_get_spy" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0xe1cbcc8e, "ieee80211_get_channel" },
	{ 0xd523d85d, "skb_push" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x85c3dd21, "cfg80211_wext_giwfrag" },
	{ 0xf25f6891, "crypto_shash_setkey" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x3d5ac147, "cfg80211_wext_siwrts" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x124c821, "cfg80211_put_bss" },
	{ 0xd7cddb7c, "wiphy_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x796f8ca1, "iw_handler_get_thrspy" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc722e194, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x971be195, "cfg80211_wext_giwrange" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x59bfbba1, "cfg80211_wext_giwmode" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x568df3c3, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d138fd6, "cfg80211_wext_giwname" },
	{ 0x69acdf38, "memcpy" },
	{ 0x45e0d191, "cfg80211_wext_giwscan" },
	{ 0x80500894, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc5534d64, "ioread16" },
	{ 0x7ac5c57d, "cfg80211_wext_giwrts" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x43889b97, "cfg80211_wext_siwfrag" },
	{ 0xad263612, "consume_skb" },
	{ 0x9c53d3db, "cfg80211_scan_done" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A3005614B229A4D8DB60F5D");
