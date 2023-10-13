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
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0xab2e80c3, "bcm_phy_get_strings" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3a0b534, "bcm_phy_enable_apd" },
	{ 0xd7be3ab, "bcm_phy_r_rc_cal_reset" },
	{ 0x9f5cdd97, "bcm_phy_write_misc" },
	{ 0xa26021f5, "bcm_phy_28nm_a0b0_afe_config_init" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe75550f3, "bcm_phy_get_sset_count" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3f50b277, "bcm_phy_get_stats" },
	{ 0xe3247bb8, "bcm_phy_downshift_get" },
	{ 0x37ecb163, "genphy_restart_aneg" },
	{ 0x2aa0a796, "bcm_phy_set_eee" },
	{ 0xfeda6965, "bcm_phy_downshift_set" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x94b43553, "__mdiobus_write" },
	{ 0xa5656f0c, "__mdiobus_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bcm-phy-lib");

MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100010010????");
MODULE_ALIAS("mdio:1010111000000010010100011001????");
MODULE_ALIAS("mdio:1010111000000010010100001001????");
MODULE_ALIAS("mdio:1010111000000010010100111011????");
MODULE_ALIAS("mdio:1010111000000010010100011010????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0110000000001101100001100101????");
MODULE_ALIAS("mdio:0110000000001101100001001011????");
MODULE_ALIAS("mdio:0110000000001101100001101011????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:1010111000000010010100101110????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001110101????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");

MODULE_INFO(srcversion, "436A5798DD98097E270FC82");
