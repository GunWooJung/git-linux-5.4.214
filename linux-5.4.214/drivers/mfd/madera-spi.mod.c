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
	{ 0x4e3f3cf1, "madera_pm_ops" },
	{ 0x2be3870d, "cs47l15_16bit_spi_regmap" },
	{ 0xfc06daf4, "cs47l92_16bit_spi_regmap" },
	{ 0x88b2dc05, "cs47l90_16bit_spi_regmap" },
	{ 0xd35f6af9, "cs47l85_16bit_spi_regmap" },
	{ 0xe12df181, "cs47l35_16bit_spi_regmap" },
	{ 0x2bee5b4d, "cs47l15_32bit_spi_regmap" },
	{ 0xfc0b06b4, "cs47l92_32bit_spi_regmap" },
	{ 0x88bf0045, "cs47l90_32bit_spi_regmap" },
	{ 0xd352b6b9, "cs47l85_32bit_spi_regmap" },
	{ 0xe1202dc1, "cs47l35_32bit_spi_regmap" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x79d0f033, "madera_dev_init" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xebe384cb, "madera_name_from_type" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xefa4ce6e, "madera_dev_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "madera");

MODULE_ALIAS("spi:cs47l15");
MODULE_ALIAS("spi:cs47l35");
MODULE_ALIAS("spi:cs47l85");
MODULE_ALIAS("spi:cs47l90");
MODULE_ALIAS("spi:cs47l91");
MODULE_ALIAS("spi:cs42l92");
MODULE_ALIAS("spi:cs47l92");
MODULE_ALIAS("spi:cs47l93");
MODULE_ALIAS("spi:wm1840");

MODULE_INFO(srcversion, "02BA7533B3BFFF01FEFB4DC");
