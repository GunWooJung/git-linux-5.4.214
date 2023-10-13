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
	{ 0xbd25aaab, "genphy_loopback" },
	{ 0x4648b2aa, "phy_gbit_fibre_features" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0x9b485bd5, "genphy_update_link" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff1da461, "genphy_setup_forced" },
	{ 0x37ecb163, "genphy_restart_aneg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1630f465, "__phy_modify" },
	{ 0xd1c702ac, "phy_save_page" },
	{ 0xf6a6c348, "phy_modify_paged_changed" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x161d5d2f, "phy_read_paged" },
	{ 0x53863eaf, "phy_modify_paged" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85fb8f1c, "phy_ethtool_get_eee" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xae4a2ba4, "phy_write_paged" },
	{ 0x992f9981, "phy_modify" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x754d539c, "strlen" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x94b43553, "__mdiobus_write" },
	{ 0xe04cc459, "phy_restore_page" },
	{ 0x66965d3c, "phy_select_page" },
	{ 0xa5656f0c, "__mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011101010????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
MODULE_ALIAS("mdio:0000000101000001000011110100????");
MODULE_ALIAS("mdio:0000000101000001000011111001????");

MODULE_INFO(srcversion, "BE5544B17C0E115B836E8DC");
