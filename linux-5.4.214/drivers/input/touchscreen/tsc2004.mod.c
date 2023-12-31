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
	{ 0xd4df0614, "tsc200x_pm_ops" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x128a689b, "tsc200x_probe" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x9d3b37c2, "tsc200x_regmap_config" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0xf606151d, "tsc200x_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tsc200x-core");

MODULE_ALIAS("i2c:tsc2004");

MODULE_INFO(srcversion, "D0AB8FCA7E8B561C5ADBC6D");
