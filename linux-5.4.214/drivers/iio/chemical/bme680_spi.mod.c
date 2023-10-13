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
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xae776a7d, "bme680_core_probe" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0xc4e8269b, "bme680_regmap_config" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bme680_core");

MODULE_ALIAS("of:N*T*Cbosch,bme680");
MODULE_ALIAS("of:N*T*Cbosch,bme680C*");
MODULE_ALIAS("acpi*:BME0680:*");
MODULE_ALIAS("spi:bme680");

MODULE_INFO(srcversion, "292B1299DBC9A1C05478477");
