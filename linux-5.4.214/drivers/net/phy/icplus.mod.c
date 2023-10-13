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
	{ 0x992f9981, "phy_modify" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x61853e9a, "device_property_present" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:????001001000011000011011000????");
MODULE_ALIAS("mdio:????001001000011000011011001????");
MODULE_ALIAS("mdio:????001001000011000011000101????");

MODULE_INFO(srcversion, "788E310D53E97A663F12A71");
