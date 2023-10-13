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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa90a5211, "regmap_register_patch" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x6b6947f4, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x49738e13, "device_get_named_child_node" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x6e943f12, "snd_soc_put_volsw_range" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x4c12b82d, "devm_clk_register" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a8979bc, "snd_soc_info_volsw_range" },
	{ 0x888350b3, "device_property_read_string_array" },
	{ 0x2d7c89f4, "snd_soc_dapm_force_bias_level" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x122b5584, "snd_soc_get_volsw_range" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x7f8658b5, "snd_soc_dapm_force_enable_pin" },
	{ 0xf30d78a0, "snd_soc_dapm_disable_pin" },
	{ 0xa4d5d350, "regcache_sync_region" },
	{ 0x3c50fe65, "regmap_raw_read" },
	{ 0x272b4e9, "clkdev_drop" },
	{ 0x3b47a4d, "clkdev_create" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4102c82b, "snd_soc_jack_report" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("acpi*:DLGS7219:*");
MODULE_ALIAS("i2c:da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219C*");

MODULE_INFO(srcversion, "C374579CD76B504B820D615");
