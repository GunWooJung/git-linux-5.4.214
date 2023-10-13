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
	{ 0x9a4c322, "_dev_err" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x904a8908, "regmap_write" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:noa1305");
MODULE_ALIAS("of:N*T*Connn,noa1305");
MODULE_ALIAS("of:N*T*Connn,noa1305C*");

MODULE_INFO(srcversion, "31883DBDDF097B296FBA87A");
