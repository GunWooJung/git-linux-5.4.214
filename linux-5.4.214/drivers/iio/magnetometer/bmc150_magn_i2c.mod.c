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
	{ 0xe8a5274f, "bmc150_magn_pm_ops" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x230a0598, "bmc150_magn_probe" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x14611c66, "bmc150_magn_regmap_config" },
	{ 0xb9d75ff8, "bmc150_magn_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmc150_magn");

MODULE_ALIAS("of:N*T*Cbosch,bmc150_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmc150_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmm150_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmm150_magnC*");
MODULE_ALIAS("i2c:bmc150_magn");
MODULE_ALIAS("i2c:bmc156_magn");
MODULE_ALIAS("i2c:bmm150_magn");
MODULE_ALIAS("acpi*:BMC150B:*");
MODULE_ALIAS("acpi*:BMC156B:*");
MODULE_ALIAS("acpi*:BMM150B:*");

MODULE_INFO(srcversion, "6181DA1DC51C743FB1E40BD");
