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
	{ 0x290a5869, "phy_resolve_aneg_pause" },
	{ 0x1772ea45, "genphy_read_lpa" },
	{ 0x9b485bd5, "genphy_update_link" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf470f82b, "mdio_device_reset" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x6de37f52, "genphy_aneg_done" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x992f9981, "phy_modify" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:000000000100110111010000011?0110");
MODULE_ALIAS("mdio:000000000100110111010000011?0100");
MODULE_ALIAS("mdio:000000000100110111010000011?0010");

MODULE_INFO(srcversion, "5D2B7989C0CCFABE8A09D1C");
