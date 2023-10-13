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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x56ba7ac4, "ad5686_probe" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xae8ea4f7, "ad5686_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad5686");

MODULE_ALIAS("spi:ad5310r");
MODULE_ALIAS("spi:ad5672r");
MODULE_ALIAS("spi:ad5674r");
MODULE_ALIAS("spi:ad5676");
MODULE_ALIAS("spi:ad5676r");
MODULE_ALIAS("spi:ad5679r");
MODULE_ALIAS("spi:ad5681r");
MODULE_ALIAS("spi:ad5682r");
MODULE_ALIAS("spi:ad5683");
MODULE_ALIAS("spi:ad5683r");
MODULE_ALIAS("spi:ad5684");
MODULE_ALIAS("spi:ad5684r");
MODULE_ALIAS("spi:ad5685");
MODULE_ALIAS("spi:ad5685r");
MODULE_ALIAS("spi:ad5686");
MODULE_ALIAS("spi:ad5686r");

MODULE_INFO(srcversion, "61922103BE9975EA79CFDCB");
