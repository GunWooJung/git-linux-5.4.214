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
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xd1810044, "pcm3060_regmap" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3cd39e0e, "pcm3060_probe" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-pcm3060");

MODULE_ALIAS("spi:pcm3060");

MODULE_INFO(srcversion, "24FC077D764A575802F45DF");
