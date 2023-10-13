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
	{ 0xed09261b, "adau1761_regmap_config" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x1cca58e6, "adau17x1_remove" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0cfe9fc, "adau1761_probe" },
};

MODULE_INFO(depends, "snd-soc-adau1761,snd-soc-adau17x1");

MODULE_ALIAS("i2c:adau1361");
MODULE_ALIAS("i2c:adau1461");
MODULE_ALIAS("i2c:adau1761");
MODULE_ALIAS("i2c:adau1961");

MODULE_INFO(srcversion, "9EAA6B1DB9614265B345D3C");
