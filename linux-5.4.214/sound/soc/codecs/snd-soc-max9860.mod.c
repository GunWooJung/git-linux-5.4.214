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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x6b6947f4, "regcache_cache_bypass" },
	{ 0xdf4660ac, "dapm_regulator_event" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x72d05e2a, "devm_regulator_register_notifier" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x41187327, "clk_get" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x6fc637c7, "dapm_clock_event" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cmaxim,max9860");
MODULE_ALIAS("of:N*T*Cmaxim,max9860C*");
MODULE_ALIAS("i2c:max9860");

MODULE_INFO(srcversion, "2205F1DB0E55C3B003F222A");
