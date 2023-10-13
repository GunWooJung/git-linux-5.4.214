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
	{ 0x8b2ed853, "fxas21002c_pm_ops" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc016fa34, "fxas21002c_core_probe" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x8827fe58, "fxas21002c_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fxas21002c_core");

MODULE_ALIAS("of:N*T*Cnxp,fxas21002c");
MODULE_ALIAS("of:N*T*Cnxp,fxas21002cC*");
MODULE_ALIAS("spi:fxas21002c");

MODULE_INFO(srcversion, "320F642F2D3CF065DA954BE");
