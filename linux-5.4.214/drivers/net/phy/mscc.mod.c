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
	{ 0x6de37f52, "genphy_aneg_done" },
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0x992f9981, "phy_modify" },
	{ 0x37ecb163, "genphy_restart_aneg" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0x5792f848, "strlcpy" },
	{ 0x161d5d2f, "phy_read_paged" },
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0x53863eaf, "phy_modify_paged" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xa5656f0c, "__mdiobus_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe04cc459, "phy_restore_page" },
	{ 0x66965d3c, "phy_select_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x94b43553, "__mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111000001100111????");
MODULE_ALIAS("mdio:0000000000000111000001010110????");
MODULE_ALIAS("mdio:0000000000000111000001010111????");
MODULE_ALIAS("mdio:0000000000000111000001110110????");
MODULE_ALIAS("mdio:0000000000000111000001110111????");
MODULE_ALIAS("mdio:0000000000000111000001001010????");
MODULE_ALIAS("mdio:0000000000000111000001111100????");

MODULE_INFO(srcversion, "C045801CC83F31A52AECBCA");
