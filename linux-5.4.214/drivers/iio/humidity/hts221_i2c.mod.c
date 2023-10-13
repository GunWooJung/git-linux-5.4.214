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
	{ 0xfd71b09c, "hts221_pm_ops" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7a6013e5, "hts221_probe" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hts221");

MODULE_ALIAS("i2c:hts221");
MODULE_ALIAS("of:N*T*Cst,hts221");
MODULE_ALIAS("of:N*T*Cst,hts221C*");
MODULE_ALIAS("acpi*:SMO9100:*");

MODULE_INFO(srcversion, "C38DF9D1D8334FB3056CEA9");
