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
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xca944cd, "devm_kfree" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0xfbe42f54, "phy_read_mmd" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe04cc459, "phy_restore_page" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd1c702ac, "phy_save_page" },
	{ 0xa5656f0c, "__mdiobus_read" },
	{ 0x94b43553, "__mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000010011????");

MODULE_INFO(srcversion, "15AE7DD4C1E339BA1265926");
