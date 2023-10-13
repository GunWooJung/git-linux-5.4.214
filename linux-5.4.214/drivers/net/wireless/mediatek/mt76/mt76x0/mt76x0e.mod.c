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
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0xd9ad14e7, "__mt76_poll" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xe9a2e9de, "mt76_sw_scan" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ac0a792, "mt76x02_conf_tx" },
	{ 0xcd16d72f, "mt76x02_ampdu_action" },
	{ 0x5e217e90, "mt76x02_mcu_cleanup" },
	{ 0xc6c0ad7, "mt76x02_tx_prepare_skb" },
	{ 0xb2e4b9c0, "mt76x02_add_interface" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf8a49000, "mt76x02_bss_info_changed" },
	{ 0xc20d0670, "mt76x0_init_hardware" },
	{ 0x1e1ff579, "mt76x02_mcu_msg_send" },
	{ 0xc3da81f, "mt76_sta_state" },
	{ 0xf1192f79, "mt76x02_tx_complete_skb" },
	{ 0xcb24e1c6, "mt76x02_set_rts_threshold" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x76c1cb31, "mt76_get_survey" },
	{ 0xec0abd61, "mt76x0_mac_stop" },
	{ 0xc41c811e, "mt76_unregister_device" },
	{ 0xb8d9a4a8, "mt76x02_sta_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf48732b, "mt76x02_sta_remove" },
	{ 0xb5cc9dc9, "mt76_mmio_init" },
	{ 0x117a2e3e, "mt76x02_tx" },
	{ 0x68e1d6eb, "__mt76_poll_msec" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0xa4b9240f, "mt76x02_sw_scan_complete" },
	{ 0xf8c4eeeb, "mt76_set_tim" },
	{ 0x93157217, "mt76x0_phy_calibrate" },
	{ 0x53c464a, "mt76x02_rx_poll_complete" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6f9e631d, "mt76x0_register_device" },
	{ 0x58b18071, "mt76x0_config" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x216b8bff, "mt76x02_queue_rx_skb" },
	{ 0x56e9e877, "mt76x0_chip_onoff" },
	{ 0x5cd4d139, "mt76_free_device" },
	{ 0x62d0eccf, "mt76x02_configure_filter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3c2c74e7, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8a7a505e, "mt76x02_set_coverage_class" },
	{ 0xad77af8, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe90584, "mt76x02_dma_cleanup" },
	{ 0xdac0540b, "mt76x02_sta_rate_tbl_update" },
	{ 0x8c5ad9be, "mt76x02_sta_ps" },
	{ 0xac7e0619, "mt76x02e_init_beacon_config" },
	{ 0x6c811673, "mt76_wake_tx_queue" },
	{ 0x11ecc3fe, "mt76x02_dma_disable" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x90310a06, "mt76_get_txpower" },
	{ 0x80500894, "request_firmware" },
	{ 0xa280ab5a, "mt76_release_buffered_frames" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x903c209a, "mt76x02_set_key" },
	{ 0x2f8b2586, "mt76x02_set_ethtool_fwver" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xaaf0c994, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76x0-common,mac80211");

MODULE_ALIAS("pci:v000014C3d00007630sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007650sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D62B9C57FFA9D3B3E4ABA9F");
