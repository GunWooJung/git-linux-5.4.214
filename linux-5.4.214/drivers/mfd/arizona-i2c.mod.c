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
	{ 0x106f2f35, "arizona_pm_ops" },
	{ 0x705bf944, "wm8998_i2c_regmap" },
	{ 0xb28014db, "wm8997_i2c_regmap" },
	{ 0xdfc2bac1, "wm5110_i2c_regmap" },
	{ 0x2291eefc, "wm5102_i2c_regmap" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc2b53175, "arizona_dev_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xadad099, "arizona_dev_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:wm5102");
MODULE_ALIAS("i2c:wm5110");
MODULE_ALIAS("i2c:wm8280");
MODULE_ALIAS("i2c:wm8997");
MODULE_ALIAS("i2c:wm8998");
MODULE_ALIAS("i2c:wm1814");

MODULE_INFO(srcversion, "00B1A95C277F7F21807036E");
