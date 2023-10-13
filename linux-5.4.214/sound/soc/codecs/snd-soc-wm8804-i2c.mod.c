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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x7a7bff26, "wm8804_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5ece1697, "wm8804_regmap_config" },
	{ 0x807a52a5, "wm8804_remove" },
	{ 0xc89951e, "wm8804_pm" },
};

MODULE_INFO(depends, "snd-soc-wm8804");

MODULE_ALIAS("acpi*:1AEC8804:*");
MODULE_ALIAS("acpi*:10138804:*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "206FF811096C3E75AEFA13F");
