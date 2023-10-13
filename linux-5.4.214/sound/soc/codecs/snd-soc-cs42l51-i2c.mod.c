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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x78c08b95, "cs42l51_remove" },
	{ 0x3705f5e3, "cs42l51_suspend" },
	{ 0x797e584b, "cs42l51_regmap" },
	{ 0x375ad98c, "cs42l51_of_match" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1a1e17b3, "cs42l51_resume" },
	{ 0xaaa86796, "cs42l51_probe" },
};

MODULE_INFO(depends, "snd-soc-cs42l51");

MODULE_ALIAS("i2c:cs42l51");

MODULE_INFO(srcversion, "5409051EE0ED8CCCB2F9A49");
