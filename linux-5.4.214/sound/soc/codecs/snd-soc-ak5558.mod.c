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
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak5558");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak5558C*");

MODULE_INFO(srcversion, "2E5AB61FE0B0237300B5533");
