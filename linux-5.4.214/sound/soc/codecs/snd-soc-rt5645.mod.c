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
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa90a5211, "regmap_register_patch" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x50ab54a2, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d7c89f4, "snd_soc_dapm_force_bias_level" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x7f8658b5, "snd_soc_dapm_force_enable_pin" },
	{ 0xf30d78a0, "snd_soc_dapm_disable_pin" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0x4102c82b, "snd_soc_jack_report" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-rl6231");

MODULE_ALIAS("i2c:rt5645");
MODULE_ALIAS("i2c:rt5650");
MODULE_ALIAS("acpi*:10EC5645:*");
MODULE_ALIAS("acpi*:10EC5648:*");
MODULE_ALIAS("acpi*:10EC5650:*");
MODULE_ALIAS("acpi*:10EC5640:*");
MODULE_ALIAS("acpi*:10EC3270:*");

MODULE_INFO(srcversion, "5DA358882CA6DC39B1F2A16");
