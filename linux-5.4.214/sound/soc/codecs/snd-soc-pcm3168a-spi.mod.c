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
	{ 0x11c60cff, "pcm3168a_probe" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa26c1fa, "pcm3168a_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf5cd50ea, "pcm3168a_pm_ops" },
	{ 0xdc769bd1, "pcm3168a_regmap" },
};

MODULE_INFO(depends, "snd-soc-pcm3168a");

MODULE_ALIAS("spi:pcm3168a");
MODULE_ALIAS("of:N*T*Cti,pcm3168a");
MODULE_ALIAS("of:N*T*Cti,pcm3168aC*");

MODULE_INFO(srcversion, "6307A6C06CE8C6EA6302B20");
