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
	{ 0x7ca667ed, "hmc5843_common_resume" },
	{ 0xb5c64d6f, "hmc5843_common_suspend" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x76c0a5b0, "hmc5843_common_probe" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x9acf7c7b, "hmc5843_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hmc5843_core");

MODULE_ALIAS("spi:hmc5983");

MODULE_INFO(srcversion, "73FB57466AB3F6EBF7DB8AF");
