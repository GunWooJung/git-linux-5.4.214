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
	{ 0x68db4641, "cs47l15_16bit_i2c_regmap" },
	{ 0xbf3e1bb8, "cs47l92_16bit_i2c_regmap" },
	{ 0xcb8a1d49, "cs47l90_16bit_i2c_regmap" },
	{ 0x9067abb5, "cs47l85_16bit_i2c_regmap" },
	{ 0xa21530cd, "cs47l35_16bit_i2c_regmap" },
	{ 0x68d69a01, "cs47l15_32bit_i2c_regmap" },
	{ 0xbf33c7f8, "cs47l92_32bit_i2c_regmap" },
	{ 0xcb87c109, "cs47l90_32bit_i2c_regmap" },
	{ 0x906a77f5, "cs47l85_32bit_i2c_regmap" },
	{ 0xa218ec8d, "cs47l35_32bit_i2c_regmap" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x79d0f033, "madera_dev_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xebe384cb, "madera_name_from_type" },
	{ 0xefa4ce6e, "madera_dev_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "madera");

MODULE_ALIAS("i2c:cs47l15");
MODULE_ALIAS("i2c:cs47l35");
MODULE_ALIAS("i2c:cs47l85");
MODULE_ALIAS("i2c:cs47l90");
MODULE_ALIAS("i2c:cs47l91");
MODULE_ALIAS("i2c:cs42l92");
MODULE_ALIAS("i2c:cs47l92");
MODULE_ALIAS("i2c:cs47l93");
MODULE_ALIAS("i2c:wm1840");

MODULE_INFO(srcversion, "A93539683DB2905A3C4FBF2");
