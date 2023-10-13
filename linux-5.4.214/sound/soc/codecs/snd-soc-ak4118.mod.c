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
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0xdebd4c6d, "snd_soc_card_get_kcontrol" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("i2c:ak4118");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4118");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4118C*");

MODULE_INFO(srcversion, "1484FDEDD99F4E100869648");
