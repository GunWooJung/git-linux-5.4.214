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
	{ 0xed09261b, "adau1761_regmap_config" },
	{ 0x1cca58e6, "adau17x1_remove" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0cfe9fc, "adau1761_probe" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0x5573a68c, "spi_get_device_id" },
};

MODULE_INFO(depends, "snd-soc-adau1761,snd-soc-adau17x1");

MODULE_ALIAS("spi:adau1361");
MODULE_ALIAS("spi:adau1461");
MODULE_ALIAS("spi:adau1761");
MODULE_ALIAS("spi:adau1961");

MODULE_INFO(srcversion, "EFAC17404E4B2E05C0C4A26");
