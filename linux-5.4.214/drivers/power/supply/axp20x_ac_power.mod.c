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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5bfbdd92, "iio_read_channel_processed" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cx-powers,axp202-ac-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp202-ac-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-ac-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-ac-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-ac-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-ac-power-supplyC*");

MODULE_INFO(srcversion, "063C50D42C4ACE2774FBDE3");
