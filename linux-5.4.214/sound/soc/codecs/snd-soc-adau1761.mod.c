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
	{ 0xf800741c, "adau17x1_precious_register" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xebf9c935, "adau17x1_add_widgets" },
	{ 0x91010520, "adau17x1_resume" },
	{ 0x50ab54a2, "snd_soc_dapm_new_controls" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0xe1bc39c8, "adau17x1_probe" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x401dfc5f, "adau17x1_volatile_register" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xf8e3d321, "adau17x1_dai_ops" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x8b08c32b, "adau17x1_readable_register" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x4aca31f5, "adau17x1_add_routes" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-adau17x1,snd-soc-core");


MODULE_INFO(srcversion, "3BE60EF996A73FA0FEB2F6C");
