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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xebb7343b, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x4989beb5, "mt76x02_phy_set_txdac" },
	{ 0xd9ad14e7, "__mt76_poll" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x885bb1fb, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4133ee0c, "mt76x02_phy_set_txpower" },
	{ 0x47195bdc, "mt76x02_mcu_function_select" },
	{ 0x7fee2e72, "mt76x02_mcu_calibrate" },
	{ 0x856cdaf2, "mt76x02_eeprom_copy" },
	{ 0x4b708d36, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6f5e4093, "mt76x02_dfs_init_params" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4239aad, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7d18cba6, "mt76x02_init_agc_gain" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x67a927a9, "mt76x02_init_debugfs" },
	{ 0x83d47aae, "mt76x02_get_lna_gain" },
	{ 0xcf4bdf26, "mt76x02_edcca_init" },
	{ 0xf915a799, "mt76x02_phy_set_rxpath" },
	{ 0x64f38057, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0x68e1d6eb, "__mt76_poll_msec" },
	{ 0x548296b4, "mt76x02_init_device" },
	{ 0x12dc7ef, "mt76_set_channel" },
	{ 0xfa24c7cd, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbd844265, "mt76x02_phy_set_bw" },
	{ 0x3460ad4c, "mt76_register_device" },
	{ 0xd22134d8, "mt76x02_mac_setaddr" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf82d27c9, "mt76_eeprom_init" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x5276cf31, "mt76x02_get_rx_gain" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34243e8e, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x356e4bb0, "mt76x02_ext_pa_enabled" },
	{ 0xaed8dfbf, "mt76x02_mac_shared_key_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xb2e2d7e4, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x529ceddd, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "D04847EA286BBB0116F886A");
