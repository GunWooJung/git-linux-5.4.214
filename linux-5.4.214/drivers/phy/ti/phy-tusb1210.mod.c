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
	{ 0x6d5bd8c7, "ulpi_unregister_driver" },
	{ 0x5c28379e, "__ulpi_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e3c528b, "phy_create_lookup" },
	{ 0x85689ea0, "phy_create" },
	{ 0xca2ca1f5, "device_property_read_u8_array" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x74f57fd7, "ulpi_read" },
	{ 0xf4c27864, "ulpi_write" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x7d30c56, "phy_destroy" },
	{ 0xd0940b1b, "phy_remove_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ulpi");

MODULE_ALIAS("ulpi:v0451p1507");
MODULE_ALIAS("ulpi:v0451p1508");

MODULE_INFO(srcversion, "43DBFC02588A51CA77ABD15");
