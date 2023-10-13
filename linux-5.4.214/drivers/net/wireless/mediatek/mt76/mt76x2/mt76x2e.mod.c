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
	{ 0x4791d7c6, "mt76x02_remove_interface" },
	{  0xe6e38, "mt76x02_mac_start" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcc8ed207, "mt76x2_phy_set_txpower" },
	{ 0xb3eba3c, "mt76x2_phy_set_txpower_regs" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x930e5166, "mt76x2_read_rx_gain" },
	{ 0xd9ad14e7, "__mt76_poll" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x885bb1fb, "mt76x02_mac_wcid_setup" },
	{ 0x3a3bdd02, "mt76x2_get_temp_comp" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe9a2e9de, "mt76_sw_scan" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x47195bdc, "mt76x02_mcu_function_select" },
	{ 0x8ac0a792, "mt76x02_conf_tx" },
	{ 0x7fee2e72, "mt76x02_mcu_calibrate" },
	{ 0xcd16d72f, "mt76x02_ampdu_action" },
	{ 0x5e217e90, "mt76x02_mcu_cleanup" },
	{ 0xc6c0ad7, "mt76x02_tx_prepare_skb" },
	{ 0x4b708d36, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6f5e4093, "mt76x02_dfs_init_params" },
	{ 0xb2e4b9c0, "mt76x02_add_interface" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4239aad, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdbea1627, "mt76x2_phy_update_channel_gain" },
	{ 0x7d18cba6, "mt76x02_init_agc_gain" },
	{ 0xf8a49000, "mt76x02_bss_info_changed" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0xb754aa70, "mt76x2_phy_tssi_compensate" },
	{ 0x1e1ff579, "mt76x02_mcu_msg_send" },
	{ 0xc3da81f, "mt76_sta_state" },
	{ 0xf1192f79, "mt76x02_tx_complete_skb" },
	{ 0xcb24e1c6, "mt76x02_set_rts_threshold" },
	{ 0x12c2d326, "mt76x2_mcu_init_gain" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x76c1cb31, "mt76_get_survey" },
	{ 0x67a927a9, "mt76x02_init_debugfs" },
	{ 0x5a222891, "mt76x2_init_txpower" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x6851462d, "mt76x2_mcu_load_cr" },
	{ 0xc41c811e, "mt76_unregister_device" },
	{ 0xb8d9a4a8, "mt76x02_sta_add" },
	{ 0xe4afb3ef, "mt76x2_eeprom_init" },
	{ 0xcf4bdf26, "mt76x02_edcca_init" },
	{ 0xf48732b, "mt76x02_sta_remove" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0xb5cc9dc9, "mt76_mmio_init" },
	{ 0x117a2e3e, "mt76x02_tx" },
	{ 0x68e1d6eb, "__mt76_poll_msec" },
	{ 0x548296b4, "mt76x02_init_device" },
	{ 0x12dc7ef, "mt76_set_channel" },
	{ 0xfa24c7cd, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0xbd844265, "mt76x02_phy_set_bw" },
	{ 0xa4b9240f, "mt76x02_sw_scan_complete" },
	{ 0xf8c4eeeb, "mt76_set_tim" },
	{ 0x3460ad4c, "mt76_register_device" },
	{ 0xd22134d8, "mt76x02_mac_setaddr" },
	{ 0x53c464a, "mt76x02_rx_poll_complete" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x216b8bff, "mt76x02_queue_rx_skb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5cd4d139, "mt76_free_device" },
	{ 0x62d0eccf, "mt76x02_configure_filter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb2c3400e, "mt76_pci_disable_aspm" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4efa85ca, "mt76x2_configure_tx_delay" },
	{ 0x3c2c74e7, "mt76x02_update_channel" },
	{ 0x6a7bbbff, "mt76x02_set_tx_ackto" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x709c5baa, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8a7a505e, "mt76x02_set_coverage_class" },
	{ 0x356e4bb0, "mt76x02_ext_pa_enabled" },
	{ 0xaed8dfbf, "mt76x02_mac_shared_key_setup" },
	{ 0xad77af8, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdac0540b, "mt76x02_sta_rate_tbl_update" },
	{ 0xe90584, "mt76x02_dma_cleanup" },
	{ 0x8c5ad9be, "mt76x02_sta_ps" },
	{ 0x5ee3182d, "mt76x2_apply_gain_adj" },
	{ 0xb794c144, "mt76_set_stream_caps" },
	{ 0xac7e0619, "mt76x02e_init_beacon_config" },
	{ 0x6c811673, "mt76_wake_tx_queue" },
	{ 0xd2463291, "mt76x02_mcu_set_radio_state" },
	{ 0x11ecc3fe, "mt76x02_dma_disable" },
	{ 0x49bd0afa, "mt76x2_mcu_set_channel" },
	{ 0x3546b063, "mt76x2_reset_wlan" },
	{ 0x85aad512, "mt76_write_mac_initvals" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x90310a06, "mt76_get_txpower" },
	{ 0x80500894, "request_firmware" },
	{ 0xa280ab5a, "mt76_release_buffered_frames" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x903c209a, "mt76x02_set_key" },
	{ 0xc3b39c6f, "mt76x02_tx_set_txpwr_auto" },
	{ 0x2f8b2586, "mt76x02_set_ethtool_fwver" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xaaf0c994, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mac80211");

MODULE_ALIAS("pci:v000014C3d00007662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007602sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C83E435E3090D34E3B1B08D");
