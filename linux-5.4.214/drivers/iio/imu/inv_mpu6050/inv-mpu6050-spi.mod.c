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
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x7c364d18, "inv_mpu_pmops" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa68dd7f0, "inv_mpu6050_set_power_itg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1cfd266e, "inv_mpu_core_probe" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x904a8908, "regmap_write" },
};

MODULE_INFO(depends, "inv-mpu6050");

MODULE_ALIAS("spi:mpu6000");
MODULE_ALIAS("spi:mpu6500");
MODULE_ALIAS("spi:mpu9150");
MODULE_ALIAS("spi:mpu9250");
MODULE_ALIAS("spi:mpu9255");
MODULE_ALIAS("spi:icm20608");
MODULE_ALIAS("spi:icm20602");
MODULE_ALIAS("acpi*:INVN6000:*");

MODULE_INFO(srcversion, "84A6C69BAB3F8400987E1A7");
