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
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0xfbe42f54, "phy_read_mmd" },
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0010000000000000101000100100????");
MODULE_ALIAS("mdio:0010000000000000101000010101????");

MODULE_INFO(srcversion, "CDAC683A4DE7DAC6E749152");
