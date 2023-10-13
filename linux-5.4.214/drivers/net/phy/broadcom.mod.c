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
	{ 0xab2e80c3, "bcm_phy_get_strings" },
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0xfe172d3c, "bcm_phy_config_intr" },
	{ 0x6f099d1a, "bcm_phy_ack_intr" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0xf40333d0, "bcm_phy_read_exp" },
	{ 0x73d23eaa, "bcm_phy_write_exp" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0x79f3365b, "bcm_phy_write_shadow" },
	{ 0x679278be, "bcm_phy_read_shadow" },
	{ 0x6a074e43, "bcm54xx_auxctl_write" },
	{ 0x35b4b161, "bcm54xx_auxctl_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xe75550f3, "bcm_phy_get_sset_count" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3f50b277, "bcm_phy_get_stats" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bcm-phy-lib");

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0110000000001101100001001010????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000001101100010010111100110????");
MODULE_ALIAS("mdio:0000001101100010010111010001????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000001101100010010111010000????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");
MODULE_ALIAS("mdio:0000000101000011101111001111????");
MODULE_ALIAS("mdio:0000001101100010010111001101????");

MODULE_INFO(srcversion, "DF8EEB431C5E916EFE299EF");
