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
	{ 0x8f9045bb, "genphy_write_mmd_unsupported" },
	{ 0x40b66c33, "genphy_read_mmd_unsupported" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0xe04cc459, "phy_restore_page" },
	{ 0x1630f465, "__phy_modify" },
	{ 0x66965d3c, "phy_select_page" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xa5656f0c, "__mdiobus_read" },
	{ 0x94b43553, "__mdiobus_write" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0xf6a6c348, "phy_modify_paged_changed" },
	{ 0xae4a2ba4, "phy_write_paged" },
	{ 0x4c414beb, "genphy_read_abilities" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0x161d5d2f, "phy_read_paged" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x992f9981, "phy_modify" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "F658EA91F2472E94B73D666");
