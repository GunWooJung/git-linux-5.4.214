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
	{ 0xe9daec07, "mc13xxx_variant_mc34708" },
	{ 0xbb6f524f, "mc13xxx_variant_mc13892" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe5aed3f2, "mc13xxx_common_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x8a7d7b2a, "mc13xxx_common_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("of:N*T*Cfsl,mc13892");
MODULE_ALIAS("of:N*T*Cfsl,mc13892C*");
MODULE_ALIAS("of:N*T*Cfsl,mc34708");
MODULE_ALIAS("of:N*T*Cfsl,mc34708C*");
MODULE_ALIAS("i2c:mc13892");
MODULE_ALIAS("i2c:mc34708");

MODULE_INFO(srcversion, "FB9407E56F6FAFA7496F34B");
