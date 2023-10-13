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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc189e4c3, "snd_soc_get_volsw_sx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xa41d1ff4, "gpiod_is_active_low" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x7de7babb, "snd_soc_info_volsw_sx" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5f1b3ed4, "snd_soc_put_volsw_sx" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("i2c:cs53l30");
MODULE_ALIAS("of:N*T*Ccirrus,cs53l30");
MODULE_ALIAS("of:N*T*Ccirrus,cs53l30C*");

MODULE_INFO(srcversion, "2D9C12E2BCD404D9AC2BFB4");
