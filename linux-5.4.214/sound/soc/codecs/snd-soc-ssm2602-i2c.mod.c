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
	{ 0xecc7fcef, "ssm2602_regmap_config" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2189c0a5, "ssm2602_probe" },
};

MODULE_INFO(depends, "snd-soc-ssm2602");

MODULE_ALIAS("i2c:ssm2602");
MODULE_ALIAS("i2c:ssm2603");
MODULE_ALIAS("i2c:ssm2604");
MODULE_ALIAS("of:N*T*Cadi,ssm2602");
MODULE_ALIAS("of:N*T*Cadi,ssm2602C*");
MODULE_ALIAS("of:N*T*Cadi,ssm2603");
MODULE_ALIAS("of:N*T*Cadi,ssm2603C*");
MODULE_ALIAS("of:N*T*Cadi,ssm2604");
MODULE_ALIAS("of:N*T*Cadi,ssm2604C*");

MODULE_INFO(srcversion, "B2BA91A082E5CE66CED5713");
