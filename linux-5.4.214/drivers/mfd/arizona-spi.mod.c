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
	{ 0x106f2f35, "arizona_pm_ops" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9cfa7b8d, "wm5110_spi_regmap" },
	{ 0x61a92fb0, "wm5102_spi_regmap" },
	{ 0xc2b53175, "arizona_dev_init" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x311b83d7, "cs47l24_spi_regmap" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xadad099, "arizona_dev_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");

MODULE_INFO(srcversion, "88B10CC70043E42F5B598E3");
