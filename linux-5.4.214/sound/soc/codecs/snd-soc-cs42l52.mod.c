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
	{ 0x2d3385d3, "system_wq" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xc189e4c3, "snd_soc_get_volsw_sx" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xa90a5211, "regmap_register_patch" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x7de7babb, "snd_soc_info_volsw_sx" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x66c54ff1, "input_event" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x94a09154, "input_register_device" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0xf30d78a0, "snd_soc_dapm_disable_pin" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x7a215233, "snd_soc_dapm_enable_pin" },
	{ 0x727b6403, "gpiod_set_raw_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5f1b3ed4, "snd_soc_put_volsw_sx" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("i2c:cs42l52");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l52");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l52C*");

MODULE_INFO(srcversion, "37FCF8874E172E4D0153A3C");
