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
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000001010????");
MODULE_ALIAS("mdio:0000000000000111110000001011????");
MODULE_ALIAS("mdio:0000000000000111110000001100????");
MODULE_ALIAS("mdio:0000000000000111110000001101????");
MODULE_ALIAS("mdio:0000000000000111110000001111????");
MODULE_ALIAS("mdio:0000000000000111110000010001????");

MODULE_INFO(srcversion, "FA885A4F35634B6E5174667");
