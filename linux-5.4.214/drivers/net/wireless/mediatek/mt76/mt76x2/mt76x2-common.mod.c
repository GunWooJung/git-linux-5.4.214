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
	{ 0xebb7343b, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4133ee0c, "mt76x02_phy_set_txpower" },
	{ 0x7fee2e72, "mt76x02_mcu_calibrate" },
	{ 0x856cdaf2, "mt76x02_eeprom_copy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x83d47aae, "mt76x02_get_lna_gain" },
	{ 0x145764e9, "mt76_eeprom_override" },
	{ 0x64f38057, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf82d27c9, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x5276cf31, "mt76x02_get_rx_gain" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34243e8e, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x356e4bb0, "mt76x02_ext_pa_enabled" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb2e2d7e4, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x529ceddd, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");


MODULE_INFO(srcversion, "91924EBDDD2AC31A6CA8189");
