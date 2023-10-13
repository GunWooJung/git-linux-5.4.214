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
	{ 0xf9a482f9, "msleep" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
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
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:cs42l42");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l42");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l42C*");

MODULE_INFO(srcversion, "AFA5FD7B34B3C5DA5B04962");
