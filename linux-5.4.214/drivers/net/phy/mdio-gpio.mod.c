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
	{ 0x656e4a6e, "snprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x22ed408f, "alloc_mdio_bitbang" },
	{ 0xc59ed4bd, "devm_gpiod_get_index_optional" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xe794eddc, "free_mdio_bitbang" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mdio-bitbang");

MODULE_ALIAS("of:N*T*Cvirtual,mdio-gpio");
MODULE_ALIAS("of:N*T*Cvirtual,mdio-gpioC*");

MODULE_INFO(srcversion, "C655288A20CBC671EFF277C");
