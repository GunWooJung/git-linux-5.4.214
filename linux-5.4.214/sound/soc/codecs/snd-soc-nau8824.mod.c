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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2d7c89f4, "snd_soc_dapm_force_bias_level" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x7f8658b5, "snd_soc_dapm_force_enable_pin" },
	{ 0xf30d78a0, "snd_soc_dapm_disable_pin" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xcf2a6966, "up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4102c82b, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("acpi*:10508824:*");
MODULE_ALIAS("i2c:nau8824");

MODULE_INFO(srcversion, "BA60CE015502235C23F7C15");
