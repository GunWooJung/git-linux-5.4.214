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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe442e9cb, "ksz_port_bridge_join" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x14bd7e8d, "ksz_port_vlan_prepare" },
	{ 0x5c1bf708, "ksz_get_ethtool_stats" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x28f9d3fd, "ksz_init_mib_timer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xdc83f388, "ksz_switch_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x959c8a7b, "ksz_port_bridge_leave" },
	{ 0xfb578fc5, "memset" },
	{ 0xdd74ac9, "phy_remove_link_mode" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1555a30d, "ksz_update_port_member" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e6817fa, "ksz_adjust_link" },
	{ 0x617b3e04, "ksz_port_mdb_prepare" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb3696025, "ksz_port_fast_age" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x53560afe, "ksz_disable_port" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbf7cab2c, "ksz_enable_port" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0xa2ed3c19, "ksz_sset_count" },
};

MODULE_INFO(depends, "ksz_common");


MODULE_INFO(srcversion, "A98643DE078969A2383A3E7");
