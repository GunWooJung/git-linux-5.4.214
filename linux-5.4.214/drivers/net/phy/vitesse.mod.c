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
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0xff1da461, "genphy_setup_forced" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xa5656f0c, "__mdiobus_read" },
	{ 0x94b43553, "__mdiobus_write" },
	{ 0x992f9981, "phy_modify" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:????????????1111110001100010????");
MODULE_ALIAS("mdio:????????????11111100011011??????");
MODULE_ALIAS("mdio:????????????0111000001001101????");
MODULE_ALIAS("mdio:????????????0111000001000101????");
MODULE_ALIAS("mdio:????????????0111000001001000????");
MODULE_ALIAS("mdio:????????????0111000001010101????");
MODULE_ALIAS("mdio:????????????0111000001011000????");
MODULE_ALIAS("mdio:????????????0111000001100110????");
MODULE_ALIAS("mdio:????????????1111110001010101????");
MODULE_ALIAS("mdio:????????????1111110001001011????");

MODULE_INFO(srcversion, "99C6A88B37F6FB88399C06F");
