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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1e7734c8, "rt2x00mac_tx_frames_pending" },
	{ 0x964986f1, "rt2x00mac_get_ringparam" },
	{ 0x6aba24fb, "rt2x00mac_flush" },
	{ 0x9dad6b22, "rt2x00mac_rfkill_poll" },
	{ 0xafadb607, "rt2800_get_survey" },
	{ 0x231dafae, "rt2800_ampdu_action" },
	{ 0xd4f87653, "rt2800_get_tsf" },
	{ 0x375b1078, "rt2800_conf_tx" },
	{ 0x41c2139a, "rt2800_sta_remove" },
	{ 0x366f007a, "rt2800_sta_add" },
	{ 0xb1bd6298, "rt2800_set_rts_threshold" },
	{ 0x306d2fc, "rt2800_get_key_seq" },
	{ 0xc74fa762, "rt2x00mac_get_stats" },
	{ 0x308ca0f6, "rt2x00mac_sw_scan_complete" },
	{ 0x57a396d3, "rt2x00mac_sw_scan_start" },
	{ 0x6eb373ad, "rt2x00mac_set_key" },
	{ 0xa02e506d, "rt2x00mac_configure_filter" },
	{ 0x8988dd91, "rt2x00mac_bss_info_changed" },
	{ 0x93fd86f7, "rt2x00mac_config" },
	{ 0xd3a4533f, "rt2x00mac_remove_interface" },
	{ 0x3b1d761f, "rt2x00mac_add_interface" },
	{ 0x9c516176, "rt2x00mac_stop" },
	{ 0x1522efba, "rt2x00mac_start" },
	{ 0xb66f22f3, "rt2x00mac_tx" },
	{ 0x598e59c6, "rt2800mmio_get_dma_done" },
	{ 0x10f54171, "rt2800mmio_get_txwi" },
	{ 0xbb15fba9, "rt2800mmio_init_registers" },
	{ 0x79eeda74, "rt2x00mmio_regbusy_read" },
	{ 0x109ac4, "rt2800_pre_reset_hw" },
	{ 0xd469b52b, "rt2800_config" },
	{ 0xcd90e92f, "rt2800_config_ant" },
	{ 0x2e76dbc, "rt2800_config_erp" },
	{ 0xd12b00fd, "rt2800_config_intf" },
	{ 0xdb979714, "rt2800_config_filter" },
	{ 0x5ca736d6, "rt2800_config_pairwise_key" },
	{ 0xdaaa08ad, "rt2800_config_shared_key" },
	{ 0x40d8f196, "rt2800mmio_fill_rxdone" },
	{ 0xd674f0da, "rt2800_clear_beacon" },
	{ 0xb346800f, "rt2800_write_beacon" },
	{ 0x64a6dfb, "rt2800_write_tx_data" },
	{ 0x5a91e8c2, "rt2800mmio_write_tx_desc" },
	{ 0xfd8eb1fa, "rt2800mmio_flush_queue" },
	{ 0x8909b93f, "rt2800mmio_stop_queue" },
	{ 0x855795a0, "rt2800mmio_kick_queue" },
	{ 0x4130d06e, "rt2800mmio_start_queue" },
	{ 0x7ec4979e, "rt2800_watchdog" },
	{ 0xc3f3db4f, "rt2800_vco_calibration" },
	{ 0x54d5f8d9, "rt2800_gain_calibration" },
	{ 0xa0f91a42, "rt2800_link_tuner" },
	{ 0x2b690782, "rt2800_reset_tuner" },
	{ 0x474e38f5, "rt2800_link_stats" },
	{ 0x67a53a6f, "rt2800_rfkill_poll" },
	{ 0xd561d926, "rt2800mmio_clear_entry" },
	{ 0xcd9f851b, "rt2800mmio_get_entry_state" },
	{ 0x9ea74802, "rt2x00mmio_uninitialize" },
	{ 0x83ee291b, "rt2x00mmio_initialize" },
	{ 0xc3af2d10, "rt2800_load_firmware" },
	{ 0x821b45a7, "rt2800_check_firmware" },
	{ 0xc84eadd5, "rt2800mmio_probe_hw" },
	{ 0xc6a1455e, "rt2800mmio_autowake_tasklet" },
	{ 0x92c0bcd1, "rt2800mmio_rxdone_tasklet" },
	{ 0x2505789d, "rt2800mmio_tbtt_tasklet" },
	{ 0xfad1430, "rt2800mmio_pretbtt_tasklet" },
	{ 0xe28f94c7, "rt2800mmio_txstatus_tasklet" },
	{ 0x5fa4db64, "rt2800mmio_interrupt" },
	{ 0x8a7f627b, "rt2800mmio_queue_init" },
	{ 0xb014b7b9, "rt2x00pci_resume" },
	{ 0x35f05156, "rt2x00pci_suspend" },
	{ 0x7af810ba, "rt2x00pci_remove" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x98e1beab, "rt2800mmio_toggle_irq" },
	{ 0x3f1edb51, "rt2800mmio_enable_radio" },
	{ 0xde251e63, "rt2800_mcu_request" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x5ce06c4, "rt2800_read_eeprom_efuse" },
	{ 0x382b064, "rt2800_efuse_detect" },
	{ 0x9a6e3b10, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F308CBBB92C7269AB6539DE");
