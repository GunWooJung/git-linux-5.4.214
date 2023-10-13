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
	{ 0x2fa42658, "aic32x4_probe" },
	{ 0x2fda8c9d, "aic32x4_remove" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xbd1934ae, "aic32x4_regmap_config" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-tlv320aic32x4");

MODULE_ALIAS("of:N*T*Cti,tlv320aic32x4");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x4C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x6");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x6C*");
MODULE_ALIAS("spi:tlv320aic32x4");
MODULE_ALIAS("spi:tlv320aic32x6");

MODULE_INFO(srcversion, "2451DD932812F4773F43521");
