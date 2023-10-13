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
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("spi:ak4104");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4104");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4104C*");

MODULE_INFO(srcversion, "CFE346E5816B3CEE116AD9F");
