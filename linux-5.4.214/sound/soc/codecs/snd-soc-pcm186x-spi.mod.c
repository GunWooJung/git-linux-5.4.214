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
	{ 0xe233de81, "pcm186x_regmap" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xdb058858, "pcm186x_probe" },
};

MODULE_INFO(depends, "snd-soc-pcm186x");

MODULE_ALIAS("of:N*T*Cti,pcm1862");
MODULE_ALIAS("of:N*T*Cti,pcm1862C*");
MODULE_ALIAS("of:N*T*Cti,pcm1863");
MODULE_ALIAS("of:N*T*Cti,pcm1863C*");
MODULE_ALIAS("of:N*T*Cti,pcm1864");
MODULE_ALIAS("of:N*T*Cti,pcm1864C*");
MODULE_ALIAS("of:N*T*Cti,pcm1865");
MODULE_ALIAS("of:N*T*Cti,pcm1865C*");
MODULE_ALIAS("spi:pcm1862");
MODULE_ALIAS("spi:pcm1863");
MODULE_ALIAS("spi:pcm1864");
MODULE_ALIAS("spi:pcm1865");

MODULE_INFO(srcversion, "74E400F670FEB64BB5F301C");
