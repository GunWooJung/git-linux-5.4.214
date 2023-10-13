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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x53d84550, "bmi160_core_probe" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x3847a2a5, "bmi160_regmap_config" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmi160_core");

MODULE_ALIAS("acpi*:BMI0160:*");
MODULE_ALIAS("spi:bmi160");

MODULE_INFO(srcversion, "6D2AE187FEE6C7C46F3EC6F");
