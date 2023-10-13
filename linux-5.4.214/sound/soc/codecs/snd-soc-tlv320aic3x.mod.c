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
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x49212083, "snd_soc_dapm_mixer_update_power" },
	{ 0xa90a5211, "regmap_register_patch" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x50ab54a2, "snd_soc_dapm_new_controls" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x2e284c3, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x72d05e2a, "devm_regulator_register_notifier" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfe990052, "gpio_free" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x37aa1344, "snd_soc_component_test_bits" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3106");
MODULE_ALIAS("i2c:tlv320aic3104");

MODULE_INFO(srcversion, "6C3C2A2E9E0C82BE17CC7B9");
