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
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xd7f6dfff, "mma7455_core_probe" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xdd01abf6, "mma7455_core_regmap" },
	{ 0x8410713c, "mma7455_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mma7455_core");

MODULE_ALIAS("of:N*T*Cfsl,mma7455");
MODULE_ALIAS("of:N*T*Cfsl,mma7455C*");
MODULE_ALIAS("of:N*T*Cfsl,mma7456");
MODULE_ALIAS("of:N*T*Cfsl,mma7456C*");
MODULE_ALIAS("i2c:mma7455");
MODULE_ALIAS("i2c:mma7456");

MODULE_INFO(srcversion, "7043D0B441B24D3FCD95FF2");
