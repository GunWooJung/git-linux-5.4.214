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
	{ 0xb157b566, "bmg160_pm_ops" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x79323094, "bmg160_core_probe" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xfd01a89, "bmg160_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmg160_core");

MODULE_ALIAS("of:N*T*Cbosch,bmg160");
MODULE_ALIAS("of:N*T*Cbosch,bmg160C*");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_gyro");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_gyroC*");
MODULE_ALIAS("i2c:bmg160");
MODULE_ALIAS("i2c:bmi055_gyro");
MODULE_ALIAS("acpi*:BMG0160:*");
MODULE_ALIAS("acpi*:BMI055B:*");

MODULE_INFO(srcversion, "84B0806D1B57A193808469D");
