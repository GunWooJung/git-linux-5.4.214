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
	{ 0xcd57c7b9, "ieee80211_csa_finish" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xebb7343b, "mt76_get_min_avg_rssi" },
	{ 0x9c375df5, "mt76_dma_attach" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x98d5d311, "debugfs_create_u8" },
	{ 0xd2f5baed, "mt76_rx_aggr_stop" },
	{ 0xd9ad14e7, "__mt76_poll" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe9a2e9de, "mt76_sw_scan" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xdb1050fc, "ieee80211_radar_detected" },
	{ 0x395e0fde, "mt76_put_txwi" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x13f19aa6, "mt76_rx_aggr_start" },
	{ 0x5647756d, "mt76_sw_scan_complete" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4239aad, "mt76_txq_schedule_all" },
	{ 0xac8bbb87, "mt76_insert_ccmp_hdr" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28c7e597, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xb06e18d8, "mt76_txq_init" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x6ddf2159, "mt76_mcu_get_response" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0x815a363f, "mt76_tx_complete_skb" },
	{ 0xc3da81f, "mt76_sta_state" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x76c1cb31, "mt76_get_survey" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xbca6b65b, "mt76_set_irq_mask" },
	{ 0xc41c811e, "mt76_unregister_device" },
	{ 0x145764e9, "mt76_eeprom_override" },
	{ 0x4389b4c8, "ieee80211_beacon_get_template" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0xb5cc9dc9, "mt76_mmio_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x68e1d6eb, "__mt76_poll_msec" },
	{ 0x12dc7ef, "mt76_set_channel" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3460ad4c, "mt76_register_device" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf82d27c9, "mt76_eeprom_init" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0xd772f4eb, "mt76_tx_status_skb_done" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x6c6311b0, "wiphy_to_ieee80211_hw" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xb9ab3f51, "mt76_rx" },
	{ 0x2e30b2c0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x5cd4d139, "mt76_free_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5788a7da, "mt76_wcid_key_setup" },
	{ 0x666ab8d0, "mt76_wcid_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xbc46fb87, "mt76_tx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x960dee99, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x936d2a72, "mt76_register_debugfs" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x67876151, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d5e438a, "mt76_tx_status_check" },
	{ 0xad77af8, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x4edc2bbe, "mt76_dma_cleanup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x95720022, "mt76_mcu_rx_event" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe1c7b5f0, "ieee80211_tx_status_ext" },
	{ 0x6c811673, "mt76_wake_tx_queue" },
	{ 0x8e44b856, "mt76_get_rate" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x122e9152, "mt76_tx_status_skb_add" },
	{ 0x90310a06, "mt76_get_txpower" },
	{ 0x80500894, "request_firmware" },
	{ 0xa280ab5a, "mt76_release_buffered_frames" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xe8febb33, "debugfs_create_u16" },
	{ 0xaaa1d2fc, "mt76_tx_status_lock" },
	{ 0x96ffca3c, "mt76_mcu_msg_alloc" },
	{ 0xb988e0ec, "mt76_tx_status_skb_get" },
	{ 0xad263612, "consume_skb" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xdd3985f4, "mt76_txq_remove" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xa29c114b, "mt76_tx_status_unlock" },
	{ 0x63f0726e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x9fe59f14, "dma_ops" },
};

MODULE_INFO(depends, "mac80211,mt76,cfg80211");

MODULE_ALIAS("pci:v000014C3d00007615sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B13BE296FB2E16D9AE48390");
